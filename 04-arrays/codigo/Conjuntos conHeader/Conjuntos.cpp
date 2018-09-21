//
// Created by Maria Hilda Bermejo on 9/11/18.
//
#include <iostream>
#include <iomanip>
#include "Conjuntos.h"

using namespace std;

void Imprimir(int Arreglo[], int n)
{//Imprime los elementos del arreglo
  for(int i=0; i<n; i++)
    cout<<setw(7)<<Arreglo[i];
}

bool Esta(int elemento, int Arreglo[], int tam)
{//-- Busca si un elemento esta en el arreglo.
  //-- Si esta devuelve true y false si no esta
  int i;
  i=0;
  while(i<tam && Arreglo[i]!=elemento)
    i++;
  if(i==tam)
    return false;
  else
    return true;
}

void LeeConjunto(int Arreglo[],int &tam)
{
  do {
    cout << "Numero de elementos a leer : ";
    cin >> tam;
  } while (tam < 1 || tam > MAX);
  //--- se leen los elementos al array sin leer datos repetidos
  int i;
  i = 0;
  while (i < tam)
  {
    do {
      cout << "A[" << i << "]=";
      cin >> Arreglo[i];
    } while(Esta(Arreglo[i], Arreglo, i));
    i++;
  }
}

void HallaUnion(int A1[], int nA1, int A2[], int nA2, int Union[], int &nUnion)
{//---pasamos todos los elementos de A1 al array Union
  for(int i=0; i<nA1; i++)
    Union[i]=A1[i];
  nUnion=nA1;
  //---pasamos los elementos de A2 que no esten en Union
  for(int i=0; i<nA2; i++)
  {
    if(!Esta(A2[i],Union,nUnion))
      Union[nUnion++]=A2[i];
  }
}

void  HallaInterseccion(int A1[],int tamannoA1,int A2[], int tamannoA2,
                        int Interseccion[],int &tamannoInterseccion)
{//--- halla el conjunto interseccion
  tamannoInterseccion=0;
  for(int i=0; i<tamannoA1; i++)
    if(Esta(A1[i],A2,tamannoA2))
      Interseccion[tamannoInterseccion++]=A1[i];
}