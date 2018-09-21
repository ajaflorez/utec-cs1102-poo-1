#include <iostream>
using namespace std;

bool esPrimo( int numero ) {
    int i = 11;
    if( numero == 2 || numero == 3 || numero == 5 || numero == 7 )
        return true;
    if( numero % 2 == 0 )
        return false;
    if( numero % 3 == 0 )
        return false;
    if( numero % 5 == 0 )
        return false;
    if( numero % 7 == 0 )
        return false;
    while( i < ( numero / 3 ) ) {
        if( numero % i == 0 )
            return false;
        i+=2;
    }
    return true;
}

int main() {
    int cantidad;
    int cont = 0, i = 2, suma = 0;
    cin >> cantidad;
    while( cont < cantidad ) {
        if( esPrimo( i ) ) {
            suma += i;
            cont++;
        }
        i++;
    }
    cout << suma;
    return 0;
}