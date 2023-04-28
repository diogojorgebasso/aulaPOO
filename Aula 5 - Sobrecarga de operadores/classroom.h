#ifndef CLASSROOM_H
#define CLASSROOM_H

#include <string>
using namespace std;

class Classroom {
private:
  string *names;
  int number_students;

public:
  Classroom(int s) : number_students{s} { names = new string[s]; }

  ~Classroom() { delete[] names; }

  bool operator<(Classroom &c) { return (number_students < c.number_students); }

  bool operator>(Classroom &c) {
    if (number_students > c.number_students)
      return true;
    return false;
  }
};

#endif