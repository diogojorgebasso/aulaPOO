#include "ex2.h"
#include <iostream>

int main()
{
  int opcao;
  Ponto *ponto;

  do
  {
    opcao = menu();

    switch (opcao)
    {
    case 1:
      ponto = new Ponto();
      ponto->leitura();
      break;
    case 2:
      ponto = new Circulo();
      ponto->leitura();
      break;
    case 3:
      ponto = new Cilindro();
      ponto->leitura();
      break;
    case 4:
      ponto = new Quadrado();
      ponto->leitura();
      break;
    case 5:
      ponto = new Prisma();
      ponto->leitura();
      break;
    case 0:
      std::cout << "Encerrando o programa..." << std::endl;
      break;
    default:
      std::cout << "Opção inválida!" << std::endl;
      break;
    }
  } while (opcao != 0);

  return 0;
}

int menu()
{
  int opcao;

  std::cout << "===== MENU =====" << std::endl;
  std::cout << "1. Criar um ponto" << std::endl;
  std::cout << "2. Criar um círculo" << std::endl;
  std::cout << "3. Criar um cilindro" << std::endl;
  std::cout << "4. Criar um quadrado" << std::endl;
  std::cout << "5. Criar um prisma" << std::endl;
  std::cout << "0. Sair" << std::endl;
  std::cout << "Digite a opção desejada: ";
  std::cin >> opcao;

  return opcao;
}

std::istream &operator>>(std::istream &input, Ponto &in)
{
  in.leitura();
  return input;
}

std::ostream &operator<<(std::ostream &output, const Ponto &out)
{
  out.imprime();
  return output;
}