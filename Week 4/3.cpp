//https://codeforces.com/group/ne3Gw0clcM/contest/569673/problem/3

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int C;
    cin >> C;
    cin.ignore();
    
    while (C--)       
    {
      int N,P;
      cin >> N >> P;  
      cin.ignore();
      vector<int> v_values(N, 0);
      for (int i = 0; i < N; i++) {
        cin >> v_values[i];
      }
      bool isPrimiConjunt = true;
      for (size_t i = 1; i*i <= P; i++)
      {
        if(P%i==0){
         if (!binary_search(v_values.begin(), v_values.end(), i) || !binary_search(v_values.begin(), v_values.end(), P / i))
         {
           isPrimiConjunt = false;
           break;
         }
         
        }

      }
      if (isPrimiConjunt) {
      cout << "Es PrimiConjunto" << "\n";
        } else {
      cout << "No es PrimiConjunto" << "\n";
      }
  
 
    }
    
    return 0;
}