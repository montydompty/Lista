/*Montoya Rangel luis Rodrigo
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
	l.AddRef(25,5);
	l.AddInicio(7);
	l.RemoveInicio();
	l.RemoveFinal();
	l.AddRef(15,6);
	l.BuscarElemento(43);
	l.RemoveRef(4);
	l.Show();
	l.VaciarLista();
	l.Show();	
	return 0;
}
