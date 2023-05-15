#ifndef CIRCULO_H
#define CIRCULO_H
#define PI 3.1415

#include <iostream>

int menu();

class Ponto
{
protected:
  double x, y;

public:
  Ponto(double x = 0, double y = 0) : x{x}, y{y}
  {
    std::cout << "Construindo Ponto!" << std::endl;
  }
  virtual ~Ponto()
  {
    std::cout << "Destroi Ponto!" << std::endl;
  }
  virtual void leitura()
  {
    std::cout << "Digite x para o ponto: ";
    std::cin >> x;
    std::cout << "Digite y para o ponto: ";
    std::cin >> y;
  }
  virtual void imprime() const { std::cout << "C(" << x << "," << y << ")"; }
  virtual double area() { return 0; }
  virtual double volume() { return 0; }
  friend std::istream &operator>>(std::istream &input, Ponto &in);
  friend std::ostream &operator<<(std::ostream &output, const Ponto &out);
};

class Circulo : public Ponto
{
protected:
  double raio;

public:
  Circulo(double x = 0, double y = 0, double r = 0) : Ponto{x, y}, raio{r}
  {
    std::cout << "Construindo Circulo!" << std::endl;
  }
  ~Circulo()
  {
    std::cout << "Destroi Circulo!" << std::endl;
  }
  void leitura()
  {
    Ponto::leitura();
    std::cout << std::endl
              << "Digite o raio do circulo: ";
    std::cin >> raio;
  }
  void imprime() const
  {
    Ponto::imprime();
    std::cout << " RAIO = " << raio;
  }
  double area() { return PI * raio * raio; }
  double volume() { return 0; }
};

class Cilindro : public Circulo
{
protected:
  double altura;

public:
  Cilindro(double x = 0, double y = 0, double raio = 0, double a = 0) : Circulo{x, y, raio}, altura{a}
  {
    std::cout << "Construindo Cilindro!" << std::endl;
  }
  ~Cilindro()
  {
    std::cout << "Destroi Cilindro!" << std::endl;
  }
  void leitura()
  {
    Circulo::leitura();
    std::cout << std::endl
              << "Digite a altura do cilindro: ";
    std::cin >> altura;
  }
  void imprime() const
  {
    Circulo::imprime();
    std::cout << " ALTURA = " << altura;
  }
  double area() { return (2 * Circulo::area()) + 2 * PI * raio * altura; }
  double volume() { return (Circulo::area()) * altura; }
};
#endif