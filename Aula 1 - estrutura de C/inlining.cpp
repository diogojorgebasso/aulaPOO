#include <iostream>

using namespace std;

inline double square(double d)
{
	return d*d;
}

inline int fatorial(int n)
{
	return (n<2 ? 1: n*fatorial(n-1));
}

double potencia(double base = 10, double expoente)
{
	double ans = 1;
	for(int i = 0; i < expoente; i++)
		ans *= base;
	return ans;
}

int main()
{
	cout << "Entre com um numero real: ";

	double real;
	cin >> real;

	cout << real << "^2 = " << potencia(real) << "\n";
	cout << real << "^2 = " << real*real << "\n"; // equivalente
}