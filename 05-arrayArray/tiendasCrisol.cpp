#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int matriz[7][5];
    int tiendaMas = 0;
    int mayor = 0;
    int suma = 0;
    
    // Lectura de datos
    for(int i = 0; i < 7;i++) {
        for(int j = 0;j < 5; j++) {
            cin >> matriz[i][j];
        }
    }
    // Tienda con mas venta
    tiendaMas = 0;
    mayor = matriz[0][4];
    for(int i=0; i < 7; i++) {
        if(mayor < matriz[i][4]) {
            tiendaMas = i;
            mayor = matriz[i][4];
        }
    }
    cout << "La tienda que vendio mas libros el dia viernes=" << tiendaMas;
    cout << endl;
    for(int i = 0; i < 7;i++) {
        for(int j = 0;j < 5; j++) {
            suma += matriz[i][j];
        }
    }
    cout << "Media de las ganancias por dia=" << suma/5.0;
    
    return 0;
}
