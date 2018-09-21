//
// Created by Maria Hilda Bermejo on 9/11/18.
//
#include "Letras.h"
#include <iostream>
using namespace std;

void Contar(int Letras[], string nombreDelArchivo)
{//--halla el numero de ocurrencias de cada letra del albeto ingles

  fstream miarchivo(nombreDelArchivo,ios::in);
  char car;
  while(miarchivo>>car)
  {
    car=toupper(car);
    if((car>='A' && car<='Z'))
      Letras[car-'A']++;
  }
  miarchivo.close();
}

void Imprimir(int Letras[])
{
  for(int i=0; i<numdeLetras;i++)
    cout << "Letra "<< (char)('A'+i) << " esta " <<Letras[i] << " veces "<<"\n";
}

