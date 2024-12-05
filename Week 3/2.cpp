//https://codeforces.com/group/ne3Gw0clcM/contest/567912/problem/2

#include <iostream>
#include <vector>
#include <string>
using namespace std;


  int josephus(vector<int> v_students, int K) {
    if (v_students.size() == 1){
        return v_students[0];
    }else{
        int index = (K - 1) % v_students.size();
        v_students.erase(v_students.begin() + index);
        int modAdjusted = (index + K - 1) % v_students.size();
        
        return josephus(v_students, modAdjusted + 1);
    }

         }

int main(){

    int T;
    cin >> T;
    cin.ignore();
    vector < int > v_results;


  

    while (T--)
    {
        int N, K;
        cin >> N >> K;
        
        vector < int > v_students(N);

        for (size_t i = 1; i <= N; i++)
        {
            v_students[i-1]=i;
        }
       v_results.push_back(josephus(v_students, K)) ;
   
      
    }

    for (size_t i = 0; i < v_results.size(); i++)
    {
        cout << v_results[i] << "\n";
    }
    
return 0;
    }