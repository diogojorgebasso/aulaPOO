#include <iostream>
#include <stdexcept>

using namespace std;

#ifndef TAREFA2_H
#define TAREFA2_H
class CRetangulo
{
public:
    CRetangulo(int comp = 1, int alt = 1); // construtor padrão
    int get_comprimento();
    int get_altura();
    void set_comprimento(int comp);
    void set_altura(int alt);
    int area();
    int perimetro();
    bool isQuadrado();
    ~CRetangulo()
    {
        cout << "Destruindo a classe.";
    };
    void imprime_rectangle(char b, char p);
    void imprime();
    void leitura();

private:
    int comprimento;
    int altura;
    int validar_valor(int v);
};
#endif // TAREFA2_H