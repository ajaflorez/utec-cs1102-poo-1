#include <iostream>
#include <cmath>
using namespace std;

bool estaEnBaseCorrecta( int base, int numero )
{
	while( numero > 0 )
	{
    	if( numero % 10 >= base)
        	return false;
    	numero /= 10;
	}
	return true;
}

int conversionDeBase( int numero, int base )
{
	int numero_convertido = 0;
	for( int i = 0; numero > 0; numero /= 10, i++ )
	{
        numero_convertido += ( numero % 10 ) * pow( base, i );
	}

	return numero_convertido;
}

int obtenerBase()
{
	int base;
	bool aviso_de_error = false;
	/** Obtenemos la base del número y verificamos
 	* que solo este dentro del rango de 2 a 9 si
 	* hay un error avisamos del rango aceptable **/
	do
    {
        if( aviso_de_error )
            cout << "Por favor ingresa una base en el rango de 2 a 9"<<'\n';

    	cout << "Ingresa la base del número: ";
    	cin >> base;
    	aviso_de_error = true;
	} while ( base < 2 || base > 9 );

	return base;
}

int ObtenerNumeroEnBase( int base )
{
	int numero;
	bool aviso_de_error = false;

	/** Obtenemos el número en la base designada, si
 	* es un número fuera de la base dada entonces
 	* mostramos error **/
	do
    {
    	if(aviso_de_error)
        	cout << "Por favor, ";

    	cout << "Ingresa un número en base " << base << ": ";
    	cin >> numero;
    	aviso_de_error = true;
	} while( !estaEnBaseCorrecta( base, numero ) );

	return numero;
}
int main()
{
	int base;
	int numero, numero_convertido;

	base = obtenerBase();
	numero = ObtenerNumeroEnBase( base );
	numero_convertido = conversionDeBase( numero, base );

	cout << numero << " en base " << base << " -> en base 10 es "<< numero_convertido;
	return 0;
}
