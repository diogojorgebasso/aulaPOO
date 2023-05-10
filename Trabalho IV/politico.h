#ifndef POLITICO_H
#define POLITICO_H

#include <string>
#include <iostream>

class Partido
{
protected:
  std::string nome, sigla;

public:
  Partido(std::string n, std::string s) : nome{n}, sigla{s}
  {
    std::cout << "Construindo Partido!" << std::endl;
  }
  ~Partido()
  {
    std::cout << "Destroi Partido!" << std::endl;
  }
  void imprime();
};

class Politico : public Partido
{
protected:
  std::string nome;
  int numero;

public:
  Politico(std::string n, std::string p, std::string sigla, int numero) : Partido{p, sigla}, nome{n}, numero{numero}
  {
    std::cout << " Construindo Politico!" << std::endl;
  }
  void imprime();
  ~Politico()
  {
    std::cout << "Destroi Politico!" << std::endl;
  }
};

class Presidente : public Politico
{
protected:
  std::string country;

public:
  Presidente(std::string nome, std::string partido, std::string sigla, int numero, std::string c) : Politico{nome, partido, sigla, numero}, country{c}
  {
    std::cout << " Construindo Presidente!" << std::endl;
  }
  void imprime();
  ~Presidente()
  {
    std::cout << "Destroi Presidente!" << std::endl;
  }
};

class Governador : public Presidente
{
protected:
  std::string estado;

public:
  Governador(std::string nome, std::string partido, std::string sigla, int numero,
             std::string pais, std::string e) : Presidente{nome, partido, sigla, numero, pais},
                                                estado{e}
  {
    std::cout << "Construindo Governador!" << std::endl;
  }
  void imprime();
  ~Governador() { std::cout << "Destroi Governador!" << std::endl; }
};

class Prefeito : public Governador
{
protected:
  std::string cidade;

public:
  Prefeito(std::string nome, std::string partido, std::string sigla, int numero,
           std::string pais, std::string estado, std::string c) : Governador{nome, partido, sigla, numero, pais, estado},
                                                                  cidade{c}
  {
    std::cout << " Construindo Prefeito!" << std::endl;
  }
  void imprime();
  ~Prefeito()
  {
    std::cout << "Destroi Prefeito!" << std::endl;
  }
};
#endif