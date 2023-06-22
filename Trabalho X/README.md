# 10 º Laboratório ECOP13A – Programação Orientada a Objetos

## STL - parte 1 – 16 de junho 2023

## Prof. André Bernardi (andrebernardi@unifei.edu.br)

As tarefas devem ser feitas em arquivos “.CPP” e “.H”. Os nomes dos arquivos “.CPP” principais de cada exercício estão indicados (ex01.cpp, etc.). Ao final, coloque todos em um mesmo arquivo com extensão “.ZIP”, que você deverá enviar na tarefa “Laboratório 1 0 ” cadastrada no SIGAA. Não serão aceitas entregas via e-mail ou atrasadas. A entrega valerá nota e presença. Os exercícios da semana têm como objetivo principal fazer com que o aluno pratique o conceito de estruturas de dados sequenciais em STL. Siga as instruções:

## 1. Utilizando a STL, escreva um programa em C++ para a demonstração do funcionamento de uma **Pilha**.

Esta, incluída através do cabeçalho <stack>. Faça um programa que deve mostrar repetidamente um menu com as opções que podem ser escolhidas pelo usuário. Ele deve funcionar de maneira semelhante ao exemplo a seguir:

```sh
---------------------------
Programa de Pilha STL
---------------------------

1.Insira um elemento na pilha
2.Remova um elemento da pilha
3.Tamanho da pilha
4.Primeiro elemento da pilha
5.Sair
Escolha (1-5): 1 (cin)
Entre com o valor a ser inserido: 56 (cin)



1.Insira um elemento na pilha
2.Remova um elemento da pilha
3.Tamanho da pilha
4.Primeiro elemento da pilha
5.Sair
Escolha (1-5): 1 (cin)
Entre com o valor a ser inserido: 26 (cin)



1.Insira um elemento na pilha
2.Remova um elemento da pilha
3.Tamanho da pilha
4.Primeiro elemento da pilha
5.Sair
Escolha (1-5): 1 (cin)
Entre com o valor a ser inserido: 12 (cin)



1.Insira um elemento na pilha
2.Remova um elemento da pilha
3.Tamanho da pilha
4.Primeiro elemento da pilha
5.Sair
Escolha (1-5): 2 (cin)
Elemento 12 removido

1.Insira um elemento na pilha
2.Remova um elemento da pilha
3.Tamanho da pilha
4.Primeiro elemento da pilha
5.Sair
Escolha (1-5): 3 (cin)
Tamanho da pilha: 2

1.Insira um elemento na pilha
2.Remova um elemento da pilha
3.Tamanho da pilha
4.Primeiro elemento da pilha
5.Sair
Escolha (1-5): 4 (cin)
Primeiro elemento da pilha: 26

1.Insira um elemento na pilha
2.Remova um elemento da pilha
3.Tamanho da pilha
4.Primeiro elemento da pilha
5.Sair
Escolha (1-5): 5(cin)

Programa finalizado!

```

### 2. Utilizando a STL, escreva um programa em C++ para a demonstração do funcionamento de uma Lista Encadeada.

Esta, incluída através do cabeçalho <list>. Faça um programa que deve mostrar repetidamente um menu com as opções que podem ser escolhidas pelo usuário. Ele deve funcionar de maneira semelhante ao exemplo a seguir:

```sh
# Implementação de Lista no STL

1.Inserir elemento na frente
2.Inserir elemento no final
3.Excluir elemento na frente
4.Excluir elemento no final
5.Exibir primeiro elemento da lista
6.Exibir último elemento da lista
7.Tamanho da lista
8.Redimensionar lista
9.Remover elementos com valores específicos
10.Remover valores duplicados
11.Reverter a ordem dos elementos
12.Ordenar a lista
13.Sair


Escolha uma opção: (Usuário entra com cin)

```

Para mais informações sobre as funções membro do template list da STL, acesse o site com sua documentação em http://www.cplusplus.com/reference/list/list/. Este site pode ser muito útil pois contém a documentação de todas as classes e bibliotecas do C++.
