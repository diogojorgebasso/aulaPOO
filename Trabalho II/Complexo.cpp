#include <iostream>
#include <cmath>

#include "Complexo.h"

using namespace std;

int Complexo::numeroInstancias = 0; // inicialização da variável estática

Complexo::Complexo() : real(0), imaginario(0)
{
    numeroInstancias++;
}

Complexo::Complexo(double r, double i) : real(r), imaginario(i)
{
    numeroInstancias++;
}

Complexo::~Complexo()
{
    numeroInstancias--;
}

double Complexo::getReal() const
{
    return real;
}

double Complexo::getImag() const
{
    return imaginario;
}

void Complexo::setReal(double r)
{
    real = r;
}

void Complexo::setImag(double i)
{
    imaginario = i;
}

Complexo Complexo::sumComplexo(Complexo c) const
{
    double resultadoReal = real + c.real;
    double resultadoImaginario = imaginario + c.imaginario;
    return Complexo(resultadoReal, resultadoImaginario);
}

Complexo Complexo::subtractComplexo(Complexo c) const
{
    Complexo resultado;
    resultado.imaginario = imaginario - c.imaginario;
    resultado.real = real - c.real;
    return resultado;
}

Complexo Complexo::divideComplexo(Complexo c) const
{
    double denominador = (c.real + c.real) + (c.imaginario * c.imaginario);

    double resultadoReal = ((real * c.real) + (imaginario * c.imaginario)) / denominador;
    double resultadoImaginario = ((c.real * imaginario) - (real * c.imaginario)) / denominador;
    return Complexo(resultadoReal, resultadoImaginario);
}

Complexo Complexo::multiplyComplexo(Complexo c) const
{
    double resultadoReal = (real * c.real) - (imaginario * c.imaginario);
    double resultadoImaginario = (c.real * imaginario) + (real * c.imaginario);
    return Complexo(resultadoReal, resultadoImaginario);
}

double Complexo::moduleComplexo() const
{
    return (sqrt((real * real) + (imaginario * imaginario)));
}

void Complexo::imprimir()
{
    cout << real << " + " << imaginario << "i";
}

// Método estático para obter o número de instâncias
int Complexo::getNumInstancias()
{
    return numeroInstancias;
}

int main(void)
{
    Complexo a(2, 3);
    Complexo b(4, 5);

    cout << "Estamos na" << a.getNumInstancias() << "instancia" << endl;

    Complexo soma = a.sumComplexo(b);
    cout << "A soma de ";
    a.imprimir();
    cout << " MAIS ";
    b.imprimir();
    cout << " eh ";
    soma.imprimir();
    cout << endl;

    Complexo subtracao = a.subtractComplexo(b);
    cout << "A subtracao de ";
    a.imprimir();
    cout << " MENOS ";
    b.imprimir();
    cout << " eh ";
    subtracao.imprimir();
    cout << endl;

    Complexo multiplicaco = a.multiplyComplexo(b);
    cout << "A multiplicacao de ";
    a.imprimir();
    cout << " com ";
    b.imprimir();
    cout << " eh ";
    multiplicaco.imprimir();
    cout << endl;

    Complexo divisao = a.divideComplexo(b);
    cout << "A divisao de ";
    a.imprimir();
    cout << " com ";
    b.imprimir();
    cout << " eh ";
    divisao.imprimir();
    cout << endl;

    cout << "O modulo de ";
    a.imprimir();
    cout << " eh " << a.moduleComplexo();
    return 0;
}