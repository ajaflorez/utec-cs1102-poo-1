//
// Created by Maria Hilda Bermejo on 9/17/18.
//

#ifndef EJEMPLO_2_MULTIPLIACION_DE_MATRICES_MATRICES_H
#define EJEMPLO_2_MULTIPLIACION_DE_MATRICES_MATRICES_H

#include <iostream>
#include <cstddef>
#include <stdlib.h>
#include <iomanip>

typedef int Tipo;

constexpr size_t  nFILAS=5, nCOLUMNAS=5;

void GenerarMatriz(Tipo M[][nCOLUMNAS], size_t nfilas,  size_t ncol);
void ImprimirMatriz(Tipo M[][nCOLUMNAS], size_t nfilas,  size_t ncol);
void MultiplicarMatrices(Tipo M1[][nCOLUMNAS], size_t nfilasM1, size_t ncolM1,
                         Tipo M2[][nCOLUMNAS], size_t nfilasM2, size_t ncolM2,
                         Tipo M3[][nCOLUMNAS], size_t &nfilasM3, size_t &ncolM3);

#endif //EJEMPLO_2_MULTIPLIACION_DE_MATRICES_MATRICES_H
