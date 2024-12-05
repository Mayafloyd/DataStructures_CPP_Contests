//https://codeforces.com/group/ne3Gw0clcM/contest/569673/problem/1

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int C;// variable to store the number of cases
    cin >> C;// catch the number of cases 
    cin.ignore();// ignore the new line character
    size_t n = 0; // counter of processed cases
  
    while (n < C)// iterate over the cases
    {
        vector<int> values;// vector to store the values passed in the input
        string line = ""; // input variable

        int number;// variable to store the number passed by the stringStream
        int idx = 0;//current index of the vector

        getline(cin, line);//get the input line with the values
        stringstream ss(line);// pass the value to stringStream to obtain each value individually
        while(ss >> number) values.push_back(number);// iterate over the stringStream and store the values in the vector
        
        sort(values.begin(), values.end()); //sort the vector to group the values secuentially 
                                            //example: 
                                            // inputOfSort = 1 2 3 1 4 1
                                            // outputOfSort = 1 1 1 2 3 4
        
        int * current = &values[0];// pointer to the last value processed
        int frecuency = 0;// store the frecuency of the current value
        for (size_t i = 0; i < values.size(); i++)//iterate over the values
        {
            if(values[i] == *current){//verify if we are seen a new number or the same
                frecuency++;//if is the same increment the frecuency counter
            }else{//if is a new number
                cout << frecuency << " ";// print the frecuency of the previous number
                current = &values[i];//change the reference to the new number 
                frecuency = 1;// initialize the frecuency counter to 1 because 
                              // is the first time we see the number
            }
        } 
        std::cout << frecuency << "\n";//print the frecuency of the last number we saw
    n++;//increment the counter of processed cases because we finish the current case
    }
    return 0;
}