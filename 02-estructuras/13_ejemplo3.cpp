#include <iostream>
using namespace std;

int main()
{
    int dia, mes, ano;
    int diasTrans = 0;

    cout << "dia : ";
    cin >> dia;
    cout << "mes : ";
    cin >> mes;
    cout << "año : ";
    cin >> ano;

    switch( mes - 1 )
    {
       case 11: diasTrans+=30;
       case 10: diasTrans+=31;
       case 9:  diasTrans+=30;
       case 8:  diasTrans+=31;
       case 7:  diasTrans+=31;
       case 6:  diasTrans+=30;
       case 5:  diasTrans+=31;
       case 4:  diasTrans+=30;
       case 3:  diasTrans+=31;
       case 2:
           if( ano%4 == 0 )
               diasTrans+=29;
           else
               diasTrans+=28;
       case 1:  diasTrans+=31;
    }
    diasTrans = diasTrans + ( dia - 1 );

    cout << "Deben pasar "<< diasTrans << " dias para que llegue tu cumpleaños ";
    return 0;
}
