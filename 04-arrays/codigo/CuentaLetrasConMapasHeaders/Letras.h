
#ifndef CUENTALETRASCONMAPAS_LETRAS_H
#define CUENTALETRASCONMAPAS_LETRAS_H
#include <iostream>
#include <map>
#include <cctype>
#include <fstream>
using namespace std;

string leerTexto(string ruta);
void ContarCaracteresEnMapa( map<char,int> &contador, string texto);
void ImprimirMapa(map<char,int> contador);


#endif //CUENTALETRASCONMAPAS_LETRAS_H
