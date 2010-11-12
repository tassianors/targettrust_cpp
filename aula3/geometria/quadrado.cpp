#include "quadrado.h"
#include "poligono.h"
#include <iostream>

using namespace std;
//************************************************************************/
quadrado::quadrado(float l): poligono("quadrado")
{
	cout << "constructor quadrado" << endl;
	this->lado = l;
}
float quadrado::calcArea(void)
{
	return this->lado*this->lado;
}
//************************************************************************/
circulo::circulo(float r): poligono("Circulo")
{
	this->raio = r;
	cout << "constructor circulo" << endl;
}
float circulo::calcArea(void)
{
	return 2*3.141593*this->raio;
}

//************************************************************************/
retangulo::retangulo(float a, float b): poligono("retangulo")
{
	this->lado_a = a;
	this->lado_b = b;

	cout << "constructor retangulo" << endl;
}
float retangulo::calcArea(void)
{
	return this->lado_a*this->lado_b;
}
//************************************************************************/
triangulo::triangulo(float l): poligono("triangulo")
{
	this->lado = l;
	cout << "constructor triangulo" << endl;
}

float triangulo::calcArea(void)
{
	return this->lado*this->lado/2;
}





