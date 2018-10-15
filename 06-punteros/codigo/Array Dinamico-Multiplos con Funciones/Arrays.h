//
// Created by Maria Hilda Bermejo on 9/24/18.
//

#ifndef ARRAY_DINAMICO_MULTIPLOS_ARRAYS_H
#define ARRAY_DINAMICO_MULTIPLOS_ARRAYS_H

#include <cstddef>
#include <cstdlib>
#include <iomanip>

int * CreayLlenaDatos(size_t numDatos, size_t & contMulde5, size_t &contMulde7);
int * CrearArrayconMultiplos(int *A, size_t num, int multiplo, size_t contMultiplos);
void Imprimir(int *pArreglo, size_t n);
void  Eliminar(int * &pA);


#endif //ARRAY_DINAMICO_MULTIPLOS_ARRAYS_H
