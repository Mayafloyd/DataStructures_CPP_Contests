//https://codeforces.com/group/ne3Gw0clcM/contest/569673/problem/1

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int N, M;

    cin >> N;
    vector<int> v_array(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> v_array[i];
    }

    cin >> M;
    vector<int> v_nums(M, 0);
    for (int i = 0; i < M; i++) {
        cin >> v_nums[i];
    }

    int summatory = 0;
  
    for (size_t i = 0; i < v_nums.size(); i++)
    {
       auto it = lower_bound(v_array.begin(), v_array.end(), v_nums[i]);

       if (it != v_array.end() && *it == v_nums[i])
       {
          int position = it - v_array.begin();
          summatory += position + 1;
       }
    }

    cout << summatory << endl;

    return 0;
}