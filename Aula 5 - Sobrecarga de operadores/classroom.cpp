#include "classroom.h"
#include <iostream>

using namespace std;

int main()
{
    Classroom c1{100};
    Classroom c2{80};

    if (c1 < c2)
        cout << "c1(100) < c2(80)";
    if (c1 > c2)
        cout << "c1(100) > c2(80)";
}
