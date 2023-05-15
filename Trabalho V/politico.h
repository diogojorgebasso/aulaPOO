#ifndef POLITICO_H
#define POLITICO_H

#include <string>
#include <iostream>

using namespace std;

int menu();
class Politico
{
protected:
  string nome, partido, numero;

public:
  Politico(string n = "", string p = "", string nu = "") : nome{n},
                                                           partido{p}, numero{nu}
  {
    cout << "Construindo Politico!" << endl;
  }

  virtual void read();
  virtual void imprime();

  friend ostream &operator<<(ostream &, Politico &);
  friend istream &operator>>(istream &, Politico &);
  virtual ~Politico()
  {
    cout << "Destroi Politico!" << endl
         << endl;
  }
};

class Presidente : public Politico
{
protected:
  string pais;

public:
  Presidente(string nome = "", string partido = "", string numero = "",
             string p = "") : Politico{nome, partido, numero}, pais{p}
  {
    cout << "Construindo Presidente!" << endl;
  }
  void read();
  void imprime();
  ~Presidente() { cout << "Destroi Presidente!" << endl; }
};

class Governador : public Presidente
{
protected:
  string estado;

public:
  Governador(string nome = "", string partido = "", string numero = "",
             string pais = "", string e = "") : Presidente{nome, partido, numero, pais},
                                                estado{e}
  {
    cout << "Construindo Governador!" << endl;
  }
  void read();
  void imprime();
  ~Governador() { cout << "Destroi Governador!" << endl; }
};

class Prefeito : public Governador
{
protected:
  string cidade;

public:
  Prefeito(string nome = "", string partido = "", string numero = "",
           string pais = "", string estado = "", string c = "") : Governador{nome, partido, numero, pais, estado}, cidade{c}
  {
    cout << "Construindo Prefeito!" << endl
         << endl;
  }
  void read();
  void imprime();
  ~Prefeito()
  {
    cout << "Destroi Prefeito!" << endl;
  }
};
#endif