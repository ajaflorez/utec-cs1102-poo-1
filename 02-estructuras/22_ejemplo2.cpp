#include <iostream>
using namespace std;

int main()
{
    int total;
    float nota;
    int suma, aprobados = 0, desaprobados = 0;
    float promedio, promedio_salon = 0;

    cout << "Total de Estudiantes: ";
    cin >> total;

    while( !(total > 2) )
    {
       cout << "Ingresa nuevamente el total de Estudiantes: ";
       cin >> total;
    }

    for(int i = 0; i < total; i++)
    {
        suma = 0;
        for(int o = 0; o < 5; o++)
        {
            cout << "Ingresa la nota " << (o+1) << " para el alumno "<< (i+1) << ": ";
            cin >> nota;
            while( !(nota >= 0 && nota <= 20) ){
               cout << "Ingresa nuevamente la nota "<< (o+1) << " para el alumno " << (i+1) << ": ";
               cin >> nota;
            }
            suma += nota;
        }
        promedio = suma / 5.0;
        promedio_salon += promedio;
        cout << "**Promedio del alumno " << (i+1) << " es: "<< promedio << "**\n";

        if( promedio > 11 )
        {
            aprobados++;
        }
        else
        {
            desaprobados++;
        }
    }
    promedio_salon /= total;

    cout << "\n\n\n=======================================\n";
    cout << "El numero de alumnos aprobados: " << aprobados << "\n";
    cout << "El numero de alumnos desaprobados: " << desaprobados << "\n";
    cout << "Nota promedio del salon:" << promedio_salon << "\n";
    cout << "=======================================\n";

    return 0;
}
