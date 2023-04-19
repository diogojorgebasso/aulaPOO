#include <iostream>

using namespace std;

// passagem por referência: não modifica valores
void write_on_screen(const string& name, const string& last)
{
	name = "Joao";
	cout << "Name: " << name << " " << last << "\n";
}

// passagem simples, por valor (copia de valores)
void duplicate_value(int a, int b, int c)
{
	a = a*2;
	b = b*2;
	c = c*2;
}

// passagem dos endereços das variáveis (sintaxe complexa)
void duplicate_pointer(int* a, int* b, int* c)
{
	*a = *a*2;
	*b = *b*2;
	*c = *c*2;
}

// passagem dos endereços das variáveis (sintaxe simples)
void duplicate_ref(int& a, int& b, int& c)
{
	a = a*2;
	b = b*2;
	c = c*2;
}

int main()
{
	/*
	const double pi = 3.14156;
	string nome {"Joao"};
	write_on_screen(nome, "Paulo");
*/
	int a{2}, b{10}, c{50};
	duplicate_value(a, b, c); 
	cout << "(valor) a, b, c = " << a << ", " << b << ", " << c << "\n";
	duplicate_pointer(&a, &b, &c);
	cout << "(pointer) a, b, c = " << a << ", " << b << ", " << c << "\n";
	duplicate_ref(a, b, c); // chamada simples
	cout << "(ref) a, b, c = " << a << ", " << b << ", " << c << "\n";
}