#include <iostream>
using namespace std;

int main()
{
    char word;

    cout << "Escribe : ";
    cin >> word;

    if( word >= 'a' && word <= 'z' )
    {
        for( char i = 'a'; i <= 'z'; i++ )
        {
            cout << i << " ";
        }
    }
    else if( word >= 'A' && word <= 'Z' )
    {
       for( char i = 'A'; i <= 'Z'; i++)
       {
            cout << i << " ";
       }
    }
    else
    {
        for(int i = 100; i >= 10;i -= 5)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

