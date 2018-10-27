#ifndef FRACCIONES_FRACCION_H
#define FRACCIONES_FRACCION_H

class Fraccion {
private:
    int numerador;
    int denominador;
public:
    Fraccion(int numerador, int denominador);

    Fraccion();

    Fraccion(int numerador);

    void leer();
    void imprimir();
    void sumar( Fraccion a, Fraccion b );

    int getNumerador() const;
    void setNumerador(int numerador);
    int getDenominador() const;
    void setDenominador(int denominador);












};

#endif //FRACCIONES_FRACCION_H
