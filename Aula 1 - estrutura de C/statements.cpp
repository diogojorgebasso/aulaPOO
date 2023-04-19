#include <iostream>

using namespace std;

bool accept()
{
	int tentativas = 0;

	while(tentativas < 4)
	{
		cout << "Voce deseja continuar? (y/n) ";

		char resp = 0;	
		cin >> resp;

		switch(resp)
		{
			case 'y':
			case 'Y': return true;
			case 'n':
			case 'N':
					return false;
			default: 
				cout << "Resposta invalida." << endl;
				tentativas++;
		}
	}

	cout << "Bom, eu acho que isso foi um nao."	<< endl;
	return false;
}

int main()
{
	if(accept())
		cout << "Voce continua!" << endl;
	else
		cout << "Voce parou..." << endl;
}

