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

int main()
{
  try
  {
    CPilha<int> pilha(5);

    pilha.push(1);
    pilha.push(2);
    pilha.push(3);
    pilha.push(4);
    pilha.push(5);

    // A próxima inserção deve lançar uma exceção de estouro (overflow)
    pilha.push(6);
  }
  catch (const std::overflow_error &e)
  {
    std::cout << "Erro: " << e.what() << std::endl;
  }

  try
  {
    CPilha<double> pilha;

    pilha.push(3.14);
    pilha.push(2.718);
    pilha.push(1.618);

    std::cout << pilha.pop() << std::endl; // 1.618
    std::cout << pilha.pop() << std::endl; // 2.718
    std::cout << pilha.pop() << std::endl; // 3.14

    // A próxima retirada deve lançar uma exceção de subfluxo (underflow)
    std::cout << pilha.pop() << std::endl;
  }
  catch (const std::underflow_error &e)
  {
    std::cout << "Erro: " << e.what() << std::endl;
  }

  return 0;
}