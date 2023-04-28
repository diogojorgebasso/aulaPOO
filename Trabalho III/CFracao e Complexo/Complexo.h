#ifndef COMPLEXO_H
#define COMPLEXO_H
using namespace std;
class Complexo {
private:
  double real, imaginario;
  static int numeroInstancias;

public:
  Complexo();                   // without parameters
  Complexo(double r, double i); // with parameters
  double moduleComplexo() const;
  friend istream &operator>>(istream &is, Complexo &c);
  friend ostream &operator<<(ostream &os, const Complexo &c);
  Complexo operator+(const Complexo &other) const;
  Complexo operator-(const Complexo &other) const;
  Complexo operator*(const Complexo &other) const;
  Complexo operator/(const Complexo &other) const;
  ~Complexo();
  static int getNumInstancias();
};
#endif // COMPLEXO_H
