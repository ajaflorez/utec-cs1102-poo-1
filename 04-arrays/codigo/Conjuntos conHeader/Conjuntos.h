//
// Created by Maria Hilda Bermejo on 9/11/18.
//

#ifndef CONJUNTOS_CONJUNTOS_H
#define CONJUNTOS_CONJUNTOS_H

const int MAX=25;

void Imprimir(int Arreglo[], int n);
bool Esta(int elemento, int Arreglo[], int tam);
void LeeConjunto(int Arreglo[],int &tam);
void HallaUnion(int A1[], int nA1, int A2[], int nA2,
                int Union[], int &nUnion);
void  HallaInterseccion(int A1[],int tamannoA1,int A2[], int tamannoA2,
                        int Interseccion[],int &tamannoInterseccion);


#endif //CONJUNTOS_CONJUNTOS_H
