//https://codeforces.com/group/ne3Gw0clcM/contest/564564/problem/5
//o(N)
#include <iostream>
using namespace std;

int main(){
    int numb1;
    long long int numb2;

    cin >> numb1;
    cin >> numb2;

long long int i=numb1;
    while (i<=numb2)
    {
        cout << i << "\n";
        i*= numb1;
    }
    
}