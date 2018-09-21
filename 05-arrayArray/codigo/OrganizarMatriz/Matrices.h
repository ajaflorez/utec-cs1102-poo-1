
#ifndef KORGANIZARMATRIZ_MATRICES_H
#define KORGANIZARMATRIZ_MATRICES_H

#include <iostream>
#include <stdlib.h>
#include <iomanip>

constexpr int s = 15;
typedef int valoresDeMatriz;

void inicializarMatriz(valoresDeMatriz matriz[][s]);
void organizarMatriz(valoresDeMatriz matriz[][s], bool flag);
void imprimirMatriz(valoresDeMatriz matrizA[][s], valoresDeMatriz matrizB[][s], bool s = false);


#endif //KORGANIZARMATRIZ_MATRICES_H
