#include "PoligonoRegular.h"

// Constructor
PoligonoRegular::PoligonoRegular(int lados, double comprimento) {
  setLados(lados);
  setComprimento(comprimento);
}

// Get
int PoligonoRegular::getLados() const { return lados_; }

double PoligonoRegular::getComprimento() const { return comprimento_; }

// Set
void PoligonoRegular::setLados(int lados) {
  if (lados < 3) {
    cerr << "Número de lados inválido." << endl;
    lados_ = 3;
  } else {
    lados_ = lados;
  }
}

void PoligonoRegular::setComprimento(double comprimento) {
  if (comprimento <= 0) {
    cerr << "Comprimento inválido." << endl;
    comprimento_ = 1;
  } else {
    comprimento_ = comprimento;
  }
}

// Area and perimeter calculation methods
double PoligonoRegular::calcularArea() const {
  double area = (lados_ * comprimento_ * comprimento_ * tan(M_PI / lados_)) / 4;
  return area;
}

double PoligonoRegular::calcularPerimetro() const {
  double perimetro = lados_ * comprimento_;
  return perimetro;
}

// Method to print the name of the polygon based on its number of sides
void PoligonoRegular::imprimirNome() const {
  switch (lados_) {
  case 3:
    cout << "Triângulo" << endl;
    break;
  case 4:
    cout << "Quadrado" << endl;
    break;
  case 5:
    cout << "Pentágono" << endl;
    break;
  case 6:
    cout << "Hexágono" << endl;
    break;
  case 7:
    cout << "Heptágono" << endl;
    break;
  case 8:
    cout << "Octógono" << endl;
    break;
  case 9:
    cout << "Eneágono" << endl;
    break;
  default:
    cout << "Polígono de " << lados_ << " lados" << endl;
    break;
  }
}

int main(void) {

  PoligonoRegular p1;

  int lados, comprimento;

  cout << "Quantos lados tem o poligono?" << endl;
  cin >> lados;
  cout << "Qual o comprimento de cada lado? (Consiedere o poligono regular)"
       << endl;
  cin >> comprimento;
  p1.setComprimento(comprimento);
  p1.setLados(lados);

  cout << "area: " << p1.calcularArea() << endl;
  return 0;
}