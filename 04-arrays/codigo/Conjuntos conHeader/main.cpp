#include <iostream>
#include <iomanip>
#include "Conjuntos.h"
using namespace std;

int main()
{ int A1[MAX];  //--- MAX es una constante definida en el header Conjuntos.h
  int A2[MAX];
  int Union[MAX*2];
  int Interseccion[MAX];
  int tamannoA1, tamannoA2;
  int tamannoUnion,tamannoInterseccion;

  LeeConjunto(A1,tamannoA1);
  cout<<"\n\nPrimer conjunto leido \n";
  Imprimir(A1,tamannoA1);
  cout<<"\n";
  LeeConjunto(A2,tamannoA2);
  cout<<"\nSegundo conjunto leido \n";
  Imprimir(A2,tamannoA2);
  HallaUnion(A1,tamannoA1,A2,tamannoA2,Union,tamannoUnion);
  cout<<"\n\nConjunto Union\n";
  Imprimir(Union,tamannoUnion);
  HallaInterseccion(A1,tamannoA1,A2,tamannoA2,Interseccion,tamannoInterseccion);
  cout<<"\n\nConjunto Interseccion\n";
  Imprimir(Interseccion,tamannoInterseccion);
  return 0;
}
