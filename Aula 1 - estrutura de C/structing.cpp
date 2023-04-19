#include <iostream>

using namespace std;

struct TreeNode{
	int value;
	TreeNode *left; // Não são instâncias,
	TreeNode *right; // são referências!
};

struct Tempo {
	int hora;
	int minuto;
	int segundo;
};

// Imprime hora sem modificar valor
void print_time(const Tempo& t)
{
	cout << t.hora << ":" << t.minuto;
}

int main()
{
	Tempo t {8, 10, 52};
	print_time(t);
	cout << "\n";

	Tempo temp {0,30,5};
	Tempo *temptr = &temp;

	temp.hora = 10;
	cout << "Membro hora: " << temptr->hora << "\n";
}