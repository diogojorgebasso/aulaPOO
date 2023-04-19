#include <iostream>
#include "personagem.h"

using namespace std;

int main()
{
	Personagem ulysses("Ulysses", 24, 2, 80, 2);
	Personagem jackson("Jackson", 99, 67, 80, 1);

	ulysses.move(10, 50);
	jackson.move(20, 40);

	ulysses.imprime_info();
	jackson.imprime_info();

	cout << "\nUlysses atacou! \n\n";
	ulysses.attack(jackson);	
	ulysses.imprime_info();
	jackson.imprime_info();

	cout << "\nJackson atacou! \n\n";
	jackson.attack(ulysses);	
	ulysses.imprime_info();
	jackson.imprime_info();

}
