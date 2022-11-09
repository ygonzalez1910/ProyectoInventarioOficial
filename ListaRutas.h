#ifndef LISTARUTAS_H
#define LISTARUTAS_H

#include "NodoRutas.h"

class ListaRutas {
public:
	ListaRutas();
	~ListaRutas();
	void agregarRutas(Rutas*);
	string toString();
	Rutas* recuperarRutas(int);
private:
	NodoRutas* primero;
	NodoRutas* actual;
};

#endif

