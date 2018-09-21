//
// Created by Maria Hilda Bermejo on 9/17/18.
//

#include <cstdlib>
#include <iomanip>
#include "Arrays.h"


void LlenarArray(int M[][nCOLUMNAS],size_t filas, size_t columnas)
{//--------------------------------------------------------------
  for(size_t f=0; f<filas; f++)
    for(size_t c=0; c<columnas; c++)
      M[f][c] = rand()%100;
}

void ImprimirArray(int M[][nCOLUMNAS],size_t filas, size_t columnas)
{//-----------------------------------------------------------------
  for(size_t f=0; f<filas; f++)
  {
    for (size_t c = 0; c < columnas; c++)
      cout << setw(5) << M[f][c];
    cout<<"\n";
  }
}

int ElMenor(int M[][nCOLUMNAS], size_t filas, size_t columnas)
{//----------------------------------------------------------
  int Menor;

  Menor=M[0][0];
  for(size_t f=0; f<filas; f++)
    for (size_t c = 0; c < columnas; c++)
      if(M[f][c]<Menor)
        Menor =M[f][c] ;
  return Menor;
}


int SumadeDiagonal(int M[][nCOLUMNAS], size_t filas, size_t columnas)
{//-----------------------------------------------------------------
  int Suma=0;

  for(size_t f=0; f<filas; f++)
    Suma+=M[f][f];
  return Suma;
}

int SumaPorEncimadelaDiagonal(int M[][nCOLUMNAS], size_t filas, size_t columnas)
{//-----------------------------------------------------------------------------
  int Suma=0;

  for(size_t f=0; f<filas-1; f++)
    for (size_t c = f+1; c < columnas; c++)
      Suma+=M[f][c];
  return Suma;
}