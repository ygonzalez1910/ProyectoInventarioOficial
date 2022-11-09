#ifndef NODOCOMERCIO_H
#define NODOCOMERCIO_H

#include "Comercio.h"

class NodoComercio {
public:
	NodoComercio(Comercio*,NodoComercio*);
	~NodoComercio();
	NodoComercio* getSiguiente();
	Comercio* getDato();
private:
	Comercio* dato;
	NodoComercio* siguiente;
};

#endif
