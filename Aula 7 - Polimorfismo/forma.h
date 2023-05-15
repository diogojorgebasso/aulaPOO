#ifndef FORMA_H
#define FORMA_H

#include <iostream>
using namespace std;

class Forma
{
protected:
	double x, y;

public:
	Forma(double xx = 0, double yy = 0) : x{xx}, y{yy} {}
	virtual ~Forma() {}

	// Funções virtuais puras
	virtual void imprime_dados() const = 0;
	virtual double area() const = 0;
	virtual double perimetro() const = 0;
};

#endif
