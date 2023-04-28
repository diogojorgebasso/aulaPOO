#include "date.h"
#include <iostream>

using namespace std;

int main()
{
	// Exemplo de um objeto imutável
	const Date birth {7,11,1985};

	birth.print();
	birth.print();
	birth.print();
	cout << "\ncount = " << birth.get_count() << "\n";

	// utilizando encadeamento de chamadas
	Date today;
	today.set_day(14).set_month(3).set_year(2016);
	today.print();
}