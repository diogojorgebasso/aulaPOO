#include <iostream>
#include <list>

int main()
{
  std::list<int> lista;
  int escolha;

  do
  {
    std::cout << "===============================" << std::endl;
    std::cout << "Implementação de Lista no STL" << std::endl;
    std::cout << "===============================" << std::endl;
    std::cout << "1. Inserir elemento na frente" << std::endl;
    std::cout << "2. Inserir elemento no final" << std::endl;
    std::cout << "3. Excluir elemento na frente" << std::endl;
    std::cout << "4. Excluir elemento no final" << std::endl;
    std::cout << "5. Exibir primeiro elemento da lista" << std::endl;
    std::cout << "6. Exibir último elemento da lista" << std::endl;
    std::cout << "7. Tamanho da lista" << std::endl;
    std::cout << "8. Redimensionar lista" << std::endl;
    std::cout << "9. Remover elementos com valores específicos" << std::endl;
    std::cout << "10. Remover valores duplicados" << std::endl;
    std::cout << "11. Reverter a ordem dos elementos" << std::endl;
    std::cout << "12. Ordenar a lista" << std::endl;
    std::cout << "13. Sair" << std::endl;
    std::cout << "Escolha uma opção: ";
    std::cin >> escolha;

    switch (escolha)
    {
    case 1:
    {
      int valor;
      std::cout << "Digite o valor a ser inserido na frente: ";
      std::cin >> valor;
      lista.push_front(valor);
      break;
    }
    case 2:
    {
      int valor;
      std::cout << "Digite o valor a ser inserido no final: ";
      std::cin >> valor;
      lista.push_back(valor);
      break;
    }
    case 3:
      if (!lista.empty())
      {
        lista.pop_front();
      }
      else
      {
        std::cout << "A lista está vazia!" << std::endl;
      }
      break;
    case 4:
      if (!lista.empty())
      {
        lista.pop_back();
      }
      else
      {
        std::cout << "A lista está vazia!" << std::endl;
      }
      break;
    case 5:
      if (!lista.empty())
      {
        std::cout << "Primeiro elemento da lista: " << lista.front() << std::endl;
      }
      else
      {
        std::cout << "A lista está vazia!" << std::endl;
      }
      break;
    case 6:
      if (!lista.empty())
      {
        std::cout << "Último elemento da lista: " << lista.back() << std::endl;
      }
      else
      {
        std::cout << "A lista está vazia!" << std::endl;
      }
      break;
    case 7:
      std::cout << "Tamanho da lista: " << lista.size() << std::endl;
      break;
    case 8:
    {
      int novoTamanho;
      std::cout << "Digite o novo tamanho da lista: ";
      std::cin >> novoTamanho;
      lista.resize(novoTamanho);
      break;
    }
    case 9:
    {
      int valor;
      std::cout << "Digite o valor a ser removido da lista: ";
      std::cin >> valor;
      lista.remove(valor);
      break;
    }
    case 10:
      lista.unique();
      break;
    case 11:
      lista.reverse();
      break;
    case 12:
      lista.sort();
      break;
    case 13:
      std::cout << "Programa finalizado!" << std::endl;
      break;
    default:
      std::cout << "Opção inválida!" << std::endl;
    }
  } while (escolha != 13);

  return 0;
}