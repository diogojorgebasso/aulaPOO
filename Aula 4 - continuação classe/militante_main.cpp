#include "Militante.cpp"
#include "circle.h"
#include <iostream>

using namespace std;

int main()
{
	Militante m1 {"James"};
	m1.grita();

	Militante m2 {"Jake"};
	m2.grita();	

	Militante m3 {"Jared"};
	m3.grita();

	// Acesso através do operador de escopo (::)
	// Função estática é de escopo de classe, e não de instância
	cout << "Area de um circulo de raio = 10: ";
	cout << Circle::circle_area(10) << "\n";
}