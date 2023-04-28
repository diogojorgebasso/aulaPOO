#ifndef ANGULO_H
#define ANGULO_H

#include <iostream>
using namespace std;

class Angulo
{
	private:
		double grau;

	public:
		Angulo(double=0);
		~Angulo() {}

		// trigonometricas
		double radiano();
		double seno();
		double cosseno();
		double tangente();
		double complementar();

		// aritmeticas
		Angulo operator+(Angulo&);
		Angulo operator-(Angulo&);

		// entrada e saida
		friend ostream& operator<<(ostream&, const Angulo&);
		friend istream& operator>>(istream&, Angulo&);

		// conversao de tipo
		explicit operator double() const;
};

#endif
