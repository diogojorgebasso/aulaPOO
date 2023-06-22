#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<float> medidas;
    vector<float>::iterator it;

    // Imprimimos o tamanho do vetor (inicial)
    cout << "Tamanho: " << medidas.size() << "\n";
    if(medidas.empty()) // verifica se está vazio
        cout << "O vetor esta vazio!\n\n";

    // Insere valores no final do vector
    medidas.push_back(15.6);
    medidas.push_back(23.6);
    medidas.push_back(2.9);
    medidas.push_back(17.3);
    medidas.push_back(11.9);
    medidas.push_back(7.7);

    // Imprimimos o tamanho do vetor (final)
    cout << "Tamanho: " << medidas.size() << "\n";
	
    // Podemos acessar itens individualmente (com operator[] ou at())
    cout << "Segundo item: " << medidas[1] << "\n";
    cout << "Quinto item: " << medidas.at(4) << "\n";

    // Imprime vetor com iterador
    cout << "Elementos do vector: ";
    for(it = medidas.begin(); it < medidas.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // Podemos apagar itens (precisamos do iterador)
    medidas.erase(medidas.begin()); // apaga primeiro item
	// Apaga o terceiro item (pois o primeiro já foi removido)
    medidas.erase(medidas.begin() + 2); 

    // Imprime vetor com iterador
    cout << "Vetor resultante: ";
    for(it = medidas.begin(); it < medidas.end(); ++it)
        cout << *it << " ";
    cout << endl;
}
