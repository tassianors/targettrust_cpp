#ifndef FIG
#define FIG

#include "poligono.h"
using namespace std;

class quadrado: public poligono {
	private:
		float lado;
	public:

	float calcArea(void);
	quadrado(float l);
};

class circulo: public poligono {
	private:
		float raio;
	public:

	float calcArea(void);
	circulo(float r);
};

class retangulo: public poligono {
	private:
		float lado_a;
		float lado_b;
	public:

	float calcArea(void);
	retangulo(float a, float b);
};

class triangulo: public poligono {
	private:
		float lado;
	public:

	float calcArea(void);
	triangulo(float l);
};

#endif
