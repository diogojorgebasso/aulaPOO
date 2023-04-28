#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <string>
using namespace std;

class Point {
private:
  int x, y;

public:
  Point(int xx = 0, int yy = 0) : x{xx}, y{yy} {}
  ~Point() {}
  explicit operator int(); // somente permite conversões explicitas
  // Repare que não é necessário especificar o tipo de retorno
  // O tipo de retorno está implícito.

  // faz a comparação utiizando uma função membro
  bool operator==(Point &);
  // faz a comparação com função friend
  friend bool operator!=(Point &, Point &);

  friend ostream &operator<<(ostream &, const Point &);
  friend istream &operator>>(istream &, Point &);

  int get_x() { return x; }
  int get_y() { return y; }

  // primeiro operando é do tipo Point
  Point operator+(Point &);
  Point operator+(int);

  // Primeiro operando é do tipo int
  friend Point operator+(int, Point &);

  // operadores unários
  bool operator!() const;
  Point &operator++(); // pre-incremento

  Point operator++(int);                 // pos-incremento
  friend Point operator--(Point &, int); // pos-decremento

  // operador unário friend
  friend Point &operator--(Point &); // pre-decremento
};

#endif
