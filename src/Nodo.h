/*
 * Nodo.h
 *
 *  Created on: 29 oct 2023
 *      Author: crist
 */

#ifndef NODO_H_
#define NODO_H_
#include <iostream>
#define INDEFINIDO -9999
using namespace std;

template <class T>
class Nodo {
	T dato;
	Nodo<T> *sig;
public:
	Nodo(){};
	Nodo(T d, Nodo*s=NULL):dato(d),sig(s){};
	T getDato(){ return dato;};
	Nodo* getSiguiente(){return sig;};
	void setDato(T d){dato=d;};
	void setSiguiente(Nodo* s){sig=s;};
	virtual ~Nodo(){};
};

#endif /* NODO_H_ */
