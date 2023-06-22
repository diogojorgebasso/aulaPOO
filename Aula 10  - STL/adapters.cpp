#include <iostream>
#include <stack>
#include <queue>
#include <list>

using namespace std;

int main()
{
    stack<int> pilha;
    queue<int, list<int>> fila;

    // insere na pilha e na fila
    for(int i = 0; i < 5; i++) {
        pilha.push(i);
        fila.push(i);
    }

    // imprime pilha
    cout << "Pilha: ";
    while(!pilha.empty()) {
        cout << pilha.top() << " ";
        pilha.pop();
    }
    cout << endl;

    // imprime fila
    cout << "Fila: ";
    while(!fila.empty()) {
        cout << fila.front() << " ";
        fila.pop();
    }
    cout << endl;
}

