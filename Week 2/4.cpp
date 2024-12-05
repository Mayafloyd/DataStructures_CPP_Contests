//https://codeforces.com/group/ne3Gw0clcM/contest/566192/problem/4
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int N;
    string Letters;

    cin >> N;
    cin.ignore();
    getline(cin, Letters);

    vector<string> v_letters(N);

    size_t pos;

   for (size_t i = 0; i < N; i++)
   {
    pos= Letters.find_first_of(",");
    v_letters[i] = Letters.substr(0,pos);
    Letters.erase(0,pos+2);
    }

 vector<string> rainbow(N);

    size_t left = 0, right = N - 1;
    for (size_t i = 0; i < N; i++) {
        if (i % 2 == 0) {
            rainbow[i] = v_letters[left++]; 
        } else {
            rainbow[i] = v_letters[right--]; 
        }
    }

   for (size_t i = 0; i < N; i++)
   {
       cout << rainbow[i] ;
   }
    return 0;
 
 }