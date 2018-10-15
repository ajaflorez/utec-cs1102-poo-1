//
// Created by Maria Hilda Bermejo on 9/24/18.
//

#include <iostream>
#include "Arrays.h"
using namespace std;


int * CreayLlenaDatos(size_t numDatos, size_t & contMulde5, size_t &contMulde7)
//------------------------------------------------------------------------------
{int *pA;

  pA = new int[numDatos];
  for(size_t i=0; i<numDatos; i++)
  {
    pA[i] = rand()%1000;
    if(pA[i]%5==0)
      contMulde5++;
    if(pA[i]%7==0)
      contMulde7++;
  }
  return pA;  //-- devuelve el puntero que apunta al inicio del array
}

int * CrearArrayconMultiplos(int *A, size_t num, int multiplo, size_t contMultiplos)
//----------------------------------------------------------------------------------
{ //--- A es el puntero al array con todos los numeros
  //---  num es la cantidad de numeros en el array
  //--- multiplo, indica cuales multiplos se va a escoger para formar el nuevo array
  //--- contMultiplos es la cantidad de multiplos que hay en el array original
  int *pAM;
  pAM = new int[contMultiplos];
  //-- se llenan los datos segun sea el caso
  size_t indice=0;
  for(size_t i=0; i<num; i++)
  {
    if(A[i]%multiplo==0)
      pAM[indice++]=A[i];
  }
  return pAM;  //-- devuelve el array con los multiplos
}

void Imprimir(int *pArreglo, size_t n)
//------------------------------------
{ for(size_t i=0; i<n; i++)
    cout << setw(5) << pArreglo[i];
}

void  Eliminar(int * &pA)
//---------------------
{
  delete []pA;
  pA= nullptr;  //-- se esta lacrando el puntero.
}