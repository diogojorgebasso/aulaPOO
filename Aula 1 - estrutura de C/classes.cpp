#include <iostream>

using namespace std;

class Tempo {

	// membros públicos (podem ser acessados de fora da classe)
	// proveem mecanismos para realização de qualquer operação
	// interessante para nosso tipo
	public:
		Tempo();
		void setTempo(int, int, int);
		void imprime();

	// membros privados (não podem ser acessados fora da classe)
	private:
		int hora, minuto, segundo;
};

// Construtor da classe Tempo
Tempo::Tempo() {hora = minuto = segundo = 0; }

// Veja o operador de escopo ::, definindo o método setTempo de Tempo.
void Tempo::setTempo(int h, int m, int s = 0) 
{
	hora = h;
	minuto = m;
	segundo = s;
}

void Tempo::imprime()
{
	cout << hora << ":" << minuto << ":" << segundo;
}

int main()
{
	Tempo t;

	// acesso a membros através de operador . ou ->
	t.setTempo(10,20);
	t.imprime();
}