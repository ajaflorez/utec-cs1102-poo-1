#include <iostream>
#include <iomanip>
using namespace std;

void Imprimir(int *pArreglo, size_t n);

int main()
{ size_t numDatos;
  int *pA,*pMultiplode5, *pMultiplosde7;
  size_t contMulde5=0, contMulde7=0;

  srand(time(nullptr));
  cout <<"Numero de elementos : ";
  cin >> numDatos;

  pA = new int[numDatos];
  for(size_t i=0; i<numDatos; i++)
  {
    pA[i] = rand()%1000;
    if(pA[i]%5==0)
      contMulde5++;
    if(pA[i]%7==0)
      contMulde7++;
  }
  //-- se crea los otros dos arrays
  pMultiplode5 = new int[contMulde5];
  pMultiplosde7= new int[contMulde7];
  //-- se llenan los datos segun sea el caso
  size_t indiceMul5=0, indiceMul7=0;
  for(size_t i=0; i<numDatos; i++)
  {
    if(pA[i]%5==0)
      pMultiplode5[indiceMul5++]=pA[i];
    if(pA[i]%7==0)
      pMultiplosde7[indiceMul7++]=pA[i];
  }
  cout<<"\n\nArray con datos\n";
  Imprimir(pA,numDatos);
  cout<<"\nArray con los multiplos de 5\n";
  Imprimir(pMultiplode5,contMulde5);
  cout<<"\nArray con los multiplos de 7\n";
  Imprimir(pMultiplosde7,contMulde7);
  delete [] pA;
  delete [] pMultiplode5;
  delete [] pMultiplosde7;
  return 0;
}

void Imprimir(int *pArreglo, size_t n)
{
  for(size_t i=0; i<n; i++)
    cout << setw(5) << pArreglo[i];
}
