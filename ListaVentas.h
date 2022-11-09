#ifndef LISTAVENTAS_H
#define LISTAVENTAS_H
#include "NodoVentas.h"

class ListaVentas {
public:
	ListaVentas();
	~ListaVentas();
	void agregarVentas(Ventas*);
	string toString();
	Ventas* recuperarVentas(string);
private:
	NodoVentas* primero;
	NodoVentas* actual;
};

#endif
