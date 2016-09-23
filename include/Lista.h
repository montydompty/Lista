/*Created by Claudio Ibáñez Garduño and Rodrigo Montoya Rangel on 17/09/16.
 Copyright (c) 2016 Claudio Ibáñez Garduño & Rodrigo Montoya Rangel. All rights reserved.
Clase lista con atributos y métodos*/

#include "Nodo.h"

class Lista
{
public:
	Nodo* H;
	Nodo* T;	
	Lista();
	Lista(int Dato);
	bool ListaVacia();
	void AddInicio(int Dato);
	void AddFinal(int Dato);
	void AddRef(int Dato, int Ref);
	int RemoveInicio();
	int RemoveFinal();
	Nodo * RemoveRef(int Ref);
	void VaciarLista();
	Nodo* BuscarElemento(int Dato);
	void Show();
};
