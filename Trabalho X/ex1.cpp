#include "pilha.h"
#include <iostream>

void Pilha::inserirElemento(int valor)
{
  pilha.push(valor);
}

void Pilha::removerElemento()
{
  if (!pilha.empty())
  {
    pilha.pop();
  }
  else
  {
    std::cout << "A pilha está vazia!" << std::endl;
  }
}

int Pilha::tamanho()
{
  return pilha.size();
}

int Pilha::primeiroElemento()
{
  if (!pilha.empty())
  {
    return pilha.top();
  }
  else
  {
    std::cout << "A pilha está vazia!" << std::endl;
    return -1; // Valor inválido, caso a pilha esteja vazia
  }
}

bool Pilha::vazia()
{
  return pilha.empty();
}

int main()
{
  Pilha pilha;
  int escolha;

  do
  {
    std::cout << "---------------------------" << std::endl;
    std::cout << "Programa de Pilha STL" << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << "1. Insira um elemento na pilha" << std::endl;
    std::cout << "2. Remova um elemento da pilha" << std::endl;
    std::cout << "3. Tamanho da pilha" << std::endl;
    std::cout << "4. Primeiro elemento da pilha" << std::endl;
    std::cout << "5. Sair" << std::endl;
    std::cout << "Escolha (1-5): ";
    std::cin >> escolha;

    switch (escolha)
    {
    case 1:
    {
      int valor;
      std::cout << "Entre com o valor a ser inserido: ";
      std::cin >> valor;
      pilha.inserirElemento(valor);
      break;
    }
    case 2:
      pilha.removerElemento();
      break;
    case 3:
      std::cout << "Tamanho da pilha: " << pilha.tamanho() << std::endl;
      break;
    case 4:
    {
      int primeiro = pilha.primeiroElemento();
      if (primeiro != -1)
      {
        std::cout << "Primeiro elemento da pilha: " << primeiro << std::endl;
      }
      else
      {
        std::cout << "A pilha está vazia!" << std::endl;
      }
      break;
    }
    case 5:
      std::cout << "Programa finalizado!" << std::endl;
      break;
    default:
      std::cout << "Opção inválida!" << std::endl;
    }
  } while (escolha != 5);

  return 0;
}