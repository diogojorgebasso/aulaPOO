#include <iostream>
#include "geometria.h"

using namespace std;

istream &operator>>(istream &input, Ponto &in)
{
  cout << endl
       << "Digite x e y para o centro do ponto: ";
  in.leitura();
  return input;
}

ostream &operator<<(ostream &output, const Ponto &out)
{
  out.imprime();
  return output;
}

void Ponto::leitura()
{
  cout << endl
       << "Digite x e y para o centro do ponto: ";
  cin >> x >> y;
}

void Circulo::leitura()
{
  Ponto::leitura();
  cout << endl
       << "Digite o raio do circulo: ";
  cin >> raio;
}

void Cilindro::leitura()
{
  Circulo::leitura();
  cout << endl
       << "Digite a altura do cilindro: ";
  cin >> altura;
}

int main(void)
{
  // Cilindro é um Circulo com altura diferente de zero
  // Círculo é um Ponto com raio diferente de zero
  Ponto r(1, 2);
  cout << "Ponto = " << r << endl;

  Circulo c(3, 4, 5);
  cout << "Circulo = " << c << endl;

  Cilindro cl(7, 8, 9, 10);
  cout << "Cilindro = " << cl << endl;

  cout << endl;
  cout << "Area circulo = " << c.area() << endl;
  cout << "Volume cilindro = " << cl.area() << endl;

  // Teste de leitura
  Ponto p;
  cin >> p;
  p.area();
  p.volume();

  Circulo circulo;
  cin >> circulo;
  circulo.area();
  circulo.volume();

  Cilindro cilindro;
  cin >> cilindro;
  cilindro.area();
  cilindro.volume();

  return 0;
}