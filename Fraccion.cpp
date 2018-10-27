#include <iostream>
#include "Fraccion.h"
using namespace std;

void Fraccion::leer() {
    cin >> numerador;
    cin >> denominador;
}
void Fraccion::imprimir() {
    cout << numerador << "/" << denominador;
}
void Fraccion::sumar(Fraccion a, Fraccion b) {
    if(a.getDenominador() == b.getDenominador()) {
        numerador = a.getNumerador() + b.getNumerador();
        denominador = a.getDenominador();
    } else {
        numerador = (a.getNumerador() * b.getDenominador()) +
                    (a.getDenominador() * b.getNumerador());
        denominador = a.getDenominador() * b.getDenominador();
    }

}

int Fraccion::getNumerador() const {
    return numerador;
}
void Fraccion::setNumerador(int numerador) {
    Fraccion::numerador = numerador;
}
int Fraccion::getDenominador() const {
    return denominador;
}
void Fraccion::setDenominador(int denominador) {
    Fraccion::denominador = denominador;
}

Fraccion::Fraccion(int numerador, int denominador)
        : numerador(numerador), denominador(denominador) {}

Fraccion::Fraccion() {}

Fraccion::Fraccion(int numerador) : numerador(numerador) {
    denominador = 1;
}










