#include <iostream>

using namespace std;

class Data {
private:
  int dia;
  int mes;
  int ano;

public:
  Data() : dia(1), mes(1), ano(1970){};
  Data(int d, int m, int a) : dia(d), mes(m), ano(a){};
  friend istream &operator>>(istream &is, Data &d) {
    is >> d.dia >> d.mes >> d.ano;
    return is;
  }
  friend ostream &operator<<(ostream &out, const Data &d) {
    out << d.dia << " de ";

    switch (d.mes) {
    case 1:
      out << "janeiro";
      break;
    case 2:
      out << "fevereiro";
      break;
    case 3:
      out << "março";
      break;
    case 4:
      out << "abril";
      break;
    case 5:
      out << "maio";
      break;
    case 6:
      out << "junho";
      break;
    case 7:
      out << "julho";
      break;
    case 8:
      out << "agosto";
      break;
    case 9:
      out << "setembro";
      break;
    case 10:
      out << "outubro";
      break;
    case 11:
      out << "novembro";
      break;
    case 12:
      out << "dezembro";
      break;
    default:
      out << "mês inválido";
      break;
    }

    out << " de " << d.ano;
    return out;
  }

  Data &operator++() {
    // helper variables
    bool isMonthWith30Days =
        dia > 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11);
    bool isFebreruary = dia > 29 && mes == 2;
    bool isAnoBixeto = dia > 28 && mes == 2 &&
                       (ano % 4 == 0 || (ano % 100 != 0 && ano % 400 == 0));

    // increment a day
    dia++;
    if (dia > 31 || isMonthWith30Days || isFebreruary || isAnoBixeto) {
      dia = 1;
      if (++mes > 12) {
        mes = 1;
        ++ano;
      }
    }
    return *this;
  };

  Data operator++(int) {
    Data tmp(*this);
    ++(*this);
    return tmp;
  }
};

int main(void) {
  Data d1{31, 12, 1999};

  d1++;
  cout << d1 << endl;

  Data d2;
  cin >> d2;
  cout << d2 << endl;
  return 0;
}
