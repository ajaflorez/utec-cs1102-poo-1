#include <iostream>
#include <ctime>
#include "Matrices.h"

using namespace std;

int main()
{
  Tipo M1[nFILAS][nCOLUMNAS], M2[nFILAS][nCOLUMNAS];
  Tipo M3[nFILAS][nCOLUMNAS];
  size_t nfilasM1, ncolM1, nfilasM2, ncolM2, nfilasM3, ncolM3;

  //-- si se modifica estos valores y las constantes que definen
  //-- el tamaño de la matriz, se podria cambiar el orden de las
  //-- de las matrices manualmente con pocos cambios en el programa,
  //-- sin embargo para un mejor trabajo, este programa se resolverá
  //-- de diferente manera cuando se usen punteros y asignación dinámica de memoria
  nfilasM1 = nFILAS;
  ncolM1   = nCOLUMNAS;
  nfilasM2 = nFILAS;
  ncolM2   = nCOLUMNAS;

  srand(time(nullptr));
  GenerarMatriz(M1,nfilasM1, ncolM1);
  GenerarMatriz(M2,nfilasM2, ncolM2);
  cout<<"\n";
  cout <<"Primera Matriz \n\n";
  ImprimirMatriz(M1,nfilasM1, ncolM1);
  cout<<"\n";
  cout <<"Segunda Matriz \n\n";
  ImprimirMatriz(M2,nfilasM2, ncolM2);
  if( ncolM1!=nfilasM2)
     cout <<"Imposible multiplicar las matrices ";
  else
  {
     MultiplicarMatrices(M1,nfilasM1, ncolM1, M2,nfilasM2, ncolM2,
                         M3,nfilasM3, ncolM3);
   cout << "\n";
   cout << "Tercera Matriz\n\n";
   ImprimirMatriz(M3,nfilasM3, ncolM3);
  }
  return 0;
}