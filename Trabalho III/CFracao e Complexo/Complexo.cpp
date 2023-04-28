#include <cmath>
#include <iostream>

#include "Complexo.h"
#include <locale.h>
using namespace std;

int Complexo::numeroInstancias = 0; // inicialização da variável estática

Complexo::Complexo() : real(0), imaginario(0) { numeroInstancias++; }

Complexo::Complexo(double r, double i) : real(r), imaginario(i) {
  numeroInstancias++;
}

Complexo::~Complexo() { numeroInstancias--; }

ostream &operator<<(ostream &os, const Complexo &complexo) {
  os << complexo.real << " + " << complexo.imaginario << "i";
  return os;
}

istream &operator>>(istream &is, Complexo &complexo) {
  cout << "Digite o valor real: ";
  is >> complexo.real;
  cout << "Digite o valor imaginário: ";
  is >> complexo.imaginario;
  return is;
}

Complexo Complexo::operator+(const Complexo &other) const {
  Complexo resultado;
  resultado.real = real + other.real;
  resultado.imaginario = imaginario + other.imaginario;
  return resultado;
}

Complexo Complexo::operator-(const Complexo &other) const {
  Complexo resultado;
  resultado.real = real - other.real;
  resultado.imaginario = imaginario - other.imaginario;
  return resultado;
}

Complexo Complexo::operator/(const Complexo &c) const {
  double denominador = (c.real + c.real) + (c.imaginario * c.imaginario);

  double resultadoReal =
      ((real * c.real) + (imaginario * c.imaginario)) / denominador;
  double resultadoImaginario =
      ((c.real * imaginario) - (real * c.imaginario)) / denominador;
  return Complexo(resultadoReal, resultadoImaginario);
}

Complexo Complexo::operator*(const Complexo &c) const {
  double resultadoReal = (real * c.real) - (imaginario * c.imaginario);
  double resultadoImaginario = (c.real * imaginario) + (real * c.imaginario);
  return Complexo(resultadoReal, resultadoImaginario);
}

double Complexo::moduleComplexo() const {
  return (sqrt((real * real) + (imaginario * imaginario)));
}

// Método estático para obter o número de instâncias
int Complexo::getNumInstancias() { return numeroInstancias; }

int main(void) {
  setlocale(LC_ALL, "pt_BR.UTF-8");

  Complexo a;
  Complexo b;

  cout << "Estamos na" << a.getNumInstancias() << "instância" << endl;

  cin >> a;
  cin >> b;

  cout << "A soma é: " << a + b << endl;
  cout << "A subtração é: " << a - b << endl;
  cout << "A multiplicação é: " << a * b << endl;
  cout << "A divisão é: " << a / b << endl;

  return 0;
}