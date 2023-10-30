/*
 * Fila.h
 *
 *  Created on: 29 oct 2023
 *      Author: crist
 */

#ifndef FILA_H_
#define FILA_H_
#include <iostream>
#include "Nodo.h"
using namespace std;

template <class X>
class Fila {
	Nodo<X>* fte;
	Nodo<X>* fin;
	int longitud;
public:
	Fila():fte(NULL),fin(NULL),longitud(0){};

	void insertar(X dato){
		Nodo<X> * nuevo = new Nodo<X>(dato, fin);
		if(longitud == 0){
			fin=nuevo;
			fte=nuevo;
		}else{
			//cout << fin->getDato() << fte->getDato() << endl; //1-1 ok
			fin=nuevo;
		}
		longitud++;
	};

	void defila(){
		if(!esVacia()){
			//cout << fin->getDato() << fte->getDato() << endl; // 3 - 1
			Nodo<X> * PREV; Nodo<X> * FTE = fte; Nodo<X> * FIN = fin;
			while(fin->getSiguiente() != NULL){
				//cout << "run " << fte->getDato() << endl; // 1 - 1
				//cout << fin->getSiguiente()->getDato() << endl; // 2 - 1
				PREV = fin;
				fin = fin->getSiguiente();
			}

			PREV->setSiguiente(NULL);
			fte = PREV;
			fin = FIN;
			delete FTE;
			//cout << fte->getDato() << endl; // 2
			longitud--;
		}

	};

	void borrar(){
		if(!esVacia()){
			Nodo<X>* aux= fte;
			fte = fte->getSiguiente();
			delete aux;
			longitud--;
		}
	};

	X elemento(){
		if(!esVacia())
			return fte->getDato();
		else
			return INDEFINIDO;
	};

	int cantidad(){return longitud;};

	bool esVacia(){return longitud==0;};

	virtual ~Fila(){
		for(int i=0;i<longitud;i++)
			borrar();
	};
	void escribir(){// consulta
		cout<<"Fila: ";
		for(Nodo<X>*aux=fin;aux!=NULL;aux=aux->getSiguiente()){
			cout<<aux->getDato()<<" ";
		}
		cout<<endl;
	};

	template <typename W>
	friend class IteradorDeFila;
};

#endif /* FILA_H_ */
