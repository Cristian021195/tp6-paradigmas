//============================================================================
// Name        : tp6.cpp
// Author      : Cristian Gramajo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Fila.h"
#include "Persona.h"
#include "IteradorDeFila.h"

#define MAX 7
using namespace std;

int main() {
	Fila f1;
	int i;
	for(i=1;i<=MAX ;i++){
		f1.insertar(i);
	}
	f1.defila();
	f1.insertar(2);f1.insertar(2);
	f1.escribir();
}

