#include "geometria.h"

using namespace std;

istream &operator>>(istream &input, Ponto &in)
{
  in.leitura();
  return input;
}

ostream &operator<<(ostream &output, const Ponto &out)
{
  out.imprime();
  return output;
}

int menu()
{
  int op;
  cout << "1 - Ponto " << endl;
  cout << "2 - Circulo " << endl;
  cout << "3 - Cilindro" << endl;
  cout << "0 - Sair " << endl;
  cout << "Digite opcao desejada para inserir: ";
  while (cin >> op)
  {
    if (op == 0 || op == 1 || op == 2 || op == 3)
      return op;
    cout << "Digite uma das opcoes disponiveis" << endl;
  }
  return 0;
}

int main(void)
{
  int quantidadeFormas;
  cout << "Informe quantidade de formas: ";
  cin >> quantidadeFormas;
  cout << endl;
  if (quantidadeFormas < 0)
    quantidadeFormas = 3;

  Ponto *vet[quantidadeFormas];

  cout << "Escolha " << quantidadeFormas
       << " vezes qual o tipo que deseja criar" << endl;
  for (int j = 0; j < quantidadeFormas; j++)
  {
    cout << endl;
    int op = menu();
    if (op == 0)
      return 0;
    switch (op)
    {
    case 1:
      vet[j] = new Ponto;
      cout << endl;
      cin >> *vet[j];
      break;
    case 2:
      vet[j] = new Circulo;
      cout << endl;
      cin >> *vet[j];
      break;
    case 3:
      vet[j] = new Cilindro;
      cout << endl;
      cin >> *vet[j];
      break;
    }
  }

  for (int i = 0; i < quantidadeFormas; i++)
  {
    cout << *vet[i];
    cout << endl;
  }

  // limpar a memória.
  for (int i = 0; i < quantidadeFormas; i++)
    delete vet[i]; // chama o destrutor que deve ser virtual.
  return 0;
}