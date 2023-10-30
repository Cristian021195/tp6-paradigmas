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
	friend bool operator==(Persona p1, Persona &p2){
		if( (p1.nombre == p2.nombre) && (p1.edad == p2.edad)){
			return true;
		}
		return false;
	}
	friend bool operator<(Persona p1, Persona &p2){
		if(p1.edad < p2.edad){
			return true;
		}
		return false;
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
