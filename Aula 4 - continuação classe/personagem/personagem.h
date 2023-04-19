#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>
#include "posicao.h"

using namespace std;

class Personagem {
	private:
		string nome;
		int forca, velocidade, xp, nivel, vida;
		Posicao pos;

		void up_level(int);
	public:
		Personagem(string, int=0, int=0, int=0, int=0);
		~Personagem() {}
		void attack(Personagem&);
		int defense(int);
		void imprime_info();
		Personagem& move(int, int);
};

#endif