//https://codeforces.com/group/ne3Gw0clcM/contest/566192/problem/2
//
 #include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int N,SO,LAR,IS;
    string player1,player2,player3;
    cin >> N;
    cin.ignore();
    SO=0;
    LAR=0;
    IS=0;
    getline(cin, player1);
    getline(cin, player2);
    getline(cin, player3);

    vector<int> v_player1(N);
    vector<int> v_player2(N);
    vector<int> v_player3(N);

   size_t pos;

   for (size_t i = 0; i < N; i++)
   {
    pos= player1.find_first_of(",");
    v_player1[i] = stoi(player1.substr(0,pos));
    player1.erase(0,pos+2);

    v_player2[i] = stoi(player2.substr(0, pos));
    player2.erase(0, pos+2);

     v_player3[i] = stoi(player3.substr(0, pos));
    player3.erase(0, pos+2);
    }


 for(size_t i = 0;i< N; i++){
    if ((v_player1[i] + v_player2[i] + v_player3[i]) %2 == 0)
    {
       if(v_player1[i]%2 ==0){
        SO ++;
       }
       if(v_player2[i]%2 ==0){
        LAR ++;
       }
       if(v_player3[i]%2 ==0){
        IS ++;
       }
    }else{
         if(v_player1[i]%2 !=0){
          SO ++;
         }
            if(v_player2[i]%2 !=0){
          LAR ++;
         }
            if(v_player3[i]%2 !=0){
          IS ++;
         }
    }
  }
  cout << "SO:" << SO << ", "<< "LAR:" << LAR << ", " << "IS:" << IS ;
}