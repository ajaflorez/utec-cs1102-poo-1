#include <iostream>
#include <iomanip>
#include "Arrays.h"
using namespace std;

int main()
{ size_t numDatos;
  int *pA,*pMultiplode5, *pMultiplosde7;
  size_t contMulde5=0, contMulde7=0;

  srand(time(nullptr));
  cout <<"Numero de elementos : ";
  cin >> numDatos;

  pA = CreayLlenaDatos(numDatos, contMulde5, contMulde7);
  pMultiplode5=CrearArrayconMultiplos(pA, numDatos, 5, contMulde5);
  pMultiplosde7=CrearArrayconMultiplos(pA, numDatos, 7,contMulde7);

  cout<<"\n\nArray con datos\n";
  Imprimir(pA,numDatos);
  cout<<"\nArray con los multiplos de 5\n";
  Imprimir(pMultiplode5,contMulde5);
  cout<<"\nArray con los multiplos de 7\n";
  Imprimir(pMultiplosde7,contMulde7);
  Eliminar(pA);
  Eliminar(pMultiplode5);
  Eliminar(pMultiplosde7);
  return 0;
}

