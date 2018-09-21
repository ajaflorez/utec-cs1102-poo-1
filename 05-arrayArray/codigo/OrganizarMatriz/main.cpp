#include <iostream>
#include <ctime>
#include "Matrices.h"

using namespace std;

int main()
{
	srand(time(nullptr));
	// Es para una matrix cuadrada
	valoresDeMatriz matrizA[s][s];
	valoresDeMatriz matrizB[s][s];
  //--------------------------
	inicializarMatriz(matrizA);
	inicializarMatriz(matrizB);
  //---- imprime la primera fila tanto de la MatrizA, como de la Matriz B
  cout <<"\n\n";
	imprimirMatriz(matrizA, matrizB);
  //------mueve los valores hacia un extremo
	organizarMatriz(matrizA, true); //--- mueve hacia la derecha
	organizarMatriz(matrizB, false); //-- mueve hacia la izquierda
  //--- Imprime las matrices despues de la reorganización
	imprimirMatriz(matrizA, matrizB, true);
	return 0;
}

