#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

// classe base para hieraquia
// contém info básica para qualquer PESSOA
class Pessoa {
	// um novo identificador: o que significa?
	protected: 
		string nome;
		string endereco;
	public:
		Pessoa(string, string);
		~Pessoa() {}
		void muda_endereco(string);
		void imprime_perfil();
};

#endif

