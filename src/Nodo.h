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

class Nodo {
	int dato;
	Nodo *sig;
public:
	Nodo(){};
	Nodo(int d, Nodo*s=NULL):dato(d),sig(s){};
	int getDato(){ return dato;};
	Nodo* getSiguiente(){return sig;};
	void setDato(int d){dato=d;};
	void setSiguiente(Nodo* s){sig=s;};
	virtual ~Nodo(){};
};

#endif /* NODO_H_ */
