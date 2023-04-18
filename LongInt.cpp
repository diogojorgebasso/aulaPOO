#include "longint.h"

// construtor padrão
LongInt::LongInt()
{
  for (int i = 0; i < 30; i++)
  {
    digit[i] = 0;
  }
}

void LongInt::read()
{
  // input como string
  string inputString;
  cin >> inputString;

  int numDigits = inputString.length();
  int digitIndex = 0;
  for (int i = numDigits; i > 0 && digitIndex < MAX_DIGITS; i--)
  {
    char c = inputString[i];
    digit[digitIndex] = c - '0';
    digitIndex++;
  }
}

LongInt LongInt::sumInt(LongInt vetor) const
{
  LongInt resultado;
  int carry = 0;
  for (int i = 0; i < MAX_DIGITS; i++)
  {
    int sum = digit[i] + vetor.digit[i] + carry;
    resultado.digit[i] = sum % 10;
    carry = sum / 10;
  }
  return resultado;
}

LongInt LongInt::minusInt(LongInt vetor) const
{
  LongInt result;
  int borrow = 0;
  for (int i = 0; i < MAX_DIGITS; i++)
  {
    int diff = digit[i] - vetor.digit[i] - borrow;
    if (diff < 0)
    {
      diff += 10;
      borrow = 1;
    }
    else
    {
      borrow = 0;
    }
    result.digit[i] = diff;
  }
  return result;
}

void LongInt::printInt() const
{
  int i = MAX_DIGITS - 1;
  while (i > 0 && digit[i] == 0)
  {
    i--;
  }
  // imprime os dígitos do número ao contrário
  while (i >= 0)
  {
    cout << digit[i];
    i--;
  }
  cout << endl;
}

LongInt::~LongInt() {}

int main(void)
{
  LongInt a, b, c;
  a.read();
  b.read();

  c = a.minusInt(b);
  c.printInt();
  return 0;
}