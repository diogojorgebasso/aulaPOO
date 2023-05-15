#include <string>
#include <iostream>
#include "politico.h"
using namespace std;

ostream &operator<<(ostream &out, Politico &p)
{
  p.imprime();
  return out;
}

istream &operator>>(istream &in, Politico &p)
{
  p.read();
  return in;
}

void Politico::imprime()
{
  cout << "Numero: " << numero << endl;
  cout << "Nome: " << nome << endl;
  cout << "Partido: " << partido << endl;
}

void Politico::read()
{
  cout << "Digite o nome: ";
  cin >> nome;
  cout << "Digite o partido: ";
  cin >> partido;
  cout << "Digite numero do candidato: ";
  cin >> numero;
}

void Presidente::imprime()
{
  Politico::imprime();
  cout << "Pais: " << pais << endl;
}

void Presidente::read()
{
  Politico::read();
  cout << "Digite o pais: ";
  cin >> pais;
}

void Governador::imprime()
{
  Presidente::imprime();
  cout << "Estado: " << estado << endl;
}

void Governador::read()
{
  Presidente::read();
  cout << "Digite o estado: ";
  cin >> estado;
}

void Prefeito::imprime()
{
  Governador::imprime();
  cout << "Cidade: " << cidade << endl
       << endl;
}

void Prefeito::read()
{
  Governador::read();
  cout << "Digite a cidade: ";
  cin >> cidade;
}

int menu()
{
  int op;
  cout << "1 - Presidente" << endl;
  cout << "2 - Governador" << endl;
  cout << "3 - Prefeito " << endl;
  cout << "0 - Sair antes" << endl;
  cout << "Sua opcao: ";
  while (cin >> op)
  {
    if (op == 0 || op == 1 || op == 2 || op == 3)
      return op;
    cout << "Digite uma das opcoes disponiveis" << endl;
  }
}

int main()
{
  int qtd;
  cout << "Informe quantidade de politicos: ";
  cin >> qtd;
  cout << endl;
  if (qtd < 0)
    qtd = 5;

  Politico *vet[qtd];
  cout << "Escolha " << qtd
       << " vezes qual o tipo que deseja criar" << endl;
  for (int j = 0; j < qtd; j++)
  {
    cout << endl;
    int op = menu();
    if (op == 0)
      return 0;
    switch (op)
    {
    case 1:
      vet[j] = new Presidente;
      cout << endl;
      cin >> *vet[j];
      break;
    case 2:
      vet[j] = new Governador;
      cout << endl;
      cin >> *vet[j];
      break;
    case 3:
      vet[j] = new Prefeito;
      cout << endl;
      cin >> *vet[j];
      break;
    }
  }
  cout << endl
       << "### MOSTRAR VETOR! ###" << endl
       << endl;
  for (int i = 0; i < qtd; i++)
    cout << *vet[i] << endl;
  cout << endl
       << "#### FIM ####" << endl
       << endl;

  for (int i = 0; i < qtd; i++)
    delete vet[i]; // chama o destrutor que deve ser virtual.
  return 0;
}