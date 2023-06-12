#include <iostream>
#include <vector>
#include <stdexcept>

/*
Neste exemplo, um loop while é usado para alocar continuamente um vetor grande de double
A alocação é feita usando o operador new[] e especificando um tamanho muito grande (neste caso, 1000000000 elementos)
O loop é infinito, pois não há desalocação do vetor.
*/

int main()
{
  try
  {
    while (true)
    {
      double *ptr = new double[1000000000]; // Aloca um vetor grande de double
      std::cout << "Vetor alocado com sucesso." << std::endl;
    }
  }
  catch (const std::bad_alloc &e)
  {
    std::cout << "Erro de falta de memória: " << e.what() << std::endl;
  }

  return 0;
}