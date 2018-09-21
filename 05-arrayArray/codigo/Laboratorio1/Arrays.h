//
// Created by Maria Hilda Bermejo on 9/17/18.
//

#ifndef EJEMPLO1_RECORRIDOS_ARRAYS_H
#define EJEMPLO1_RECORRIDOS_ARRAYS_H

#include <iostream>
#include <cstddef>  //-- para usar size_t

using namespace std;

constexpr  size_t  nFILAS = 7,  nCOLUMNAS = 7;

void LlenarArray(int M[][nCOLUMNAS],size_t filas, size_t columnas);
void ImprimirArray(int M[][nCOLUMNAS],size_t filas, size_t columnas);
int ElMenor(int M[][nCOLUMNAS], size_t filas, size_t columnas);
int SumadeDiagonal(int M[][nCOLUMNAS], size_t filas, size_t columnas);
int SumaPorEncimadelaDiagonal(int M[][nCOLUMNAS], size_t filas, size_t columnas);

#endif //EJEMPLO1_RECORRIDOS_ARRAYS_H
