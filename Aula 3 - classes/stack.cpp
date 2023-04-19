// definições de funções membro da
// classe Pilha (stack.cpp)

#include "stack.h"
#include <iostream>
using namespace std;

// Função privada de alocação de memória
// Não faz sentido fazer parte da interface pública
void Pilha::aloca_memoria()
{
	if(tamanho > 0)
		dados = new int[tamanho];
	else
		dados = nullptr;
}

// Construtor Padrão
Pilha::Pilha()
{
	// tamanho padrão da pilha
	tamanho = 100;
	topo = -1;
	aloca_memoria();
}

// Construtor com parâmetros
Pilha::Pilha(int t)
{
	if(t < 0) t = 0; // verificação de segurança
	tamanho = t;
	topo = -1;
	aloca_memoria();
	cout << "construindo..." << endl;
}

// Destrutor:
// responsável pela limpeza da classe e
// desalocação de recursos.
Pilha::~Pilha()
{
	if(dados != nullptr)
		delete[] dados;
	cout << "destruindo..." << endl;
}

// verifica se pilha está vazia
bool Pilha::empty()
{
	return (topo == -1 ? true : false);
}

// se possível, insere novo item na pilha
void Pilha::push(int v)
{
	// verificações de segurança
	if(dados != nullptr && topo != tamanho-1)
	{
		// inserção
		topo++;
		dados[topo] = v;
	}
}

// retorna elemento no topo da pilha
int Pilha::top()
{
	if(!empty())
		return dados[topo];
}

// retira elemento do topo da pilha
int Pilha::pop()
{
	// verifica se há elementos e retorna dado
	if(!empty())
		return dados[topo--];
}