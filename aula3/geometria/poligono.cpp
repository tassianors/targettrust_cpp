#include "poligono.h"
#include <iostream>

using namespace std;

poligono::poligono(string s)
{
	tipo = s;
}

string poligono::getTipo(void)
{
	return this->tipo;
}



