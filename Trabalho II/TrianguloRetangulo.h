#ifndef TRIANGULORETANGULO_H
#define TRIANGULORETANGULO_H

class TrianguloRetangulo
{
private:
    int a, b, c;

public:
    TrianguloRetangulo(int ladoA, int ladoB, int ladoC);
    ~TrianguloRetangulo();
    void print200();
    bool isPossible(int ladoA, int ladoB, int ladoC);
};

#endif