#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numero;
    int array[3][4];
    int fila = -1, columna = -1;

    // Leyendo el número
    cin >> numero;

    // Leyendo los elemento del array
    for( int i = 0; i < 3; i++ ) {
        for( int j = 0; j < 4; j++ ) {
            cin >> array[i][j];
            if( array[i][j] == numero ) {
                fila = i;
                columna = j;
            }
        }
    }

    cout << "Matriz leida" << endl;
    for( int i = 0; i < 3; i++ ) {
        for( int j = 0; j < 4; j++ ) {
            cout << setw(5) << array[i][j];
        }
        cout << endl;
    }
    cout << "Posicion del dato " << numero << endl;
    cout << "Fila: " << fila << endl;
    cout << "Columna: " << columna;

    return 0;
}