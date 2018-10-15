#include <iostream>
using namespace std;

int main() {
    int ta, tb;
    int tc = 0;
    int* arregloA;
    int* arregloB;
    int* arregloC;

    // Leyendo número de elementos de A
    cin >> ta;
    arregloA = new int[ta];
    arregloC = new int[ta];
    // Leyendo elementos de A
    for( int i = 0; i < ta; i++ ) {
        cin >> *(arregloA + i);
    }

    // Leyendo número de elementos de B
    cin >> tb;
    arregloB = new int[tb];
    // Leyendo elementos de A
    for( int i = 0; i < tb; i++ ) {
        cin >> *(arregloB + i);
    }

    // Encontrando la cantidad de elementos iguales
    for( int i = 0; i < ta; i++ ) {
        for( int j = 0; j < tb; j++ ) {
            if( *(arregloA + i) == *(arregloB + j) ) {
                *(arregloC + tc) = *(arregloA + i);
                tc++;
            }
        }
    }

    // Mostrando resultados
    cout << tc << endl;
    for( int i = 0; i < tc; i++ ) {
        cout << *(arregloC + i) << " ";
    }

    return 0;
}