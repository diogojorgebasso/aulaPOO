#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <iostream>
#include <string>
using namespace std;
class PhoneNumber
{
  friend ostream &operator<<(ostream &, const PhoneNumber &);
  friend istream &operator>>(istream &, PhoneNumber &);

private:
  string areaCode; // 2-digit area code
  string extraNine;
  string exchange; // 4-digit exchange
  string line;     // 4-digit line
};
#endif