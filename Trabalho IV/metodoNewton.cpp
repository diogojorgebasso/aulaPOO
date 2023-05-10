#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/**
 * Classe Polinomio responsável pela entrada de uma lista de coeficientes e sobrecarga de operadores
 */

class Polinomio
{
private:
  vector<float> coeficientes;

public:
  Polinomio() : coeficientes(1){};
  Polinomio(int n) : coeficientes(n + 1){};

  Polinomio derivada() const
  {
    int n = coeficientes.size();
    Polinomio derivada(n - 2);
    for (int i = 0; i < n - 1; i++)
    {
      derivada.coeficientes[i] = coeficientes[i + 1] * (i + 1);
    }
    return derivada;
  }

  float valorNoPonto(float x) const
  {
    float valor = 0;
    int n = coeficientes.size();
    for (int i = 0; i < n; i++)
    {
      valor += coeficientes[i] * pow(x, i);
    }
    return valor;
  }

  /**
   * Método que calcula a raiz de um polinômio utilizando o método de Newton
   * @param x0 valor inicial
   * @param iteracoes número de iterações
   */
  float raiz(float x0, int iteracoes)
  {
    float x = x0;
    for (int i = 0; i < iteracoes; i++)
    {
      x = x - valorNoPonto(x) / derivada().valorNoPonto(x);
    }
    return x;
  }

  friend istream &operator>>(istream &is, Polinomio &p)
  {
    for (float &c : p.coeficientes)
    {
      is >> c;
    }
    return is;
  }

  friend ostream &operator<<(ostream &os, const Polinomio &p)
  {
    int grau = p.coeficientes.size() - 1;
    os << p.coeficientes[grau] << "x^" << grau;

    for (int i = grau - 1; i >= 0; i--)
    {
      if (p.coeficientes[i] != 0)
      {
        os << (p.coeficientes[i] > 0 ? " + " : " - ")
           << abs(p.coeficientes[i]) << "x^" << i;
      }
    }
    return os;
  }

  Polinomio operator+(const Polinomio &p) const
  {
    int n = coeficientes.size();
    Polinomio soma(n - 1);
    for (int i = 0; i < n; i++)
    {
      soma.coeficientes[i] = coeficientes[i] + p.coeficientes[i];
    }
    return soma;
  }

  Polinomio operator-(const Polinomio &p) const
  {
    int n = coeficientes.size();
    Polinomio diferenca(n - 1);
    for (int i = 0; i < n; i++)
    {
      diferenca.coeficientes[i] = coeficientes[i] - p.coeficientes[i];
    }
    return diferenca;
  }
};

int main(void)
{
  cout << "Digite o grau do primeiro polinomio: ";
  int grauPolinomio;
  cin >> grauPolinomio;
  Polinomio p1(grauPolinomio - 1);
  cout << "Digite os coeficientes: ";
  cin >> p1;
  cout << "Polinomio 1: " << p1 << endl;

  cout << "Digite o grau do segundo polinomio: ";
  int grauPolinomio2;
  cin >> grauPolinomio2;
  Polinomio p2(grauPolinomio2 - 1);
  cout << "Digite os coeficientes: ";
  cin >> p2;
  cout << "Polinomio 2: " << p2 << endl;

  // Testa a operação de soma
  Polinomio soma = p1 + p2;
  cout << "Soma: " << soma << endl;

  // Testa a operação de subtração
  Polinomio diferenca = p1 - p2;
  cout << "Diferenca: " << diferenca << endl;

  // Testa a operação de derivada
  Polinomio derivada2 = p1.derivada();
  cout << "Derivada: " << derivada2 << endl;
  Polinomio derivada3 = p2.derivada();
  cout << "Derivada: " << derivada3 << endl;

  // Testa a operação de valor no ponto
  float x;
  cout << "Digite o valor do ponto no polinômio: ";
  cin >> x;
  cout << "Valor no ponto: " << p1.valorNoPonto(x) << endl;

  // Testa a operação de raiz no p1
  float x0;
  int iteracoes;
  cout << "Digite o valor de x0: ";
  cin >> x0;
  cout << "Digite o número de iterações: ";
  cin >> iteracoes;
  cout << "Raiz: " << p1.raiz(x0, iteracoes) << endl;

  return 0;
}