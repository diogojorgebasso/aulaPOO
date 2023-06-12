# 8 º Laboratório ECOP13A - Exceções

---

## 1. Utilize a classe Polinomio do laboratório cinco para implementar o lançamento de uma exceção de índice fora da faixa dentro da sobrecarga do operador []. Crie um programa para testar o mecanismo das exceções usando essa classe.

## 2. Crie um programa que aloque continuamente um vetor de double, sem desalocá-lo para testar o processamento de exceções de falta de memória. (std::bad_alloc).

## 3. Para a classe CPilha abaixo, identifique e corrija os erros de sintaxe presentes em sua descrição.

```c++
//arquivo pilha.h
//header file para classe pilha
#ifndef PILHA_H
#define PILHA_H
class CPilha
{
Private
int *m_dados; // ponteiro para dados da pilha
int m_ponteirodaPilha // apontador do topo da pilha
int m_tamanho; // espaço de memória reservado para o objeto
public
void CPilha ( memoria ); // construtor com parâmetros
CPilha ( void ); // construtor sem parâmetros
~CPilha ( void ); // destrutor
int pop ( int *pop_to ); // puxar dados da pilha
int push ( int push_this ); // empurrar dados para a pilha
}
#endif
```

## 4. Implemente a classe CPilha do exercício anterior, adicionando o lançamento de exceções nas funções push e pop para sinalizar que não foi possível inserir ou retirar um elemento da pilha, respectivamente. Crie um programa principal simples para testar suas funcionalidades
