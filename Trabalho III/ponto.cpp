#include <iostream>

using namespace std;

class PontoCarteseano
{
private:
    float x;
    float y;

public:
    PontoCarteseano(float x, float y) : x(x), y(y) {};
    PontoCarteseano() : x(0), y(0) {};
    float getX() const {
        return x;
    }
    float getY() const {
        return y;
    }
    void setX(float x) {
        this->x = x;
    }
    void setY(float y) {
        this->y = y;
    }
    friend istream &operator>>(istream &is, PontoCarteseano &p)
    {
        is >> p.x >> p.y;
        return is;
    }
    friend ostream &operator<<(ostream &is, const PontoCarteseano &p)
    {
        is << "(" << p.x << ", " << p.y << ")";
        return is;
    }
    PontoCarteseano &operator++()
    {
        x++;
        y++;
        return *this;
    }
    PontoCarteseano operator++(int)
    {
        PontoCarteseano tmp(*this);
        ++(*this);
        return tmp;
    }
};

int main(void)
{
    PontoCarteseano p1;
    PontoCarteseano p2;
    cin >> p1 >> p2;
    cout << p1 << endl;
    cout << p2 << endl;

    cout << "pre incremento" << endl;
    ++p1;
    cout << "P1" << p1 << endl;
    ++p2;
    cout << p2 << endl;
    cout << "pós-incremento" << endl;
    p1++;
    p2++;
    cout << p1 << p2 << endl;
    return 0;
}