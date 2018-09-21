#include <iostream>
using namespace std;

int main() {
    int numero1, numero2;

    cin >> numero1;
    cin >> numero2;

    if( numero1 == 0 && numero2 == 0 ) {
        cout << "Centro";
    } else {
        if( numero1 >= 0 && numero2 >= 0 ) {
            cout << "I";
        }
        else if( numero1 >= 0 && numero2 < 0 ) {
            cout << "II";
        }
        else if( numero1 < 0 && numero2 >= 0 ) {
            cout << "III";
        }
        else if( numero1 < 0 && numero2 < 0 ) {
            cout << "IV";
        }
    }
    return 0;
}