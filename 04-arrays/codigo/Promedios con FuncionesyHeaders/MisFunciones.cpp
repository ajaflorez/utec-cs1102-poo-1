// Created by Maria Hilda Bermejo on 9/11/18.
//
#include <iostream>
#include "MisFunciones.h"

using namespace std;

void LeeNotas(float Notas[], unsigned int n)
{//---Se leen n notas al array
  for (int i = 0; i < n; i++)
  {
    cout << "Notas[" << i << "]= ";
    cin >> Notas[i];
  }
}

float CalcularPromedio(float Notas[],unsigned int n)
{//-----------------------------------------------
  float Suma = 0;

  for (int i=0; i<n; i++)
    Suma += Notas[i];
  return (Suma/n);
}

void ImprimirNotasMayoresAlPromedio(float Notas[],unsigned int n, float Promedio)
{//---se imprimen las notas que estan por encima del promedio
  cout<<"\nNotas mayores al promedio\n";
  for (int i=0; i<n; i++)
    if (Notas[i] > Promedio)
      cout << Notas[i] << "\n";
}

float HallalaMenorNota(float Notas[], unsigned int n)
{//------------------------------------------------
  float menorNota;

  menorNota=Notas[0]; //-- al inicio la primera nota se considera como la menor
  for(int i=1; i<n; i++)
    if(Notas[i]<menorNota)
      menorNota=Notas[i];
  return menorNota;
}

float PromedioEliminadolaMenorNota(float Notas[],unsigned int n, float MenorNota)
{//----------------------------------------------------------------------------
  float Suma=0;

  for(int i=0; i<n; i++)
    Suma+=Notas[i];
  return((Suma-MenorNota)/(n-1));
}