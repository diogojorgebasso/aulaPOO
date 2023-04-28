#include "point.h"

// operações do tipo Point + Point
Point Point::operator+(Point &p)
{
	int xx = x + p.x;
	int yy = y + p.y;
	return Point{xx, yy};
}

// operações do tipo Point + int
Point Point::operator+(int value)
{
	int xx = x + value;
	int yy = y + value;
	return Point{xx, yy};
}

// Função global: operações do tipo int + Point
Point operator+(int value, Point &p)
{
	int xx = p.x + value;
	int yy = p.y + value;
	return Point{xx, yy};
}

// operadores unários
bool Point::operator!() const
{
	if (x == 0 && y == 0)
		return true;
	return false;
}

Point &Point::operator++()
{
	x++;
	y++;
	return *this;
}

Point Point::operator++(int value)
{
	Point temp = *this;
	++(*this);
	return temp;
}

// operador unário friend
Point operator--(Point &p, int value)
{
	Point temp = p;
	--p;
	return temp;
}

// operador unário friend
Point &operator--(Point &p)
{
	p.x--;
	p.y--;
	return p;
}

int main()
{
	Point p1{20, 20};
	Point p2 = p1 + 10; // chama Point::operator+(int value)

	p1++;
	p2--;

	cout << "p1: (" << p1.get_x() << ", " << p1.get_y() << ")\n";
	cout << "p2: (" << p2.get_x() << ", " << p2.get_y() << ")\n";

	Point p3{0, 0};

	cout << "p1 esta com valor " << (!p1 ? "zero" : "nao-zero") << "\n";
	cout << "p3 esta com valor " << (!p3 ? "zero" : "nao-zero") << "\n";

	cout << "p1: (" << p1.get_x() << ", " << p1.get_y() << ")\n";
	cout << "p2: (" << p2.get_x() << ", " << p2.get_y() << ")\n";

	Point p3 = p1 + p2;
	cout << "p3: (" << p3.get_x() << ", " << p3.get_y() << ")\n";

	Point p4 = 10 + p1;
	cout << "p4: (" << p4.get_x() << ", " << p4.get_y() << ")\n";
}