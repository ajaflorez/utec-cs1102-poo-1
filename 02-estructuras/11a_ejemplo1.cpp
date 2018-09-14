#include <iostream>
using namespace std;

int main()
{
    int n;
    char word;
    cout << "Escribe la Letra: ";
    cin >> word;
    cout << "Numero de veces que se repetira: ";
    cin >> n;

    // Primera Forma
    int current = 0;
    while(current < n){
        cout << word << "\n";
        current++;
    }

    //Segunda Forma
    for(int current = 0; current < n; current++){
        cout << word << "\n";
    }

    //Segunda Forma
    current = 0;
    do{
        cout << word << "\n";
        current++;
    }while(current < n);
}
