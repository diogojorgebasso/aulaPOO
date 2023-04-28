#ifndef POSICAO_H
#define POSICAO_H

class Posicao {
	private:
		int x, y;
	public:
		Posicao(int=0, int=0);
		~Posicao() {}
		Posicao& move_to(int, int);
		void imprime();
};

#endif