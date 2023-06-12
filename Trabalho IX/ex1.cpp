#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

template <typename T>
class Vetor
{
private:
  std::vector<T> elementos;

public:
  void AdicionarElemento(T elemento)
  {
    elementos.push_back(elemento);
  }

  void Ordena()
  {
    if (elementos.empty())
    {
      throw std::logic_error("Não é possível ordenar um vetor vazio");
    }

    std::sort(elementos.begin(), elementos.end());
  }

  void Imprimir()
  {
    for (const auto &elemento : elementos)
    {
      std::cout << elemento << " ";
    }
    std::cout << std::endl;
  }
};

int main()
{
  try
  {
    Vetor<int> vetor;
    vetor.AdicionarElemento(5);
    vetor.AdicionarElemento(2);
    vetor.AdicionarElemento(7);
    vetor.AdicionarElemento(1);

    vetor.Imprimir();

    vetor.Ordena();

    vetor.Imprimir();
  }
  catch (const std::exception &e)
  {
    std::cout << "Erro: " << e.what() << std::endl;
  }

  return 0;
}