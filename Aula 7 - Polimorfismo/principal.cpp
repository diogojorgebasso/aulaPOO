#include <iostream>
#include "forma.h"
#include "retangulo.h"
#include "circulo.h"

using namespace std;

int main()
{
	// ponteiro para classe base apontando para objeto de classe base
	// Forma *ponto = new Forma{100,100};
	Forma *ret1 = new Retangulo{10, 10, 20, 30};
	Forma *ret2 = new Retangulo{0, 0, 2, 5};
	Forma *circ1 = new Circulo{10, 10, 10};
	Forma *circ2 = new Circulo{0, 1, 12};

	// Um vetor de ponteiros para formas pode receber ponteiros
	// para qualquer um dos derivados de forma, inclusive outros que
	// ainda estão para ser criados, como Triangulo.
	Forma *vetor_formas[4];
	vetor_formas[0] = circ1;
	vetor_formas[1] = ret1;
	vetor_formas[2] = circ2;
	vetor_formas[3] = ret2;
	//	vetor_formas[4] = ponto;

	// for imprime cada um dos dados à sua maneira
	for (int i = 0; i < 4; i++)
	{
		cout << "Forma " << i + 1 << ": \n";
		vetor_formas[i]->imprime_dados(); // vinculação dinâmica
		cout << endl;
	}

	delete vetor_formas[0];
}

// ponteiro para classe base apontando para objeto de classe base
Forma *ponto = new Forma{100, 100};
cout << "Ponto ponto: \n";
ponto->imprime_dados();
cout << "\n";

// ponteiro para classe base apontando para objeto de derivada
Forma *ret = new Retangulo{10, 10, 20, 30};
cout << "Retangulo ret: \n";
ret->imprime_dados(); // o que imprime?
cout << "\n";

// ponteiro para classe base apontando para objeto de derivada
Forma *circ = new Circulo{10, 10, 10};
cout << "Circulo circ: \n";
circ->imprime_dados(); // o que imprime?
cout << "\n";
