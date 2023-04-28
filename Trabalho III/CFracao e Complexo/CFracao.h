#ifndef ID_CFRACAO
#define ID_CFRACAO
#include <iostream>
using namespace std;

class CFracao
{
public:
    // Construtor sem parametros inline
    CFracao(void) : m_numerador(1), m_denominador(1) {}

    CFracao(int numerador, int denominador)
    {
        if (denominador == 0)
        {
            throw std::invalid_argument("Denominador não pode ser zero!");
        }

        m_numerador = numerador;
        m_denominador = denominador;
    }
    CFracao(const CFracao &f) // Construtor de copia
    {
        m_numerador = f.m_numerador;
        m_denominador = f.m_denominador;
    }
    ~CFracao() {};

    int getNumerador(void) const {
        return m_numerador;
    }
    int getDenominador(void) const {
        return m_denominador;
    }
    void setNumerador(int Num) {
        m_numerador = Num;
    }
    void setDenominador(int Denom) {
        m_denominador = Denom;
    }
    // métodos aritiméticos
    //
    CFracao operator+(const CFracao &_Fracao) const;
    CFracao operator-(const CFracao &_Fracao) const;
    CFracao operator*(const CFracao &_Fracao) const;
    CFracao operator/(const CFracao &_Fracao) const;
    bool operator>(const CFracao &_Fracao) const;
    bool operator<(const CFracao &_Fracao) const;
    bool operator==(const CFracao &_Fracao) const;
    friend istream &operator>>(istream &is, CFracao &f);
    friend ostream &operator<<(ostream &os, const CFracao &f);

private:
    CFracao Reduzida(void);
    int m_numerador;
    int m_denominador;
};
#endif // ID_CFRACAO