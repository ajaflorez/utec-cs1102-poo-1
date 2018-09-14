#include <iostream>
using namespace std;

int main()
{
    int num, total, pares,impares;
    total = pares = impares = 0;

    cout << "Ingresa un numero: ";
    cin >> num;
    while( num != 0 )
    {
        if(num % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
        total++;

        cout << "Ingresa un numero: ";
        cin >> num;
    }

    cout << "Numeros Leidos: " << total << "\n";
    cout << "Numeros Pares: " << pares << "\n";
    cout << "Numeros Impares: " << impares << "\n";
    return 0;
}
