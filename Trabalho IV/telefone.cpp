/**************************************************************************
 * (C) Copyright 1992-2010 by Deitel & Associates, Inc. and *
 * Pearson Education, Inc. All Rights Reserved. *
 * *
 * DISCLAIMER: The authors and publisher of this book have used their *
 * best efforts in preparing the book. These efforts include the *
 * development, research, and testing of the theories and programs *
 * to determine their effectiveness. The authors and publisher make *
 * no warranty of any kind, expressed or implied, with regard to these *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or *
 * consequential damages in connection with, or arising out of, the *
 * furnishing, performance, or use of these programs. *
 *************************************************************************/

#include <iomanip>
#include "telefone.h"

using namespace std;

// cout << somePhoneNumber;
ostream &operator<<(ostream &output, const PhoneNumber &number)
{
  output << "(" << number.areaCode << ") "
         << number.extraNine << " "
         << number.exchange << "-" << number.line;
  return output;
}

// cin >> somePhoneNumber;
istream &operator>>(istream &input, PhoneNumber &number)
{
  input.ignore();                       // skip (
  input >> setw(2) >> number.areaCode;  // input area code
  input.ignore(2);                      // skip ) and space
  input >> setw(1) >> number.extraNine; // input extra nine
  input.ignore(1);                      // skip space
  input >> setw(4) >> number.exchange;  // input exchange
  input.ignore();                       // skip dash (-)
  input >> setw(4) >> number.line;      // input line
  return input;                         // enables cin >> a >> b >> c;
}

int main()
{
  PhoneNumber phone;
  cout << "Digite o numero de telefone na forma (35) 9 9187-7910:" << endl;
  cin >> phone;
  cout << "O numero de telfone eh: ";
  cout << phone << endl;
} // end main