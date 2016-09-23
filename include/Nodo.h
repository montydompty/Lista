/*Created by Claudio Ibáñez Garduño and Rodrigo Montoya Rangel on 17/09/16.
 Copyright (c) 2016 Claudio Ibáñez Garduño & Rodrigo Montoya Rangel. All rights reserved.
Clse nodo con atributos y métodos*/

#include <iostream>

class Nodo
{
private:
	int Dato;
	Nodo* Sig;
public:
	Nodo(int Dato, Nodo* Sig);
	Nodo(int Dato);
	void setDato(int Dato);
	void setSig(Nodo* Sig);
	int getDato();
	Nodo* getSig();

};
