#ifndef CPILHA_H
#define CPILHA_H

#include <iostream>
#include <stdexcept>

template <typename T>
class CPilha
{
private:
  T *m_dados;            // ponteiro para dados da pilha
  int m_ponteirodaPilha; // apontador do topo da pilha
  int m_tamanho;         // espaço de memória reservado para o objeto

public:
  CPilha(int memoria)
  {
    m_dados = new T[memoria];
    m_tamanho = memoria;
    m_ponteirodaPilha = -1;
  }

  CPilha()
  {
    m_dados = nullptr;
    m_tamanho = 0;
    m_ponteirodaPilha = -1;
  }

  ~CPilha()
  {
    delete[] m_dados;
  }

  void push(T push_this)
  {
    if (m_ponteirodaPilha == m_tamanho - 1)
    {
      throw std::overflow_error("Pilha cheia - não é possível inserir elementos");
    }

    m_dados[++m_ponteirodaPilha] = push_this;
  }

  T pop()
  {
    if (m_ponteirodaPilha == -1)
    {
      throw std::underflow_error("Pilha vazia - não é possível retirar elementos");
    }

    return m_dados[m_ponteirodaPilha--];
  }
};

#endif
