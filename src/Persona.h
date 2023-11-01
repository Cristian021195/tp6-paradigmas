/*
 * Persona.h
 *
 *  Created on: 29 oct 2023
 *      Author: crist
 */

#ifndef PERSONA_H_
#define PERSONA_H_
#include <iostream>
#include <string>
using namespace std;

class Persona {
	string nombre;
	unsigned short edad;
public:
	Persona(){}
	Persona(string nombre, unsigned short edad):
	nombre(nombre), edad(edad){};
	friend bool operator==(Persona &pa, Persona &pb){// de esta manera me toma correctamente el comparador
		cout << "[" << pa.nombre << "]" << endl;
		cout << "[" << pb.nombre << "]" << endl;
		if( (pa.nombre == pb.nombre) && (pa.edad == pb.edad)){
			return true; // retorna 1
		}
		return false; // retorna 0
	}
	friend bool operator<(Persona &pa, Persona &pb){
		cout << "[" << pa.edad << "]" << endl;
		cout << "[" << pb.edad << "]" << endl;
		if(pa.edad < pb.edad){
			return true; // retorna 1
		}
		return false; // retorna 0
	}
	void escribir(){
		cout << "Nombre: "<< nombre << ", Edad: " << edad << endl;
	}
	string getNombre(){return nombre;}
	unsigned short getEdad(){return edad;}
	virtual ~Persona(){}
	Persona(const Persona &other){}
};

#endif /* PERSONA_H_ */
