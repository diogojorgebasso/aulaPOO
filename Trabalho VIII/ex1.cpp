#include <iostream>
#include <stdexcept>
#include <vector>

class Polynomial
{
private:
  std::vector<double> coefficients;

public:
  Polynomial(const std::vector<double> &coeffs) : coefficients(coeffs) {}

  double &operator[](int index)
  {
    if (index < 0 || index >= coefficients.size())
    {
      throw std::out_of_range("Index out of range");
    }
    return coefficients[index];
  }
};

int main()
{
  std::vector<double> coeffs = {1.0, 2.0, 3.0}; // Exemplo de coeficientes
  Polynomial poly(coeffs);

  try
  {
    std::cout << poly[0] << std::endl; // Acesso válido
    std::cout << poly[1] << std::endl; // Acesso válido
    std::cout << poly[2] << std::endl; // Acesso válido
    std::cout << poly[3] << std::endl; // Lançará uma exceção
  }
  catch (const std::out_of_range &e)
  {
    std::cout << "Exceção: " << e.what() << std::endl;
  }

  return 0;
}