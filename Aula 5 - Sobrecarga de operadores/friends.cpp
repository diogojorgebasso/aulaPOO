#include <iostream> 
using namespace std;

// declaração prévia de classe List é necessária
class List;

class List_iterator {
  friend class List;
  // ...
  public:
    int* next(List&); // precisa ser public, para que List tenha acesso
    int print(List&);
};


class List {
  friend class List_iterator;
  int x;
  // concede acesso aos membros de List para next()
  friend int* List_iterator::next(List&);
  //...
};

int List_iterator::print(List& l)
{
   l.x = 0;
}


/*
class List {
  // concede acesso dos membros de List para 
  // toda a classe List_iterator
  friend class List_iterator;
};
*/

class Box
{
  private:
    double width;
  public:
    friend void print_width(Box box);
    void set_width(double wid);
};

// Definição de uma função membro
void Box::set_width(double wid)
{
    width = wid;
}

// Veja: print_width() não é uma função membro da classe
void print_width(Box box)
{
  // Uma vez que print_wodth é uma amiga (friend) de box, ela
  // pode acessar qualquer membro da classe diretamente
   cout << "Width of box : " << box.width <<endl;
}
 
// Função principal
int main( )
{
   Box box; 
   box.set_width(10.0); // utiliza função membro=
   print_width( box ); // imprime com função friend
   return 0;
}