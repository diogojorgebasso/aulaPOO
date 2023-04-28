#include <iostream>
#include <vector>

using namespace std;

/**
 * Classe Polinomio responsável pela entrada de uma lista de coeficientes e
 * sobrecarga de operadores
 */
class Polinomio {
private:
  vector<float> coeficientes;

public:
  Polinomio() : coeficientes(1){};
  Polinomio(int n) : coeficientes(n + 1){};

  friend istream &operator>>(istream &is, Polinomio &p) {
    for (float &c : p.coeficientes) {
      is >> c;
    }
    return is;
  }

  friend ostream &operator<<(ostream &os, const Polinomio &p) {
    int grau = p.coeficientes.size() - 1;
    os << p.coeficientes[grau] << "x^" << grau;

    for (int i = grau - 1; i >= 0; i--) {
      if (p.coeficientes[i] != 0) {
        os << (p.coeficientes[i] > 0 ? " + " : " - ") << abs(p.coeficientes[i])
           << "x^" << i;
      }
    }
    return os;
  }

  Polinomio operator+(const Polinomio &p) const {
    int n = coeficientes.size();
    Polinomio soma(n - 1);
    for (int i = 0; i < n; i++) {
      soma.coeficientes[i] = coeficientes[i] + p.coeficientes[i];
    }
    return soma;
  }

  Polinomio operator-(const Polinomio &p) const {
    int n = coeficientes.size();
    Polinomio diferenca(n - 1);
    for (int i = 0; i < n; i++) {
      diferenca.coeficientes[i] = coeficientes[i] - p.coeficientes[i];
    }
    return diferenca;
  }
};

int main(void) {
  Polinomio p1(2);
  cout << "Digite os coeficientes: ";
  cin >> p1;
  cout << "Polinomio 1: " << p1 << endl;

  Polinomio p2(2);
  cout << "Digite os coeficientes: ";
  cin >> p2;
  cout << "Polinomio 2: " << p2 << endl;

  // Testa a operação de soma
  Polinomio soma = p1 + p2;
  cout << "Soma: " << soma << endl;

  // Testa a operação de subtração
  Polinomio diferenca = p1 - p2;
  cout << "Diferenca: " << diferenca << endl;
  return 0;
}
