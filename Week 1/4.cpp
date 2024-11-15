//https://codeforces.com/group/ne3Gw0clcM/contest/564564/problem/4
#include <iostream>
using namespace std;

int main() {
    int numb;
    cin >> numb;
    if (numb%2==0){
        cout << "es multiplo de 2";
    }else if (numb%3==0){
        cout << "es multiplo de 3";}
    else if (numb%5==0){
        cout << "es multiplo de 5";}
    else if(numb%7==0){
            cout << "es multiplo de 7";
    }else{
            cout << "no es multiplo de ninguno de los primeros cuatro primos";
    }


    // int divisors[] = {2, 3, 5, 7};
    // bool isMultiple = false;

    // for (int divisor : divisors) {
    //     if (numb % divisor == 0) {
    //         cout << "es multiplo de " << divisor << endl;
    //         isMultiple = true;
    //         break; 
    //     }
    // }

    // if (!isMultiple) {
    //     cout << "no es multiplo de ninguno de los primeros cuatro primos" << endl;
    // }
}
