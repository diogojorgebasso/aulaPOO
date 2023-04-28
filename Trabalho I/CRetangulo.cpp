#include "CRetangulo.h"

using namespace std;

CRetangulo::CRetangulo(int comp, int alt)
{
    cout << "construindo a classe...";
    set_comprimento(comp);
    set_altura(alt);
}

// Get
int CRetangulo::get_comprimento()
{
    return comprimento;
}

int CRetangulo::get_altura()
{
    return altura;
}

// Business Logic
int CRetangulo::validar_valor(int valor)
{

    if (valor < 1 || valor > 20)
    {
        throw invalid_argument("Valor fora da faixa permitida (1 a 20)");
    }
    return valor;
}

bool CRetangulo::isQuadrado()
{
    return comprimento == altura;
}

// Set
void CRetangulo::set_comprimento(int c)
{
    comprimento = validar_valor(c);
}

void CRetangulo::set_altura(int a)
{
    altura = validar_valor(a);
}

// Read
void CRetangulo::leitura()
{
    int c, a;

    cout << "Digite um comprimento: ";
    cin >> c;
    while (c < 1 || c > 20)
    {
        cout << "Valor fora da faixa permitida (1 a 20)";
        cin >> c;
    }
    cout << "Digite uma altura: ";
    cin >> a;
    while (a < 1 || a > 20)
    {
        cout << "Valor fora da faixa permitida (1 a 20)";
        cin >> a;
    }
    set_altura(a);
    set_comprimento(c);
}

// Math
int CRetangulo::area()
{
    return comprimento * altura;
}

int CRetangulo::perimetro()
{
    return 2 * (comprimento + altura);
}

// Print
void CRetangulo::imprime()
{
    cout << "altura: " << altura << " comprimento: " << comprimento << endl;
}

void CRetangulo::imprime_rectangle(char b, char p)
{
    int lin = altura;
    int col = comprimento;
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || j == 0 || i == lin - 1 || j == col - 1)
                cout << b;
            else
                cout << p;
        }
        cout << endl;
    }
}

int main()
{
    cout << "Programa iniciado" << endl;
    CRetangulo r1;        // cria um retângulo com comprimento 1 e altura 1
    CRetangulo r2(5, 10); // cria um retângulo com comprimento 5 e altura 10

    CRetangulo r3[5];

    r1.imprime();
    cout
            << "Área = " << r1.area()
            << ", perímetro = " << r1.perimetro() << endl;
    r2.imprime();
    cout
            << "Área = " << r2.area()
            << ", perímetro = " << r2.perimetro() << endl;

    r1.set_comprimento(15);
    // r1.set_altura(25); // lança exceção, valor fora da faixa permitida

    cout << "Leitura dos dados do vetor...";
    for (int i = 0; i < 5; i++)
    {
        r3[i].leitura();
    }

    for (int i = 0; i < 5; i++)
    {
        r3[i].imprime();
    }

    cout << "Classe em ponteiro";
    CRetangulo *r4 = new CRetangulo();

    r4->leitura();
    cout << "Área: " << r4->area() << endl;
    cout << "Perímetro: " << r4->perimetro() << endl;
    cout << "É um quadrado? " << (r4->isQuadrado() ? "Sim" : "Não") << endl;
    delete r4; // não esquecer

    return 0;
}