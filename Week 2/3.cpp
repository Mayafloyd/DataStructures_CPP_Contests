//https://codeforces.com/group/ne3Gw0clcM/contest/566192/problem/3

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
int N;

vector<string> v_container;


cin>>N;
cin.ignore();

int i=0;
while (i< N)
{
 string aux;
 getline(cin, aux);
 v_container.push_back(aux);    
 i++;   
}


for (size_t i = 0; i < v_container.size(); i++) {
    string Mletters;
    vector<string> v_mletters;

     Mletters = v_container[i];

    Mletters.erase(remove(Mletters.begin(), Mletters.end(), ' '), Mletters.end());

    for (size_t i = 0; i < Mletters.size(); i ++) {
        v_mletters.push_back(Mletters.substr(i, 1));
    }

    int arraySize= v_mletters.size();   
    
    for (size_t i = 0; i < (arraySize/2); i++) {
        string aux = v_mletters[i];
        v_mletters[i] = v_mletters[arraySize-i-1];
        v_mletters[arraySize-i-1] = aux;   
    }

    for (size_t i = 0; i < (arraySize/2);i++) {
        string aux2 = v_mletters[i*2];
        v_mletters[i*2] = v_mletters[(i*2)+1];
        v_mletters[(i*2)+1]= aux2;      
    }

    for (size_t i = 0; i < v_mletters.size();i++) {
        cout << v_mletters[i] ;
    }
    cout<< "\n";
}
return 0;
}