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

class Quadrado : public Ponto
{
protected:
  double lado;

public:
  Quadrado(double x = 0, double y = 0, double l = 1) : Ponto{x, y}, lado{l}
  {
    std::cout << "Construindo Quadrado!" << std::endl;
  }
  void leitura()
  {
    Ponto::leitura();
    std::cout << std::endl
              << "Digite o lado do Quadrado: ";
    std::cin >> lado;
    while (lado == 0)
    {
      std::cout << "Lado deve ser diferente de zero!" << std::endl;
      std::cin >> lado;
    }
  }
  void imprime() const
  {
    Ponto::imprime();
    std::cout << " lado = " << lado << std::endl;
  }
  virtual double area() { return lado * lado; }
  virtual double volume() { return 0; }
  ~Quadrado()
  {
    std::cout << "Destruindo Quadrado!" << std::endl;
  }
};

class Prisma : public Quadrado
{
protected:
  double altura;

public:
  Prisma(double x = 0, double y = 0, double l = 0, double a = 1) : Quadrado{x, y, l}, altura{a}
  {
    std::cout << "Construindo Prisma!" << std::endl;
  }
  void leitura()
  {
    Quadrado::leitura();
    std::cout << std::endl
              << "Digite a altura do Prisma: ";
    std::cin >> altura;
    while (altura == 0)
    {
      std::cout << "Altura deve ser diferente de zero" << std::endl;
      std::cin >> altura;
    }
  }
  void imprime() const
  {
    Quadrado::imprime();
    std::cout << " altura  = " << altura << std::endl;
  }
  virtual double area() { return 6 * Quadrado::area(); }
  virtual double volume() { return Quadrado::area() * altura; }
  ~Prisma()
  {
    std::cout << "Destruindo o Prisma!" << std::endl;
  }
};
#endif
