//https://codeforces.com/group/ne3Gw0clcM/contest/566192/problem/5
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int repartir(int n, int b, vector<int> bills) { 
    vector<int> distribucion(n, 0);
    for (int i = 0; i < b; i++) {
        distribucion[i % n] += bills[i];
    }
    int maximo = distribucion[0];
    int minimo = distribucion[0];
    for (int i = 1; i < n; i++) {
        if (distribucion[i] > maximo) {
            maximo = distribucion[i];
        }
        if (distribucion[i] < minimo) {
            minimo = distribucion[i];
        }
    }

    return maximo - minimo;
}

int main() {
    int casos;
    cin >> casos;

    vector<int> resultados(casos);

    for (int i = 0; i < casos; i++) {
        int n, b;
        cin >> n >> b;
        vector<int> bills(b);

        for (int j = 0; j < b; j++) {
            cin >> bills[j];
        }

        resultados[i] = repartir(n, b, bills);
    }

    for (int resultado : resultados) {
        cout << resultado << endl;
    }

    return 0;
}
