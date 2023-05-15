#ifndef ALUNO_H
#define ALUNO_H

#include "pessoa.h"

// classe Aluno, derivada de Pessoa
class Aluno : public Pessoa {
	private:
		string curso;
		int matricula;
	public:
		Aluno(string, string, string, int);
		~Aluno() {}
		void mudar_curso(string);
		void imprime_perfil(); // opa, uma redefinição!
};

#endif

