#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // Cria estrutura de dados e iterador (para precorre-la)
    vector<int> idades;
    vector<int>::iterator it;

    // insere dados
    idades.push_back(20);
    idades.push_back(17);
    idades.push_back(21);

    // imprime desordenado
    printf("Vetor Desordenado: ");
    for(it = idades.begin(); it != idades.end(); ++it)
    {
        printf("%d ", *it);
    }

    // ordena vetor
    sort(idades.begin(), idades.end());
    printf("\nVetor Ordenado: ");
    for(it = idades.begin(); it != idades.end(); ++it)
    {
        printf("%d ", *it);
    }

    return 0;
}

