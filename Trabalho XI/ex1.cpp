#include <iostream>
#include <queue>

using namespace std;

int main()
{
  queue<int> heap;
  int opcao;
  int valor;
  int tamanho;
  int primeiroElemento;

  do
  {
    cout << "Programa de Heap STL" << endl;
    cout << "1.Insira um elemento na heap" << endl;
    cout << "2.Remova um elemento da heap" << endl;
    cout << "3.Tamanho da heap" << endl;
    cout << "4.Primeiro elemento da heap" << endl;
    cout << "5.Sair" << endl;
    cout << "Escolha(1 - 5) : ";
    cin >> opcao;
    switch (opcao)
    {
    case 1:
      cout << "Entre com o valor a ser inserido : ";
      cin >> valor;
      heap.push(valor);
      break;
    case 2:
      cout << "Elemento " << heap.front() << " removido do topo da heap" << endl;
      heap.pop();
      break;
    case 3:
      tamanho = heap.size();
      cout << "Tamanho da heap : " << tamanho << endl;
      break;
    case 4:
      primeiroElemento = heap.front();
      cout << "Primeiro elemento da heap(topo) : " << primeiroElemento << endl;
      break;
    case 5:
      cout << "Programa finalizado !" << endl;
      break;
    default:
      cout << "Opcao invalida!" << endl;
      break;
    }
  } while (opcao != 5);

  return 0;
}
