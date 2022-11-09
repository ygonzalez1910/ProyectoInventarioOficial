#ifndef LISTACOMERCIO_H
#define LISTACOMERCIO_H

#include "NodoComercio.h"

class ListaComercio {
public:
	ListaComercio();
	~ListaComercio();
	void agregarComercio(Comercio*);
	string toString();
	Comercio* recuperarComercio(string);
private:
	NodoComercio* primero;
	NodoComercio* actual;
};

#endif
