#include "CFracao.h"

// Métodos Protegidos da classe CFracao

CFracao CFracao::Reduzida(void) {
  int gcd = 1;
  int minimo = m_numerador;
  if (m_numerador > m_denominador)
    minimo = m_denominador;
  for (int i = 1; i <= minimo; i++) {
    if ((m_numerador % i == 0) && (m_denominador % i == 0))
      gcd = i;
  }
  m_numerador /= gcd;
  m_denominador /= gcd;
  return (*this);
}

// Métodos de entrada

istream &operator>>(istream &_is, CFracao &_Fracao) {
  int numerador, denominador;

  cout << "Digite o numerador: ";
  _is >> numerador;
  cout << "Digite o denominador: ";
  _is >> denominador;
  if (denominador == 0) {
    throw std::invalid_argument("Denominador não pode ser zero!");
  }
  _Fracao.setNumerador(numerador);
  _Fracao.setDenominador(denominador);
  _Fracao.Reduzida();
  return _is;
}

ostream &operator<<(ostream &_is, CFracao &_Fracao) {
  int numerador, denominador;
  numerador = _Fracao.getNumerador();
  denominador = _Fracao.getDenominador();

  _is << numerador << "/" << denominador;
  return _is;
}

// Métodos Aritméticos

CFracao CFracao::operator+(const CFracao &_Fracao) const {
  CFracao temp(m_numerador * _Fracao.m_denominador +
                   m_denominador * _Fracao.m_numerador,
               m_denominador * _Fracao.m_denominador);
  return temp.Reduzida();
}

CFracao CFracao::operator-(const CFracao &_Fracao) const {
  CFracao temp(m_numerador * _Fracao.m_denominador -
                   m_denominador * _Fracao.m_numerador,
               m_denominador * _Fracao.m_denominador);
  return temp.Reduzida();
}

CFracao CFracao::operator*(const CFracao &_Fracao) const {
  CFracao temp(m_numerador * _Fracao.m_numerador,
               m_denominador * _Fracao.m_denominador);
  return temp.Reduzida();
}
CFracao CFracao::operator/(const CFracao &_Fracao) const {
  CFracao temp(m_numerador * _Fracao.m_denominador,
               m_denominador * _Fracao.m_numerador);
  return temp.Reduzida();
}

// Métodos de comparação

bool CFracao::operator<(const CFracao &_Fracao) const {
  return (m_numerador * _Fracao.m_denominador <
          m_denominador * _Fracao.m_numerador);
}

bool CFracao::operator>(const CFracao &_Fracao) const {
  return (m_numerador * _Fracao.m_denominador >
          m_denominador * _Fracao.m_numerador);
}

bool CFracao::operator==(const CFracao &_Fracao) const {
  return (m_numerador * _Fracao.m_denominador ==
          m_denominador * _Fracao.m_numerador);
}

int main() {
  CFracao f1(2, 3);
  CFracao f2(3, 2);
  // CFracao impossible(0, 0);

  cout << "f1 = " << f1;
  cout << "f2 = " << f2;
  // cout << "impossible = " << impossible << endl;

  CFracao f3 = f1 + f2;
  cout << "f1 + f2 = " << f3 << endl;

  CFracao f4 = f1 - f2;
  cout << "f1 - f2 = " << f4 << endl;

  CFracao f5 = f1 * f2;
  cout << "f1 * f2 = " << f5 << endl;

  CFracao f6 = f1 / f2;
  cout << "f1 / f2 = " << f6 << endl;

  bool result1 = f1 > f2;
  cout << "f1 > f2 = " << result1 << endl;

  bool result2 = f1 < f2;
  cout << "f1 < f2 = " << result2 << endl;

  bool result3 = f1 == f2;
  cout << "f1 == f2 = " << result3 << endl;

  CFracao f7;
  cin >> f7;
  cout << "f7 = " << f7 << endl;
  return 0;
}