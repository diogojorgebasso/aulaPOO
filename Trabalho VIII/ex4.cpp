#include <iostream>
#include <stdexcept>

class CPilha
{
private:
  int *m_dados;
  int m_ponteirodaPilha;
  int m_tamanho;

public:
  CPilha(int memoria)
  {
    m_dados = new int[memoria];
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

  void push(int push_this)
  {
    if (m_ponteirodaPilha == m_tamanho - 1)
    {
      throw std::overflow_error("Pilha cheia - não é possível inserir elementos");
    }

    m_dados[++m_ponteirodaPilha] = push_this;
  }

  int pop()
  {
    if (m_ponteirodaPilha == -1)
    {
      throw std::underflow_error("Pilha vazia - não é possível retirar elementos");
    }

    return m_dados[m_ponteirodaPilha--];
  }
};

int main()
{
  CPilha pilha(5);

  try
  {
    pilha.push(1);
    pilha.push(2);
    pilha.push(3);
    pilha.push(4);
    pilha.push(5);

    // A próxima inserção deve lançar um overflow
    pilha.push(6);
  }
  catch (const std::overflow_error &e)
  {
    std::cout << "Erro: " << e.what() << std::endl;
  }

  try
  {
    std::cout << pilha.pop() << std::endl; // 5
    std::cout << pilha.pop() << std::endl; // 4
    std::cout << pilha.pop() << std::endl; // 3
    std::cout << pilha.pop() << std::endl; // 2
    std::cout << pilha.pop() << std::endl; // 1

    // A próxima retirada deve lançar um underflow
    std::cout << pilha.pop() << std::endl;
  }
  catch (const std::underflow_error &e)
  {
    std::cout << "Erro: " << e.what() << std::endl;
  }

  return 0;
}