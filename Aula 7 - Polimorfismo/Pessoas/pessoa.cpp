#include "pessoa.h"
#include <iostream>
using namespace std;

// Repare que toda a implementação da classe é normal.
// Qualquer classe pode servir de base para outra.

Pessoa::Pessoa(string n, string e) 
	: nome{n}, endereco{e} { }

void Pessoa::muda_endereco(string e)
{
	endereco = e;
}

void Pessoa::imprime_perfil()
{
	cout << "Nome: " << nome << "\n";
	cout << "Endereco: " << endereco;
}

