#ifndef PROFESSORALUNO_H
#define PROFESSORALUNO_H

#include "aluno.h"
#include "professor.h"

class ProfessorAluno : public Professor, public Aluno {
	private:
		bool esta_ativo;
	public:
		ProfessorAluno(string n, string e, int m, int s, int cat, string c, string i)
			: Professor{n, e, s, cat, i}, Aluno{n, e, c, m} 
		{
			esta_ativo = true;
		}

		void imprime_perfil()
		{
			// é necessário implementar, para que não haja ambiguidade,
			// dado que tanto Aluno quanto Professor possuem funções com mesmo nome
			Professor::imprime_perfil();
		}
};

#endif