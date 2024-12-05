#include <iostream>
#include <algorithm>

using namespace std;
int repartir(int n, int b, int bills[]){
    int distribucion[n]= {0*n};
    int actor, len;
    for (int i=0; i<b; i++){
        distribucion[i%n]= bills[i]+ distribucion[i%n];
    }
    len= sizeof(distribucion)/sizeof(distribucion[0]);
    return *max_element(distribucion , distribucion +len)- *min_element(distribucion, distribucion+ len);
}

int main(){
    int casos, n, b, pos;
    string line, bills;
    cin>>casos;
    int out[casos];
    for (int i=0; i<casos; i++){
        getline(cin>>ws, line);
        getline(cin>>ws, bills);
        pos= line.find_first_of(' ');
        n= stoi(line.substr(0, pos));
        b= stoi(line.substr(pos, line.length() -1));
        int billetes[b];
        for(int i=0; i<b; i++){
            pos= bills.find_first_of(' ');
            string sub= bills.substr(0, pos);
            bills.erase(0, pos+1);
            billetes[i]= stoi(sub);
        }
        out[i]= repartir(n, b, billetes);
    }
    for(int i: out){
        cout<<i<<endl;
    }
    return 0;
}