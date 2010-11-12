#include <iostream>
#include "poligono.h"
#include "quadrado.h"

int main(void) 
{
	poligono *vet[4];
	int i =0;

	vet[0] = new quadrado(2);
	vet[1] = new circulo(2);
	vet[2] = new retangulo(2, 6);
	vet[3]= NULL;

	while (vet[i] != NULL) {
		cout << vet[i]->calcArea() << endl;
		i++;
	}
	return 0;
}

