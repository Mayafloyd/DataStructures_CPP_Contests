//https://codeforces.com/group/ne3Gw0clcM/contest/567912/problem/1

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  bool P = true;

  vector < int > v_numeros;
  vector < int > v_multiplos;

  while (P) {
    string Line;
    getline(cin, Line);
    size_t pos = Line.find(" ");
    string letter = Line.substr(0, pos);

    if (letter == "E") {
      P = false;
      break; 
    }
    int number = stoi(Line.substr(pos + 1));

    if (letter == "A") {
      v_numeros.push_back(number);
    } else if (letter == "M") {
      int sumatoria = 0;
      for (size_t i = 0; i < v_numeros.size(); i++) {
        if (v_numeros[i] % number == 0) {
          sumatoria += v_numeros[i];
        }
      }
      v_multiplos.push_back(sumatoria);
    } 
  }

  for (size_t i = 0; i < v_multiplos.size(); i++)
  {
    cout << v_multiplos[i] << "\n";
  }
  

  return 0;
}