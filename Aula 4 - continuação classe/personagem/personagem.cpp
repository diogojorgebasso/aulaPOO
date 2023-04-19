#include "personagem.h"
#include <iostream>

using namespace std;

Personagem::Personagem(string n, int f, int v, int x, int l)
	: nome {n}, forca{f}, velocidade{v}, xp{x}, nivel{l}
{
	vida = 100;
}

void Personagem::attack(Personagem& p)
{
	// Melhorem a dinamica!
	int potencia = (forca + velocidade)*nivel;
	p.defense(potencia);
}

int Personagem::defense(int p) {
	// Melhorem a dinamica!
	int dano = p - (velocidade*nivel);
	if(dano > 0)
		vida -= dano;
	if(vida < 0) vida = 0;
	return dano;
}

void Personagem::imprime_info()
{
	cout << nome << " (Nivel " << nivel << ")\n";
	cout << "Vida: " << vida << "\%\n";
	cout << "Posicao: ";
	pos.imprime();
	cout << "\n";
}

Personagem& Personagem::move(int x, int y)
{
	pos.move_to(x, y);
	return *this;
}

void Personagem::up_level(int l)
{
	xp += 10*l;
}