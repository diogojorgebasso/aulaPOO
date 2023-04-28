#ifndef LONGINT_H
#define LONGINT_H

#include <iostream>
using namespace std;

class LongInt
{
private:
    static const int MAX_DIGITS = 30;
    int digit[MAX_DIGITS];

public:
    LongInt();
    ~LongInt();
    void read();
    void printInt() const;
    LongInt sumInt(LongInt i) const;
    LongInt minusInt(LongInt i) const;
};

#endif // LONGINT_H