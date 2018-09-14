#include <iostream>
using namespace std;

void recibirValores( int &n, char &c )
{
	cout<<"Caracter: ";
	cin>>c;
	cout<<"Ingrese el número de filas: ";
	cin>>n;
};

void imprimirPiramide( int x, char c )
{
    for( int i=0; i<x; i++ )
    {
        for( int j=0; j<=i; j++ )
        {
            cout << c << " ";
        }
        cout << endl;
    }
};

int main()
{
	int filas;
	char caracter;

	recibirValores( filas, caracter );
	imprimirPiramide( filas, caracter );

	return 0;
}
