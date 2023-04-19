#include "posicao.h"
#include <iostream>

using namespace std;

Posicao::Posicao(int xx, int yy) : x{xx}, y{yy} {}

Posicao& Posicao::move_to(int xx, int yy)
{
	x += xx;
	y = yy;
	return *this;
}

void Posicao::imprime() {
	cout << "(" << x << ", " << y << ")";
}