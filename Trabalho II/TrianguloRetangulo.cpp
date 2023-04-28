#include "TrianguloRetangulo.h"
#include <iostream>

using namespace std;

TrianguloRetangulo::TrianguloRetangulo(int ladoA, int ladoB, int ladoC) {
  a = ladoA;
  b = ladoB;
  c = ladoC;
};

TrianguloRetangulo::~TrianguloRetangulo(){};

bool TrianguloRetangulo::isPossible(int ladoA, int ladoB, int ladoC) {
  return (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB &&
          ladoB + ladoC > ladoA);
}

void TrianguloRetangulo::print200() {
  int contador = 0;
  for (int i = 1; i <= 200; i++) {
    for (int j = 1; j <= 200; j++) {
      for (int k = 1; k <= 200; k++) {
        if (isPossible(i, j, k)) {
          if (i * i + j * j == k * k) {
            cout << "Triangulo " << ++contador << ": " << i << ", " << j << ", "
                 << k << endl;
          }
        }
      }
    }
  }
}

int main(void) {
  TrianguloRetangulo t1(2, 3, 4);

  t1.print200();
  return 0;
}
