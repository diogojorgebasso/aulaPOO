#include <iostream>
#include "aluno.h"
#include "professor.h"

int main()
{
	Pessoa p{"Joao", "Itajuba"};
	Professor pf{"Pedro", "SJC", 132515, 2, "IESTI"};

	Pessoa *ptrJoao = &p;											 // ponteiro para Professor aponta para Pessoa.
	Pessoa *ptrPedro = &pf;										 // Ponteiro para Professor aponta para Professor
	Professor *ptrProf = (Professor *)ptrJoao; // conversão explícita (downcasting)

	cout << "Pessoa: \n";
	ptrJoao->imprime_perfil(); // Pessoa::imprime_perfil()
	cout << "\nProfessor: \n";
	ptrProf->imprime_perfil(); // Professor::imprime_perfil()
}
