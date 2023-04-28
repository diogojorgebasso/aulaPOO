// Definição da classe Circle (arquivo: circle.h)
// Funções-membro serão definidas em circle.cpp

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
	private:
		float radius;
		int x, y;
	public:

		// Construtores e Destrutores
		Circle();
		Circle(float, int = 0, int = 0);
		~Circle() {}

		// Funções de interface
		float area();
		float perimeter();
		void set_radius(float);
		void set_origin(int, int);
		float get_radius();

		// retorna o valor de area para um circulo 
		// qualquer cujo raio é passado como parametro
		static float circle_area(float);
};

#endif

