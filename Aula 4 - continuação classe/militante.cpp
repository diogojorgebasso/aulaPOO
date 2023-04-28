#include <string>
#include <iostream>

using namespace std;

#ifndef MILITANTE_H
#define MILITANTE_H

class Militante 
{
	private:
		string nome;
		static int count;
	public:
		Militante(string);
		~Militante() {}
		void grita();
};

#endif

int Militante::count = 0; // é preciso inicializar aqui (Não pode ser In-Class)

Militante::Militante(string n) : nome{n}
{
	count++; // aumenta o numero de militantes
}

void Militante::grita()
{
	if(count >= 3)
		cout << "Eu tenho direito! \n";
	else
		cout << "To quieto ainda: " << count << " militante(s)\n";
}