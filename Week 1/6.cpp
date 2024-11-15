//https://codeforces.com/group/ne3Gw0clcM/contest/564564/problem/6
#include <iostream>
using namespace std;

int main(){
     int numb1;
     cin >> numb1;

 cout << numb1 << "\n";
 
while (numb1>1)
{
     if(numb1%2==0){
        numb1 = numb1/2;
         cout << numb1 << "\n";
         }else if(numb1%2!=0){
            numb1 = (3*numb1)+1;
                cout << numb1 << "\n";
         }
}
}