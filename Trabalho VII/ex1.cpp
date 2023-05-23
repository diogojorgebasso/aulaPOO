#include <iostream>

using namespace std;

#define MAX 5

class BigInt
{
private:
    int num[31];
    int len;

    void inicializar()
    {
        for (int i = 0; i < 31; i++)
            num[i] = 0;
    }

public:
    BigInt()
    {
        inicializar();
    }

    friend istream& operator>>(istream&, BigInt&);
    friend ostream& operator<<(ostream&, const BigInt&);
    BigInt& operator+=(const BigInt& numeroGrande);
    BigInt& operator-=(const BigInt& other);
    bool isPalindrome();

    ~BigInt() {}
};

istream& operator>>(istream& input, BigInt& numero)
{
    string a;
    input >> a;
    numero.len = a.length();
    for (int i = 0; i < numero.len; i++)
    {
        numero.num[i] = a[numero.len - i - 1] - '0';
    }
    return input;
}

ostream& operator<<(ostream& output, const BigInt& numero)
{
    for (int i = numero.len - 1; i >= 0; i--)
    {
        output << numero.num[i];
    }
    return output;
}

BigInt& BigInt::operator+=(const BigInt& numeroGrande)
{
    int carry = 0;
    int maxLen = max(len, numeroGrande.len);
    for (int i = 0; i < maxLen; i++)
    {
        int sum = num[i] + numeroGrande.num[i] + carry;
        num[i] = sum % 10;
        carry = sum / 10;
    }
    // Se o carry chegar no bit mais significativo
    if (carry > 0 && len < maxLen)
    {
        num[maxLen] = carry;
        len = maxLen + 1;
    }
    else
    {
        len = maxLen;
    }
    return *this;
}

BigInt& BigInt::operator-=(const BigInt& other)
{
    int borrow = 0;

    for (int i = 0; i < len; i++)
    {
        int diff = num[i] - other.num[i] - borrow;

        if (diff < 0)
        {
            diff += 10;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }

        num[i] = diff;
    }

    // Remove leading zeros
    while (len > 1 && num[len - 1] == 0)
    {
        len--;
    }

    return *this;
}

bool BigInt::isPalindrome()
{
    string S = "";
    for (int j = len - 1; j >= 0; j--)
    {
        S += to_string(num[j]);
    }

    string P = S;
    string temp = S;
    for (int i = len - 1; i >= 0; i--)
    {
        P[i] = temp[len - 1 - i];
    }
    return S == P;
}

int main(void)
{
    BigInt entry[5];
    for (int i = 0; i < MAX; i++)
    {
        cout << "Digite o " << i + 1 << "-esimo bigint: ";
        cin >> entry[i];
    }

    for (int i = 0; i < MAX; i++)
    {
        cout << "Para o " << i + 1 << "-esimo: " << endl;
        if (entry[i].isPalindrome())
        {
            cout << "O numero eh palindromo" << endl;
        }
        else
        {
            cout << "O numero nao eh palindromo" << endl;
        }
    }

    cout << "Checar a sobrecarga de operadores" << endl;
    BigInt temp;
    cin >> temp;
    temp += entry[0];
    cout << "Resultado da soma: " << temp << endl;
    temp -= entry[1];
    cout << "Resultado da subtracao: " << temp << endl;


    return 0;
}
