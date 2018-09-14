#include <iostream>
using namespace std;

int main()
{
    float kw;
    float monto;

    cout << "Ingrese consumo en Kw : ";
    cin >> kw;

    monto = (kw<=100) * kw * 0.4522 + (kw>100) * (100*0.4522 + (kw-100) * 0.7);
    cout << "El monto a pagar es " << monto << " soles.";
}
