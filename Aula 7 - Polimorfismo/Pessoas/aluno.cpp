#include "aluno.h"
#include <iostream>
using namespace std;

// Podemos chamar o construtor da classe base
// para inicializar os membros herdados.
// Por isso, Pessoa{n,e} já inicializa a parte 
// de Aluno que é simplesmente uma Pessoa.
Aluno::Aluno(string n, string e, string c, int m)
	: Pessoa{n,e}, curso{c}, matricula{m} {}

// Somente implementamos as funções membro da classe Aluno
void Aluno::mudar_curso(string c)
{
	curso = c;
}

void Aluno::imprime_perfil()
{
	// Chama a função imprime_perfil() da classe base
	// que desempenha seu papel normalmente, imprimindo
	// os valores para nome e endereco.
	Pessoa::imprime_perfil();

	// complementa a impressao com valores da classe derivada
	cout << "\nmatricula: " << matricula;
	cout << "\ncurso: " << curso;
}
