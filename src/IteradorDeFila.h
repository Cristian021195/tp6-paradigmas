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

template <class X>
class IteradorDeFila {
	const Fila<X> &fila; // constante para que no pueda modificarse nada en memoria
	Nodo<X>* actual;
public:
	IteradorDeFila(const Fila<X> &f):fila(f),actual(f.fin){};
	bool hayMasElementos(){
		return actual!=NULL;
	};
	X elementoActual(){
		return actual->getDato();
	};
	void avanzar(){
		actual=actual->getSiguiente();
	};
	//virtual ~IteradorDeFila();
	//IteradorDeFila(const IteradorDeFila &other);
};

#endif /* ITERADORDEFILA_H_ */

