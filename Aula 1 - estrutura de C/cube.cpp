#include <iostream>

// declara que torna acessível o namespace std sem qualificação (std::)
using namespace std;

// protótipo da função
int cube(int);

int main()
{
	cout << "Entre com um numero inteiro: "; // Não é necessário std::

	int number = 0;
	//cin >> number;

	cout << "Resultado: " << number << "^3 = " << cube(number) << endl;
}

// definição da função
int cube(int n)
{
	return n*n*n;
}

