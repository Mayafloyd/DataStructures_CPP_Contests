#include <iostream>
#include <vector>
#include <string>

using namespace std;


void splitToArray(const string& input, vector<int>& arr) {
    size_t start = 0, end;
    while ((end = input.find(' ', start)) != string::npos) {
        arr.push_back(stoi(input.substr(start, end - start)));
        start = end + 1;
    }
    arr.push_back(stoi(input.substr(start)));
}


int recorrer(int size, const vector<int>& map) {
    vector<bool> visited(size, false);
    int pos = 0, steps = 0;

    while (pos >= 0 && pos < size) {
        if (visited[pos]) {
            return steps; 
        }

        visited[pos] = true; 
        pos += map[pos];    
        steps++;             
    }

    return steps; 
}

int main() {
    int casos;
    cin >> casos;
    vector<int> output(casos);

    for (int i = 0; i < casos; ++i) {
        int len;
        cin >> len;
        cin.ignore();

        string mapp;
        getline(cin, mapp);

        vector<int> map;
        splitToArray(mapp, map);

        output[i] = recorrer(len, map);
    }

    for (int result : output) {
        cout << result << endl;
    }

    return 0;
}