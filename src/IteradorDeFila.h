/*
 * IteradorDeFila.h
 *
 *  Created on: 29 oct 2023
 *      Author: crist
 */

#ifndef ITERADORDEFILA_H_
#define ITERADORDEFILA_H_
#include "Fila.h"
using namespace std;


class IteradorDeFila {
	const Fila &fila; // constante para que no pueda modificarse nada en memoria
	Nodo* actual;
public:
	IteradorDeFila(const Fila &f):fila(f),actual(f.fin){};
	bool hayMasElementos(){
		return actual!=NULL;
	};
	int elementoActual(){
		return actual->getDato();
	};
	void avanzar(){
		actual=actual->getSiguiente();
	};
};

#endif /* ITERADORDEFILA_H_ */

