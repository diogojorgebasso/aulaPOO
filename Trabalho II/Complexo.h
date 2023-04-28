#ifndef COMPLEXO_H
#define COMPLEXO_H
class Complexo {
private:
  double real, imaginario;
  static int numeroInstancias;

public:
  Complexo();                   // without parameters
  Complexo(double r, double i); // with parameters
  double getReal() const;
  double getImag() const;
  void setReal(double r);
  void setImag(double i);
  Complexo sumComplexo(Complexo c) const;
  Complexo subtractComplexo(Complexo c) const;
  Complexo multiplyComplexo(Complexo c) const;
  Complexo divideComplexo(Complexo c) const;
  double moduleComplexo() const;
  void imprimir();
  ~Complexo();
  static int getNumInstancias();
};
#endif // COMPLEXO_H
