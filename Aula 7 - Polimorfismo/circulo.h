#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
using namespace std;

class Circulo : public Forma {
	private:
		double raio;
	public:
		Circulo(double, double, double);
		~Circulo() {}

		// implementam funções virtuais puras de Forma 
		// Precisam ter a mesma assinatura (inclusive const)
		//double area() const;
		void imprime_dados() const;
		double perimetro() const;
};

#endif

Circulo::Circulo(double xx, double yy, double r)
	: Forma{xx,yy}, raio{r} {}

/*double Circulo::area() const
{
	return 3.141592*raio*raio;
}*/

void Circulo::imprime_dados() const
{
	cout << "Origem: (" << x << "," << y << ")" << "\n";
	cout << "Raio: " << raio << "\n";
	cout << "Area: " << area() << "\n";
}

double Circulo::perimetro() const
{
	return 2*3.141592*raio;
}