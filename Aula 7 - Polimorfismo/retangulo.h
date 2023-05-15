#ifndef RETANGULO_H
#define RETANGULO_H

#include <iostream>
using namespace std;

class Retangulo : public Forma
{
private:
	double l1, l2;

public:
	Retangulo(double, double, double, double);
	~Retangulo(){};

	// sobrepondo funções virtuais da classe base
	void imprime_dados() const;
	double area() const;
	double perimetro() const;
};

#endif

Retangulo::Retangulo(double xx, double yy, double v, double h)
		: Forma{xx, yy}, l1{v}, l2{h}
{
}

// realiza nova implementação, específica para retangulos
double Retangulo::area() const
{
	return l1 * l2;
}

// chama função base, mas complementa.
void Retangulo::imprime_dados() const
{
	cout << "Origem: (" << x << "," << y << ")"
			 << "\n";
	cout << "Medidas dos lados: " << l1 << " e " << l2;
	cout << "\nArea: " << area() << "\n";
}

double Retangulo::perimetro() const
{
	return 2 * l1 + 2 * l2;
}