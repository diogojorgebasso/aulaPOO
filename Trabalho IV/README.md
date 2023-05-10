# 6 º Laboratório ECOP13A - Herança – 05 de maio 2023

## 1 Construa classes para representar uma _hierarquia_ Politico / Presidente / Governador / Prefeito

I. Acrescente uma função `Imprime()` em cada uma das classes.
II. No construtor de cada classe, acrescente mensagens de depuração para saber
por onde o programa está passando enquanto é executado.
III. Utilize as funções definidas nas classes bases dentro das classes derivadas.

## 2 Crie uma hierarquia de classes para representar a hierarquia Ponto/Circulo/Cilindro

Considere que o Cilindro é um Circulo com altura diferente de zero e que o Circulo _é um_ Ponto com raio diferente de zero.

Além dos construtores, métodos de acesso, operadores de leitura (>>) e impressão (<<), implemente as funções `area()` e
`volume()` para a dada hierarquia.

## 3 Método de Newton

Encontre pelo menos uma raiz real da equação $p(x)=a_0 +a_1x+...+a_nx^n /forall ( _n > 2_ )$, utilizando o método de Newton

Para encontrar uma raiz real de um polinômio, pode-se aplicar o método de Newton, que consiste em refinar uma aproximação inicial _x 0_ dessa
raiz através da expressão:

$$ X\_(n+1) = X_n - P(X_n)/P'(X_n)$$

Implemente na classe `Polinômio` as seguintes funções:
I. Dado um polinômio _p_ ( _x_ ), calcule e retorne a sua derivada _p_ '( _x_ ).
II. Dado um polinômio _p_ ( _x_ ), calcule seu valor em um ponto. Utilize essa função
para calcular _p_ ( _xn_ ) e _p_ '( _xn_ ) em cada iteração.
III. Dado um polinômio _p_ ( _x_ ), uma aproximação inicial _x 0_ e o número máximo _m_ de
iterações que devem ser executadas, calcule uma raiz real pelo método de
Newton, se ela existir.

## 4 Analise a classe de exemplo do Livro do Deitel

Ela representa o número de telefone formatado no modo internacional. Sua função é alterar essa classe com o formato utilizado no Brasil.

```h
// Fig. 11.3: PhoneNumber.h
#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>
using namespace std;

class PhoneNumber
{
friend ostream &operator<<( ostream &, const PhoneNumber & );
friend istream &operator>>( istream &, PhoneNumber & );
private:
string areaCode; // 3-digit area code
string exchange; // 3-digit exchange
string line; // 4-digit line
}; // end class PhoneNumber

#endif

/**\*\***\*\*\*\***\*\***\*\*\*\***\*\***\*\*\*\***\*\***\*\***\*\***\*\*\*\***\*\***\*\*\*\***\*\***\*\*\*\***\*\***

- (C) Copyright 1 992 - 2010 by Deitel & Associates, Inc. and \*
- Pearson Education, Inc. All Rights Reserved. \*
- -
- DISCLAIMER: The authors and publisher of this book have used their \*
- best efforts in preparing the book. These efforts include the \*
- development, research, and testing of the theories and programs \*
- to determine their effectiveness. The authors and publisher make \*
- no warranty of any kind, expressed or implied, with regard to these \*
- programs or to the documentation contained in these books. The authors \*
- and publisher shall not be liable in any event for incidental or \*
- consequential damages in connection with, or arising out of, the \*
- furnishing, performance, or use of these programs. \*
  **\*\***\*\*\*\***\*\***\*\*\*\***\*\***\*\*\*\***\*\***\***\*\***\*\*\*\***\*\***\*\*\*\***\*\***\*\*\*\***\*\***/

// Fig. 11.4: PhoneNumber.cpp
// Overloaded stream insertion and stream extraction operators
// for class PhoneNumber.
#include <iomanip>
#include "PhoneNumber.h"
using namespace std;

// overloaded stream insertion operator; cannot be
// a member function if we would like to invoke it with
// cout << somePhoneNumber;
ostream &operator<<( ostream &output, const PhoneNumber &number )
{
output << "(" << number.areaCode << ") "
<< number.exchange << "-" << number.line;
return output; // enables cout << a << b << c;
} // end function operator<<

// overloaded stream extraction operator; cannot be
// a member function if we would like to invoke it with
// cin >> somePhoneNumber;
istream &operator>>( istream &input, PhoneNumber &number )
{
input.ignore(); // skip (
input >> setw( 3 ) >> number.areaCode; // input area code
input.ignore( 2 ); // skip ) and space
input >> setw( 3 ) >> number.exchange; // input exchange
input.ignore(); // skip dash (-)
input >> setw( 4 ) >> number.line; // input line
return input; // enables cin >> a >> b >> c;
} // end function operator>>
```

```cpp
/**\*\***\*\*\*\***\*\***\*\*\*\***\*\***\*\*\*\***\*\***\*\***\*\***\*\*\*\***\*\***\*\*\*\***\*\***\*\*\*\***\*\***

- (C) Copyright 1992-2010 by Deitel & Associates, Inc. and \*
- Pearson Education, Inc. All Rights Reserved. \*
- -
- DISCLAIMER: The authors and publisher of this book have used their \*
- best efforts in preparing the book. These efforts include the \*

- development, research, and testing of the theories and programs \*
- to determine their effectiveness. The authors and publisher make \*
- no warranty of any kind, expressed or implied, with regard to these \*
- programs or to the documentation contained in these books. The authors \*
- and publisher shall not be liable in any event for incidental or \*
- consequential damages in connection with, or arising out of, the \*
- furnishing, performance, or use of these programs. \*
  **\*\***\*\*\*\***\*\***\*\*\*\***\*\***\*\*\*\***\*\***\***\*\***\*\*\*\***\*\***\*\*\*\***\*\***\*\*\*\***\*\***/

// Fig. 11.5: fig11_05.cpp
// Demonstrating class PhoneNumber's overloaded stream insertion
// and stream extraction operators.
#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main()
{
PhoneNumber phone; // create object phone

cout << "Enter phone number in the form (123) 456-7890:" << endl;

// cin >> phone invokes operator>> by implicitly issuing
// the global function call operator>>( cin, phone )
cin >> phone;

cout << "The phone number entered was: ";

// cout << phone invokes operator<< by implicitly issuing
// the global function call operator<<( cout, phone )
cout << phone << endl;
} // end main

/**\*\***\*\*\*\***\*\***\*\*\*\***\*\***\*\*\*\***\*\***\*\***\*\***\*\*\*\***\*\***\*\*\*\***\*\***\*\*\*\***\*\***

- (C) Copyright 1992-2010 by Deitel & Associates, Inc. and \*
- Pearson Education, Inc. All Rights Reserved. \*
- -
- DISCLAIMER: The authors and publisher of this book have used their \*
- best efforts in preparing the book. These efforts include the \*
- development, research, and testing of the theories and programs \*
- to determine their effectiveness. The authors and publisher make \*
- no warranty of any kind, expressed or implied, with regard to these \*
- programs or to the documentation contained in these books. The authors \*
- and publisher shall not be liable in any event for incidental or \*
- consequential damages in connection with, or arising out of, the \*
- furnishing, performance, or use of these programs. \*
  **\*\***\*\*\*\***\*\***\*\*\*\***\*\***\*\*\*\***\*\***\*\***\*\***\*\*\*\***\*\***\*\*\*\***\*\***\*\*\*\***\*\***/
```
