#include <cmath>
#include <iostream>

#define MAXN 100000

using namespace std;

int fat(int n) { return (n < 2) ? 1 : n * fat(n - 1); }

int gcd(int a, int b) { return b ? gcd(b, a % b) : abs(a); }

int soma(int x) { return (x == 1) ? 1 : x + soma(x - 1); }
