/*Created by Claudio Ibáñez Garduño and Rodrigo Montoya Rangel on 17/09/16.
 Copyright (c) 2016 Claudio Ibáñez Garduño & Rodrigo Montoya Rangel. All rights reserved.
Método principal de la lista*/

#include "Lista.h"

int main()
{
	/*Main que utiliza el constructor de lista para crear una lista vacia y probar su funcionamineto*/
	Lista l = Lista();
	l.AddInicio(4);	
	l.AddInicio(5);
	l.AddFinal(9);
	l.AddInicio(6);
	l.AddRef(10,5);
	l.AddInicio(7);
	l.RemoveInicio();
	l.RemoveFinal();
	l.RemoveRef(4);
	l.BuscarElemento(15);
	l.Show();
	l.VaciarLista();
	l.Show();	
	return 0;
}
