#include <iostream>
using namespace std;

int main()
{
    int numero = 10;
    float x=12.75;

    cout << "Numero = " << numero << "\n";
    cout << "La direccion de la variable numero es " << &numero << "\n\n";

    cout << "x = " << x << "\n";
    cout << "La direccion de la variable x es " << &x;

    return 0;
}