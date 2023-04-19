#include <iostream>
#include <cstdlib> // veja que bibliotecas de C também estão aqui

using namespace std;

#define SIZE 100

int count_x(int* v, int key)
{
	if(v == nullptr) return 0; // verifica se ponteiro não está vazio
	int count = 0;

	for(int i = 0; i < SIZE; i++)
	{
		if(v[i] == key) ++count;
	}
	return count;
}

int main()
{
	int *vect = nullptr;
	
	// cria vetor na free store
	vect = new int[SIZE];

	for(int i = 0; i < SIZE; i++)
		vect[i] = rand()%10;

	cout << "Ocorrencias de 1: " << count_x(vect, 1) << "\n";
	cout << "Ocorrencias de 5: " << count_x(vect, 5) << "\n";
	cout << "Ocorrencias de 10: " << count_x(vect, 10) << "\n";	

	// deleta objetos criados com new
	delete[] vect;
}