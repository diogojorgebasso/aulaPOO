#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Entre com seu nome: ";

	string nome;
	cin >> nome;

	cout << "Agora entre com seu sobrenome: ";
	string sobre;
	cin >> sobre;

	// concatenando no novo
	string nome_completo = nome + " " + sobre;
	cout << "Nome completo: " << nome_completo << "\n";

	// concatenando no primeiro
	nome += " ";
	nome += sobre;
	cout << "Nome completo: " << nome << "\n";

	// comparando com um literal
	if(nome == "Joao Paulo")
		cout << "Ta tranquilo. Ta favoravel. \n";
}