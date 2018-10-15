#include <iostream>
using namespace std;

string obtenerNombre( int candidato ) {
    string nombre = "";
    switch( candidato ) {
        case 1: nombre = "Jorge"; break;
        case 2: nombre = "Manuel"; break;
        case 3: nombre = "Renzo"; break;
        case 4: nombre = "Luis"; break;
        case 5: nombre = "Daniel"; break;
        case 6: nombre = "Humberto"; break;
        case 7: nombre = "Ricardo"; break;
        case 8: nombre = "Alberto"; break;
        case 9: nombre = "Esther"; break;
    }
    return nombre;
}

int main() {
    int electores;
    int voto;
    int ganador = 0;
    int candidatos[10] = {0};

    cin >> electores;

    for( int i = 0; i < electores; i++ ) {
        cin >> voto;
        candidatos[ voto ]++;
    }

    ganador = candidatos[0];
    for( int i = 0; i < 10; i++ ) {
        if( candidatos[i] > candidatos[ganador] ) {
            ganador = i;
        }
    }
    cout << obtenerNombre(ganador);

    return 0;
}