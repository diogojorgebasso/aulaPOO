#include "angulo.h"
#include <cmath>

#define PI 3.141592

Angulo::Angulo(double g)
{
    grau = fmod(g, 360);
}

double Angulo::radiano()
{
    return grau * PI / 180;
}

double Angulo::seno()
{
    return sin(radiano());
}

double Angulo::cosseno()
{
    return cos(radiano());
}

double Angulo::tangente()
{
    return tan(radiano());
}

double Angulo::complementar()
{
    if (grau > 90)
        return -1;
    return (90 - grau);
}

Angulo Angulo::operator+(Angulo &a)
{
    return Angulo{fmod((grau + a.grau), 360)};
}

Angulo Angulo::operator-(Angulo &a)
{
    return Angulo{fmod((grau - a.grau), 360)};
}

ostream &operator<<(ostream &saida, const Angulo &a)
{
    saida << a.grau;
    return saida;
}

istream &operator>>(istream &entrada, Angulo &a)
{
    entrada >> a.grau;
    return entrada;
}

// conversao de tipo
Angulo::operator double() const
{
    return grau;
}

int main()
{
    Angulo a1{45};
    Angulo a2;
    Angulo a3{170};
    Angulo a4{180};
    Angulo a5{390};

    cout << "a5 = " << a5 << "\n";
    cout << "a2 = " << a2 << "\n";
    cout << "Entre com a2: ";
    cin >> a2;
    cout << "a2 = " << a2 << "\n";

    cout << a2 << " graus = " << a2.radiano() << " radianos";
    cout << "sen(" << a2 << ") = " << a2.seno() << "\n";
    cout << "cos(" << a2 << ") = " << a2.cosseno() << "\n";
    cout << "tan(" << a2 << ") = " << a2.tangente() << "\n";
    cout << "complemente de " << a2 << " = " << a2.complementar() << "\n";

    double difference = (double)(a4 - a3);
    cout << a1 << " + " << a3 << " = " << a1 + a3 << "\n";
    cout << a4 << " - " << a3 << " = " << difference << "\n";
}