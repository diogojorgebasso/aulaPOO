#include <iostream>
#include <cmath>

using namespace std;
class PoligonoRegular
{
public:
    // Constructor
    PoligonoRegular(int lados = 0, double comprimento = 0);

    // Getter methods
    int getLados() const;
    double getComprimento() const;

    // Setter methods
    void setLados(int lados);
    void setComprimento(double comprimento);

    // Area and perimeter calculation methods
    double calcularArea() const;
    double calcularPerimetro() const;

    // Method to print the name of the polygon based on its number of sides
    void imprimirNome() const;

private:
    int lados_;
    double comprimento_;
};