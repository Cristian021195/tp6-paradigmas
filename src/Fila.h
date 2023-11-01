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

class Fila {
	Nodo* fte;
	Nodo* fin;
	int longitud;
public:
	Fila():fte(NULL),fin(NULL),longitud(0){};

	void insertar(int dato){
		Nodo * nuevo = new Nodo(dato, fin);
		if(longitud == 0){
			fin=nuevo;
			fte=nuevo;
		}else{
			fin=nuevo;
		}
		longitud++;
	};

	void defila(){
		if(!esVacia()){
			Nodo * PREV; Nodo * FTE = fte; Nodo * FIN = fin;
			while(fin->getSiguiente() != NULL){
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
			Nodo* aux= fte;
			fte = fte->getSiguiente();
			delete aux;
			longitud--;
		}
	};

	int elemento(){
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
		for(Nodo*aux=fin;aux!=NULL;aux=aux->getSiguiente()){
			cout<<aux->getDato()<<"-";
		}
		cout<<endl;
	};
	friend class IteradorDeFila;
};

#endif /* FILA_H_ */
