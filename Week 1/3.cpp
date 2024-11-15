//https://codeforces.com/group/ne3Gw0clcM/contest/564564/problem/3
#include <iostream>
using namespace std;

int main() {
  int numb,x;
  int positivos=0;
  int negativos=0;
  cin >> numb;
    
   for (size_t i = 0; i < numb; i++){
    cin >> x;
    if(x>0){
        positivos += x;
    }else{
        negativos += x;
    }
   }

   cout << "positivos " << positivos << ", " << "negativos " << negativos;
}