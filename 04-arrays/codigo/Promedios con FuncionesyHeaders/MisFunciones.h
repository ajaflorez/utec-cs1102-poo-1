// Created by Maria Hilda Bermejo on 9/11/18.
// MisFunciones.h

#ifndef PROMEDIOS_MISFUNCIONES_H
#define PROMEDIOS_MISFUNCIONES_H

void LeeNotas(float Notas[], unsigned int n);
float CalcularPromedio(float Notas[],unsigned int n);
void ImprimirNotasMayoresAlPromedio(float Notas[],unsigned int n, float Promedio);
float HallalaMenorNota(float Notas[], unsigned int n);
float PromedioEliminadolaMenorNota(float Notas[],unsigned int n, float MenorNota);

#endif //PROMEDIOS_MISFUNCIONES_H
