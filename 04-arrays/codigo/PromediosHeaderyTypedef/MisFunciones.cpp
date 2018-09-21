// Created by Maria Hilda Bermejo on 9/11/18.
//
#include "MisFunciones.h"
#include <iostream>
using namespace std;

void LeeNotas(aliasdeTipo Notas[], unsigned int n)
{//---Se leen n notas al array
  for (int i = 0; i < n; i++)
  {
    cout << "Notas[" << i << "]= ";
    cin >> Notas[i];
  }
}

aliasdeTipo CalcularPromedio(aliasdeTipo Notas[],unsigned int n)
{//-----------------------------------------------
  aliasdeTipo Suma = 0;

  for (int i=0; i<n; i++)
    Suma += Notas[i];
  return (Suma/n);
}

void ImprimirNotasMayoresAlPromedio(aliasdeTipo Notas[],unsigned int n, aliasdeTipo Promedio)
{//---se imprimen las notas que estan por encima del promedio
  cout<<"\nNotas mayores al promedio\n";
  for (int i=0; i<n; i++)
    if (Notas[i] > Promedio)
      cout << Notas[i] << "\n";
}

aliasdeTipo HallalaMenorNota(aliasdeTipo Notas[], unsigned int n)
{//------------------------------------------------
  aliasdeTipo menorNota;

  menorNota=Notas[0]; //-- al inicio la primera nota se considera como la menor
  for(int i=1; i<n; i++)
    if(Notas[i]<menorNota)
      menorNota=Notas[i];
  return menorNota;
}

aliasdeTipo PromedioEliminadolaMenorNota(aliasdeTipo Notas[],unsigned int n, aliasdeTipo MenorNota)
{//----------------------------------------------------------------------------
  aliasdeTipo Suma=0;

  for(int i=0; i<n; i++)
    Suma+=Notas[i];
  return((Suma-MenorNota)/(n-1));
}