#include "Letras.h"

string leerTexto(string ruta)
{//--Retorna un string con el contenido del archivo
  ifstream archivo;
  string texto;
  archivo.open(ruta);
  for(char c;archivo.get(c);)
    texto+=c;
  archivo.close();
  return texto;
}

void ContarCaracteresEnMapa( map<char,int> &contador, string texto)
{//-- recibe el string y realiza el conteo
  for(char i= 'A';i<='Z';i++)
    contador[i] = 0;
  for(auto i: texto)
    if(isalpha(i))
      contador[toupper(i)]++;
}

void ImprimirMapa(map<char,int> contador)
{//---- imprime el mapa-----------------
  for(auto &i:contador)
     cout<<"La letra "<<i.first<<" está "<<i.second<<" veces\n";
}
