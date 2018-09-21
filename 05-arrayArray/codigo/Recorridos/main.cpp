#include <iostream>
#include <ctime>
#include "Arrays.h"

using namespace std;


int main()
{
  int M[nFILAS][nCOLUMNAS];

  srand(time(nullptr));
  cout<<"\n";
  LlenarArray(M,nFILAS, nCOLUMNAS);
  ImprimirArray(M,nFILAS, nCOLUMNAS);
  cout<<"\n";
  cout<<"El menor elemento almacenado en el array es " << ElMenor(M,nFILAS,nCOLUMNAS);
  cout<<"\n";
  cout<<"La suma de la diagonal es igual a "<<SumadeDiagonal(M,nFILAS,nCOLUMNAS);
  cout<<"\n";
  cout<<"Suma de los elementos por encima de la diagonal : " <<SumaPorEncimadelaDiagonal(M,nFILAS,nCOLUMNAS);
  cout<<"\n";
  return 0;
}