#include <iostream>
#include "MisFunciones.h"
using namespace std;

const int MAX=100;

int main()
{
  aliasdeTipo Notas[MAX];
  aliasdeTipo Promedio, MenorNota,NuevoPromedio;
  unsigned int numdeNotas;

  do{
    cout<<"Numero de notas maximo 100 : ";
    cin>>numdeNotas;
  }while(numdeNotas<5);  //-- por lo menos leera 5 notas

  LeeNotas(Notas, numdeNotas);
  Promedio = CalcularPromedio(Notas, numdeNotas);
  cout << "Promedio = " << Promedio << "\n";
  ImprimirNotasMayoresAlPromedio(Notas, numdeNotas, Promedio);
  MenorNota = HallalaMenorNota(Notas, numdeNotas);
  NuevoPromedio = PromedioEliminadolaMenorNota(Notas, numdeNotas, MenorNota);
  cout << "Promedio eliminando la menor nota = " << NuevoPromedio;
  return 0;
}

