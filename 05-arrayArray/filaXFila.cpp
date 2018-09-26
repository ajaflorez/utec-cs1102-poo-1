#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    int matriz[4][5];
    
    // Lectura de los datos
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> matriz[i][j];
        }
    }
    cout << "Matriz leida" << endl;
    // Mostrar de los datos
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            cout << setw(5) << matriz[i][j];
        }
        cout << endl;
    }
    cout << "Matriz 2" << endl;
    // Mostrar de los datos
    for(int i = 4-1 ; i >= 0; i--) {
        for(int j = 0; j < 5; j++) {
            cout << setw(5) << matriz[i][j];
        }
        cout << endl;
    }
    return 0;
}
