#include <iostream>

using namespace std;

int main()
{  double *pnumero1= nullptr, *pnumero2= nullptr;

  pnumero1 = new double;
  pnumero2 = new double;

  cout << "Numero 1 : ";
  cin >> *pnumero1;     //-- se lee el numero en el sitio apuntado por el puntero
  cout << "Numero 2  : ";
  cin >> *pnumero2;
  cout << "\n";
  cout << "La Suma es : " << *pnumero1  + *pnumero2 << "\n";
  cout << "La Diferencia es : " << *pnumero1  - *pnumero2 << "\n";
  cout << "El Producto es : " << *pnumero1  * *pnumero2 << "\n";
  delete pnumero1;
  delete pnumero2;
  return 0;
}