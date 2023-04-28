#include <iostream>

int squared(int n)
{
	return n*n;
}

int main()
{
	std::cout << "Por favor, entre com um numero inteiro: ";

	int number = 0;
	std::cin >> number;

	std::cout << number << "^2 = " << squared(number) << std::endl;
}

