#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
	Pilha p(50);

	cout << "Pilha esta vazia? ";

	if(p.empty()) cout << "SIM\n";
	else cout << "NAO\n";

	cout << "Inserindo elemento... " << 10 << "\n"; 
	p.push(10);

	cout << "Inserindo elemento... " << 20 << "\n"; 
	p.push(20);

	cout << "Inserindo elemento... " << 30 << "\n"; 
	p.push(30);

	cout << "Que esta no topo? " << p.top() << "\n";
	cout << "Retirando elemento... " << p.pop() << "\n";
	cout << "Retirando elemento... " << p.pop() << "\n";
	cout << "Que esta no topo? " << p.top() << "\n";
	cout << "Entre com um elemento: ";
	int elem;
	cin >> elem;
	p.push(elem);
	cout << "Inserindo elemento... " << elem << "\n"; 
	cout << "Que esta no topo? " << p.top() << "\n";

}