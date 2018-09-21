#include <iostream>
#include "Letras.h"
using namespace std;

int main() {
  int CuentaLetras[numdeLetras] = {0};
  string nombreDelArchivo;

  cout << "Nombre del archivo: ";
  cin >> nombreDelArchivo;
  Contar(CuentaLetras, nombreDelArchivo);
  Imprimir(CuentaLetras);
  return 0;
}


