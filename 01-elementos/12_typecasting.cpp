#include <iostream>
using namespace std;

int main()
{
    float numero;
    float parteEntera, fraccion;

    cout << "Ingresa un float :";
    cin >> numero;
    parteEntera = (int)numero;
    fraccion = numero - (int)numero;
    cout << "Parte Entera  :" << parteEntera << "\n";
    cout << "Parte Fraccionaria : " << fraccion;

    return 0;
}
