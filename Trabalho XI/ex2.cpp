#include <iostream>
#include <set>

int main()
{
  std::multiset<int> arvore; // Declaração da árvore como multiset de inteiros

  int opcao;
  do
  {
    // Exibição do menu
    std::cout << "======================================" << std::endl;
    std::cout << "Implementação de Árvore (set) no STL" << std::endl;
    std::cout << "======================================" << std::endl;
    std::cout << "1. Inserir elemento" << std::endl;
    std::cout << "2. Remover elementos com determinado valor" << std::endl;
    std::cout << "3. Exibir elementos em ordem" << std::endl;
    std::cout << "4. Exibir quantidade de elementos" << std::endl;
    std::cout << "5. Remover todos os elementos" << std::endl;
    std::cout << "6. Consultar quantidade de elementos com determinado valor" << std::endl;
    std::cout << "7. Sair" << std::endl;
    std::cout << "Escolha uma opção: ";
    std::cin >> opcao;

    switch (opcao)
    {
    case 1:
    {
      int elemento;
      std::cout << "Digite o elemento a ser inserido: ";
      std::cin >> elemento;
      arvore.insert(elemento);
      std::cout << "Elemento inserido com sucesso!" << std::endl;
      break;
    }
    case 2:
    {
      int valor;
      std::cout << "Digite o valor dos elementos a serem removidos: ";
      std::cin >> valor;
      arvore.erase(valor);
      std::cout << "Elementos removidos com sucesso!" << std::endl;
      break;
    }
    case 3:
    {
      std::cout << "Elementos em ordem: ";
      for (const auto &elemento : arvore)
      {
        std::cout << elemento << " ";
      }
      std::cout << std::endl;
      break;
    }
    case 4:
    {
      std::cout << "Quantidade de elementos: " << arvore.size() << std::endl;
      break;
    }
    case 5:
    {
      arvore.clear();
      std::cout << "Todos os elementos foram removidos!" << std::endl;
      break;
    }
    case 6:
    {
      int valor;
      std::cout << "Digite o valor para consultar a quantidade de elementos: ";
      std::cin >> valor;
      std::cout << "Quantidade de elementos com valor " << valor << ": "
                << arvore.count(valor) << std::endl;
      break;
    }
    case 7:
    {
      std::cout << "Saindo..." << std::endl;
      break;
    }
    default:
    {
      std::cout << "Opção inválida. Tente novamente." << std::endl;
      break;
    }
    }
  } while (opcao != 7);

  return 0;
}
