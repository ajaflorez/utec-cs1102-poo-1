#include <iostream>
#include "Letras.h"

using namespace std;

int main()
{
  map<char,int> elMapa;
  string ruta;

  cout<<"Nombre de Archivo: ";
	cin>>ruta;
	string texto = leerTexto(ruta);
	ContarCaracteresEnMapa(elMapa,texto);
  ImprimirMapa(elMapa);
	return 0;
}
