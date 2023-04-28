#include "date.h"
#include <iostream>

using namespace std;

// construtor
Date::Date(int dd, int mm, int yy) : d{dd}, m{mm}, y{yy}
{
	count = 0; // valor não recebido como parãmetro
}

// imprime a data e conta a quantidade de chamadas
void Date::print() const
{
	count++;
	cout << d << "/" << m << "/" << y;
}

Date& Date::set_day(int value)
{
	// Esta primeira utilização do ponteiro de auto-referência
	// é supérflua, ou seja, poderia ser descartada
	this->d = value; // d = value; faria a mesma coisa (implicitamente)

	// this é um ponteiro para o próprio objeto. 
	// Como devolvemos uma referência, precisamos retornar o valor (*)
	return *this;
}

Date& Date::set_month(int value)
{
	this->m = value;
	return *this;
}

Date& Date::set_year(int value) 
{
	this->y = value;
	return *this;
}