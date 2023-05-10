#include <string>
#include <iostream>
#include "politico.h"

void Partido::imprime()
{
  std::cout << "Nome: " << nome << std::endl;
  std::cout << "Sigla: " << sigla << std::endl;
}

void Politico::imprime()
{
  Partido::imprime();
  std::cout << "Numero: " << numero << std::endl;
  std::cout << "Nome: " << nome << std::endl;
}
void Presidente::imprime()
{
  Politico::imprime();
  std::cout << "Pais: " << country << std::endl;
}
void Governador::imprime()
{
  Presidente::imprime();
  std::cout << "Estado: " << estado << std::endl;
}
void Prefeito::imprime()
{
  Governador::imprime();
  std::cout << "Cidade: " << cidade << std::endl;
}

int main(void)
{
  Partido p1{"Partido dos Trabalhadores", "PT"};
  Politico pol1{"Lula", "p1", "PT", 13};
  Presidente pres1{"Lula", "p1", "PT", 13, "Brasil"};
  Governador gov1{"Haddad", "p1", "PT", 13, "Brasil", "Sao Paulo"};
  Prefeito pre1{"Anderson", "p1", "PT", 13, "Brasil", "Sao Paulo", "Sao Paulo"};
  p1.imprime();
  pol1.imprime();
  pres1.imprime();
  gov1.imprime();
  pre1.imprime();
  return 0;
}