#ifndef POLIGONO
#define POLIGONO
#include <iostream>
using namespace std;

class poligono {
	private:
		string tipo;
	public:
		virtual float calcArea(void)=0;
		poligono(string s);
		string getTipo(void);
};

#endif
