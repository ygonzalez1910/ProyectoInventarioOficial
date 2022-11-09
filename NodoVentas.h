#ifndef NODOVENTAS_H
#define NODOVENTAS_H


#include "Ventas.h"

class NodoVentas {
public:
	NodoVentas(Ventas*,NodoVentas*);
	~NodoVentas();
	NodoVentas* getSiguiente();
	Ventas* getDato();
private:
	Ventas* dato;
	NodoVentas* siguiente;
};

#endif
