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

template <class X>
bool pertenece(Fila<X> &f, X item){
	IteradorDeFila<X> it(f);
	bool resultado = false;
	while(!resultado && it.hayMasElementos()){
		resultado = it.elementoActual() == item;
		it.avanzar();
	}
	return resultado;
}

template <class X>
int ContarX(Fila<X> &f, X item){
	int contador = 0;
	IteradorDeFila<X> it(f);
	while(it.hayMasElementos()){
		if(it.elementoActual() == item){
			contador++;
		}
		it.avanzar();
	}
	return contador;
}
int main() {
	Persona p1("Cristian", 27);Persona p2("Cristian", 28); Persona p3("Cristian", 28);
	Fila<Persona> fp1; fp1.insertar(p1); fp1.insertar(p2); fp1.insertar(p3);
	Fila<int> f1;
	int i;
	for(i=1;i<=MAX ;i++){
		f1.insertar(i);
	}
	f1.defila();
	f1.insertar(2);f1.insertar(2);
	f1.escribir();

	cout<<endl<<"Escribo la lista desde el main con ITERADOR"<<endl;
	IteradorDeFila<int> it(f1);
	for( ; it.hayMasElementos();it.avanzar()){
		cout<<it.elementoActual()<<" - ";
	}
	cout <<endl;

	cout << pertenece(f1, 2) << endl;
	cout << "ContarX<int>: " << ContarX(f1, 2) << endl;

	//PERSONA
	cout << "---------------------" << endl; //cout << fp1.cantidad() << endl; // 3

	//IteradorDeFila<Persona> itp(fp1);
	cout << "¿p3 == p2?: " << (p3==p2) << ", ¿p1.edad < p2.edad?: " << (p1<p2) << endl;
	//cout << "ContarX<Persona>: " << ContarX(fp1, p3) << endl;

}

