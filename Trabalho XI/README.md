# 11 º Laboratório ECOP13 – Programação Orientada a Objetos

## STL - parte 2 – 23 de junho 2023

Prof. André Bernardi (andrebernardi@unifei.edu.br)

=As atividades devem ser feitas em arquivos “.CPP” e “.H”. Os nomes dos arquivos “.CPP” principais de cada exercício estão indicados (ex01.cpp, etc.). Ao final, coloque todos em um mesmo arquivo com extensão “. ZIP ” , que você deverá enviar na tarefa “Laboratório 11 ” cadastrada no SIGAA. A entrega valerá nota e presença.

## 1. (ex01.cpp) Utilizando a STL, escreva um programa em C++ para a demonstração do

funcionamento de uma **Heap ou Fila de Prioridade** , incluída através do cabeçalho <queue>.
Faça um programa que deve mostrar repetidamente um menu com as opções que podem ser
escolhidas pelo usuário. Ele deve funcionar de maneira semelhante ao exemplo a seguir:

```sh
Programa de Heap STL
---------------------------
1.Insira um elemento na heap
2.Remova um elemento da heap
3.Tamanho da heap
4.Primeiro elemento da heap
5.Sair
Escolha (1-5): 1 (cin)
Entre com o valor a ser inserido: 87 (cin)

1.Insira um elemento na heap
2.Remova um elemento da heap
3.Tamanho da heap
4.Primeiro elemento da heap
5.Sair
Escolha (1-5): 1 (cin)
Entre com o valor a ser inserido: 92 (cin)

1.Insira um elemento na heap
2.Remova um elemento da heap
3.Tamanho da heap
4.Primeiro elemento da heap
5.Sair
Escolha (1-5): 1 (cin)
Entre com o valor a ser inserido: 35 (cin)

1.Insira um elemento na heap
2.Remova um elemento da heap
3.Tamanho da heap
4.Primeiro elemento da heap
5.Sair
Escolha (1-5): 2 (cin)
Elemento 92 removido do topo da heap

1.Insira um elemento na heap
2.Remova um elemento da heap
3.Tamanho da heap
4.Primeiro elemento da heap
5.Sair

Escolha (1-5): 3 (cin)
Tamanho da heap: 2
1.Insira um elemento na heap
2.Remova um elemento da heap
3.Tamanho da heap
4.Primeiro elemento da heap
5.Sair
Escolha (1-5): 4 (cin)
Primeiro elemento da heap (topo): 87

1.Insira um elemento na heap
2.Remova um elemento da heap
3.Tamanho da heap
4.Primeiro elemento da heap
5.Sair
Escolha (1-5): 5(cin)

Programa finalizado!
```

## 2. Utilizando a STL, escreva um programa em C++ para a demonstração do funcionamento de uma árvore binária de busca balanceada ou set.

Incluída através do cabeçalho
<set>. Faça um programa que deve mostrar repetidamente um menu com as opções que
podem ser escolhidas pelo usuário. A árvore poderá conter valores repetidos, portanto escolha a classe adequada (multiset). Ele deve funcionar de maneira semelhante ao exemplo a seguir:

```sh
# Implementação de Árvore (set) no STL

1. Inserir elemento
2. Remover elementos com determinado valor
3. Exibir elementos em ordem
4. Exibir quantidade de elementos
5. Remover todos os elementos
6. Consultar quantidade de elementos com determinado valor
7. Sair

Escolha uma opção: (Usuário entra com cin)
```
