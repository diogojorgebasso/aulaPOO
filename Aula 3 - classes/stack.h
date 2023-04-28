// Interface da classe Pilha (stack.h)
// Definições de funções em stack.cpp

#ifndef PILHA_H
#define PILHA_H

class Pilha {

	private:
		int *dados;
		int topo;
		int tamanho;

		// função utiltária (ou auxiliar)
		void aloca_memoria();

	public:
		Pilha();
		Pilha(int);
		~Pilha();

		bool empty(); // verifica se vazia (Função de acesso)
		void push(int); // insere no topo
		int top(); // visualiza topo
		int pop(); // retira do topo
};

#endif