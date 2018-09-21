#include <iostream>
using namespace std;
int main()
{float Notas[10];
 float Suma,Promedio;

  //---Se leen las 10 notas al array y se va acumulando
  //---la suma para hallar luego el promedio
  Suma=0;
  for(int i=0; i<10; i++)
  { cout <<"Notas["<<i<<"]= ";
    cin>>Notas[i];
    Suma+=Notas[i];
  }
  Promedio =Suma/10;
  cout<<"\nPromedio="<<Promedio<<"\n";

  //---se imprimen las notas que estan por encima del promedio
  for(int i=0; i<10; i++)
   if(Notas[i]>Promedio)
      cout<<Notas[i]<<"\n";
  //---Se halla el promedio eliminando la menor nota.
  float menorNota=Notas[0];
  for(int i=1; i<10; i++)
    if(Notas[i]<menorNota)
       menorNota=Notas[i];
  cout<<"Se elimina "<<menorNota<<"\n";
  cout <<"Promedio eliminando la menor nota "<<(Suma-menorNota)/9;
  return 0;
}