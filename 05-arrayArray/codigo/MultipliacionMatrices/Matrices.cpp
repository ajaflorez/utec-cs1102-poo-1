//
// Created by Maria Hilda Bermejo on 9/17/18.
//
#include "Matrices.h"
using namespace std;


void GenerarMatriz(Tipo M[][nCOLUMNAS], size_t nfilas,  size_t ncol)
{//-----------------------------------------------------------------
  for(size_t contFilas=0; contFilas<nfilas; contFilas++)
    for(size_t contColumnas=0; contColumnas<ncol; contColumnas++)
       M[contFilas][contColumnas] = rand()%100;
}

void ImprimirMatriz(Tipo M[][nCOLUMNAS], size_t nfilas,  size_t ncol)
{//-----------------------------------------------------------------
  for(size_t contFilas=0; contFilas<nfilas; contFilas++)
  {
    for (size_t contColumnas = 0; contColumnas < ncol; contColumnas++)
      cout << setw(7) << M[contFilas][contColumnas];
    cout <<"\n";
  }

}

void MultiplicarMatrices(Tipo M1[][nCOLUMNAS], size_t nfilasM1, size_t ncolM1,
                         Tipo M2[][nCOLUMNAS], size_t nfilasM2, size_t ncolM2,
                         Tipo M3[][nCOLUMNAS], size_t &nfilasM3, size_t &ncolM3)
{//----------------------------------------------------------------------------
  //  M3 = M1 * M2
  for (int f = 0; f < nfilasM1; ++f)
  {
    for (int c = 0; c < ncolM2; ++c)
    {
      M3[f][c] = 0;
      for (int k = 0;k < ncolM1; k++){
        M3[f][c] += M1[f][k]*M2[k][c];
      }
    }
  }
  nfilasM3=nfilasM1;
  ncolM3 = ncolM2;
}