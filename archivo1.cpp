#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int numero;
    int contador = 0;
    // Leyendo notas del archivo
    ifstream iarchivo;
    iarchivo.open("notas.txt");

    // Creando el objeto para la escritura
    ofstream oarchivo;
    oarchivo.open("notas2.txt");

    iarchivo >> numero;
    while( iarchivo.fail() == false ) {
        oarchivo << numero << endl;
        iarchivo >> numero;
        contador++;
    }

    iarchivo >> numero;
    cout << numero;

    // Cerrar los archivos
    iarchivo.close();
    oarchivo.close();

    // Copiando datos con un array
    int array[contador];

    iarchivo.open("notas.txt");
    oarchivo.open("notas3.txt");

    int i = 0;
    iarchivo >> array[i++];
    while( iarchivo.fail() == false ) {
        iarchivo >> array[i++];
    }
    for(int j=0;j<contador;j++) {
        oarchivo << array[j] << endl;
    }

    iarchivo.close();
    oarchivo.close();


    return 0;
}
