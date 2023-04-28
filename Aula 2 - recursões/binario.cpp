#include <iostream>
#include <cmath>

using namespace std;

int binario(void)
{
    int bi;
    cout << "Insira um valor em binário: " << endl;
    cin >> bi;
    int sobra, novoValor = 0;

    for (int j = 0; j < 6; j++)
    {
        sobra = bi % 10; // bi - ((bi / 10)*10);
        bi /= 10;
        novoValor += sobra * pow(2, j);
    }
    cout << "Valor em Decimal: " << novoValor << endl;
    return 0;
}
