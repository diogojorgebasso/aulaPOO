#ifndef DATE_H
#define DATE_H

class Date {
	private:
		int d, m, y;
		mutable int count;
	public:
		Date(int = 1, int = 1, int = 1972);
		~Date() {} // In-Class

		// Definições In-Class de Funções
		// Repare que membros do tipo "get" são candidatos óbvios

		// Todas as funções const se "comprometem"
		// a não modificar o estado atual do objeto,
		// provendo apenas acesso read-only.
		int get_day() const { return d; }
		int get_month() const { return m; } 
		int get_year() const { return y; }
		int get_count() const { return count; }
		void print() const;

		// No entanto, membros set somente são candidatos
		// quando não é necessário realizar validação nos dados.
		// Caso contrário, a definição no arquivo .cpp é mais apropriada.
		Date& set_day(int value);
		Date& set_month(int value);
		Date& set_year(int value);

};

class Link {
	private:
		Link* pre;
		Link* suc;
		int data;
	public:
		// construtor
		Link(Link* p, Link* s, int d) : pre{p}, suc{s}, data{d} {}

		// insere antes deste (de this)
		Link* insert(int x)
		{
			return pre = new Link{pre, this, x}; // ...->pre->new->this->...
		}
};

#endif

