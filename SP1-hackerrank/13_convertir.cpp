#include <iostream>
#include <cmath>
using namespace std;

int getTamano(int numero) {
    int cont = 0;
    while( numero > 0 ) {
        numero /= 10;
        cont++;
    }
    return cont;
}
char getCaracter( int numero ) {
    switch( numero ) {
        case 1: return 'Q';
        case 2: return 'W';
        case 3: return 'E';
        case 4: return 'R';
        case 5: return 'T';
        case 6: return 'Y';
        case 7: return 'U';
        case 8: return 'I';
        case 9: return 'A';
        case 0: return 'S';
        default: return '-';
    }
}

int main() {

    int numero, tamano, digito;

    cin >> numero;
    tamano = getTamano( numero );

    while( tamano > 0 ) {
        digito = numero / pow( 10, tamano - 1 );
        cout << getCaracter( digito );
        numero = numero - ( pow( 10, tamano - 1 ) * digito );
        tamano--;
    }
    return 0;
}
