#include <cmath>
#include <iostream>

using namespace std;

bool primo(int x) {
  if (x == 2)
    return true;

  if (x % 2 == 0)
    return false;

  for (int i = 3; i <= sqrt(x) + 1; i++) {
    if (x % i == 0)
      return false;
  }
  return true;
}

void primeiros_primos() {

  cout << "INICIO" << endl;
  cout << "2"
       << " ";

  int cnt = 0;
  for (int i = 3; i <= 1000; i++) {
    if (primo(i) == true) {
      cout << i << " ";
      cnt++;
    }
    if (cnt == 19)
      break;
  }

  cout << endl << "FIM" << endl;
}
