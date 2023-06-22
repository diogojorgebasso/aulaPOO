// pilha.h
#ifndef PILHA_H
#define PILHA_H

#include <stack>

class Pilha
{
private:
  std::stack<int> pilha;

public:
  void inserirElemento(int valor);
  void removerElemento();
  int tamanho();
  int primeiroElemento();
  bool vazia();
};

#endif // PILHA_H
