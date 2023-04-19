#include <iostream>
#include <string>

using namespace std;

void f()
{
	cout << 10; // coloque o literal 10 no stream padrão de saída

	int i = 10;
	cout << i; // coloque o conteúdo da variável i na saída

	// caso ocorra algum erro, podemos escrever no stream de erros
	cerr << "Ocorreu um erro no seu programa\n\n";

	int idade {30};
	cout << "O professor tem " << idade << " anos\n";
}

void g()
{
	// entrando com um unico numero
	cout << "Entre com um inteiro: ";
	int i = 0;
	cin >> i;

	// entrando com dois numeros, separados por espaço ou enter
	cout << "Entre com dois doubles: ";
	double a = 0.0, b = 0.0;
	cin >> a >> b;
}

void h()
{
	cout << "Entre com seu nome: ";
	string str;
	getline(cin, str); // argumentos: stream de saída cin e a string a armazenar valor
	cout << "Oi, " << str << "!\n";
}

int main()
{
	int vetor[] {1, 2, 3, 4, 5, 6, 7, 8, 9};

	//f();
	//g();
	h();

	cout << "Percorrendo com for tradicional: ";
	for(int i = 0; i < 9; i++)
		cout << vetor[i] << " ";

	cout << endl;

	cout << "Percorrendo com range for: ";
	for(int x: vetor) // ou ainda for(auto x: vetor)
	{
		cout << x << " ";
	}
}

