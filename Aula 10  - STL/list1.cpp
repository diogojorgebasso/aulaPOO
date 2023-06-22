#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    list<string> nomes;
    list<string>::iterator it;

    // Inserindo dados(back, front, random)
    nomes.push_back("Joao");
    nomes.push_back("Paulo");
    nomes.push_front("Andre");

    it = nomes.begin();
    nomes.insert(it, "Edmilson");
    ++it; ++it;
    nomes.insert(it, "Andre");

    cout << "Lista de Nomes: " << endl;
    for(it = nomes.begin(); it != nomes.end(); ++it)
        cout << *it << endl;

    // Removendo todos os Andres
    nomes.remove("Andre");
    cout << "\nLista de Nomes: " << endl;
    for(it = nomes.begin(); it != nomes.end(); ++it)
        cout << *it << endl;
}

