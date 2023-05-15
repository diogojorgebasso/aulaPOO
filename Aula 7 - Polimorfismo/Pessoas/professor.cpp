#include "professor.h"
#include <iostream>
using namespace std;

// Construtor da classe Professor, derivada de Pessoa
Professor::Professor(string n, string e, int s, int c, string i)
	: Pessoa{n, e}, siape{s}, categoria{c}, instituto{i} {}

void Professor::imprime_perfil()
{
	// Chama a função imprime_perfil() da classe base
	// que desempenha seu papel normalmente, imprimindo
	// os valores para nome e endereco.
	Pessoa::imprime_perfil();

	// complementa a impressao com valores da classe derivada
	cout << "\nsiape: " << siape;
	cout << "\ncategoria: " << categoria;
	cout << "\ninstituto: " << instituto;
}

