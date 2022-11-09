#ifndef LISTAMATERIAPRIMA_H
#define LISTAMATERIAPRIMA_H

#include "NodoMateriaPrima.h"

class ListaMateriaPrima {
public:
	ListaMateriaPrima();
	~ListaMateriaPrima();
	void agregarMateriaPrima(MateriaPrima*);
	string toString();
	MateriaPrima* recuperarMateriaPrima(string);
private:
	NodoMateriaPrima* primero;
	NodoMateriaPrima* actual;
};

#endif


