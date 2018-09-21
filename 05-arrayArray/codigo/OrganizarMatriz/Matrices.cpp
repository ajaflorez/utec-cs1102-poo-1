#include "Matrices.h"

using namespace std;

void inicializarMatriz(valoresDeMatriz matriz[][s])
{//-----------------------------------------------
  // 1 significa que hay alguien sentado
  // 0 significa que es una asiento vacio

  for (int filas = 0; filas < s; ++filas){
    for (int columnas = 0; columnas < s; ++columnas){
      matriz[filas][columnas] = rand() % 2;
    }
  }
}

void imprimirMatriz(valoresDeMatriz matrizA[][s], valoresDeMatriz matrizB[][s], bool flag)
{//---------------------------------------------------------------------------------------
  int count;
  for (int filas = 0; filas < s; ++filas){
    count = 0;
    for (int columnas = 0; columnas < s; ++columnas){
      cout << setw(3) << matrizA[filas][columnas] << " ";
      count += !matrizA[filas][columnas];
    }
    if(flag) cout << setw(3) <<"["<<count<<"]"; //-- imprime cantidad de asientos disponibles por fila

    count = 0;
    cout << "\t\t";
    for (int columnas = 0; columnas < s; ++columnas){
      cout << setw(3)<< matrizB[filas][columnas] << " ";
      count += !matrizA[filas][columnas];
    }
    if(flag)  cout << setw(3)<<"["<<count<<"]";//-- imprime cantidad de asientos disponibles por fila

    cout << "\n";
  }
  cout << "\n";
}


void organizarMatriz(valoresDeMatriz matriz[][s], bool flag)
{//---------------------------------------------------------
  //--- si flag es true, mueve los unos a la derecha
  //--- si flag es false, mueve los unos a la izquierda
  for (int filas = 0; filas < s; ++filas){
    for (int columnas_inicio = 0, columnas_fin = s-1; columnas_inicio < columnas_fin; ){
      if(matriz[filas][columnas_inicio] == flag && matriz[filas][columnas_fin] == !flag){
        valoresDeMatriz temporal = matriz[filas][columnas_inicio];
        matriz[filas][columnas_inicio++] = matriz[filas][columnas_fin];
        matriz[filas][columnas_fin--] = temporal;
      }
      if(matriz[filas][columnas_inicio] == !flag)
        columnas_inicio++;

      if(matriz[filas][columnas_fin] == flag)
        columnas_fin--;
    }
  }
}