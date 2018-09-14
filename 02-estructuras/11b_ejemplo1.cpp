#include <iostream>
using namespace std;

int main()
{
    int n;
    char word;

    do {
        cout << "Escribe la Letra: ";
        cin >> word;
        cout << "Numero de veces que se repetira: ";
        cin >> n;
    } while( n < 0 || n > 100 );

    // Primera Forma
    int current = 0;
    while( current < n ) {
        cout << word << "\n";
        current++;
    }

    //Segunda Forma
    for( current = 0; current < n; current++ ) {
        cout << word << "\n";
    }

    //Segunda Forma
    current = 0;
    do {
        cout << word << "\n";
        current++;
    } while( current < n );

    return 0;
}
