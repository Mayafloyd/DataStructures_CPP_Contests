//https://codeforces.com/group/ne3Gw0clcM/contest/566192/problem/1
// Memory O(N), Time O(N`2)

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int N, number_int;
    string Numbers, sub;
    cin >> N;
    cin.ignore(); 
    getline(cin, Numbers);

    vector<int> v_numeros(N);

 
    size_t pos;
    for (size_t i = 0; i < N; i++)
    {
        pos= Numbers.find_first_of(" ");
        sub= Numbers.substr(0,pos);
        number_int = stoi(sub);
        v_numeros[i] = number_int;  
        Numbers.erase(0,pos+1);
    }
 
int acum= v_numeros.back();
  for(size_t i = 0;i< (v_numeros.size()-1); i++){
    int sumatory = v_numeros[v_numeros.size()-(i + 2)];
    acum += sumatory;
   cout << acum << "\n";
  }
    return 0;
}