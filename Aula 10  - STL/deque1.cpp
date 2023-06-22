#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> dados;

    // Podemos inserir elementos no inicio e fim da fila
    dados.push_front(1);
    dados.push_front(2);
    dados.push_front(3);
    dados.push_back(9);
    dados.push_back(10);

    cout << "Tamanho da deque: " << dados.size() << "\n";

    cout << "Elementos: ";
    for(deque<int>::iterator it = dados.begin(); it < dados.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // também podemos remover elementos das duas extremidades
    dados.pop_back();
    dados.pop_front();

    cout << "Elementos: ";
    for(deque<int>::iterator it = dados.begin(); it < dados.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "Terceiro elemento: " << dados[2] << "\n";
    
    return 0;
}
