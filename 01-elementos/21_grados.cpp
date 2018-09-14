#include <iostream>
#include <iomanip>
using namespace std;

const float PI=3.1415;

int main()
{
    double anguloGra, anguloRad;

    cout << "Angulo en radianes : ";
    cin >> anguloRad;
    anguloGra = anguloRad * 180.0 / PI;
    cout << "Angulo en grados : " << fixed << setprecision(3) << anguloGra;
    return 0;
}
