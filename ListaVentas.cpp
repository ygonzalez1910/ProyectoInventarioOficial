#include <sstream>
using std::stringstream;

#include "ListaVentas.h"

ListaVentas::ListaVentas():primero(nullptr), actual(nullptr) {
	
}

ListaVentas::~ListaVentas() {
	
}

void ListaVentas::agregarVentas(Ventas* dato){
	primero = new NodoVentas(dato,primero);
}

string ListaVentas::toString(){
	stringstream r;
	Ventas* Ventas;
	actual = primero;
	while(actual != nullptr){
		Ventas = actual->getDato();
		r << Ventas->toString();
		actual = actual->getSiguiente();
	}
	return r.str();
}

Ventas* ListaVentas::recuperarVentas(string nombreVentas){
	Ventas* Ventas;
	actual = primero;
	while(actual != nullptr){
		Ventas = actual->getDato();
		if(Ventas != nullptr && Ventas->getNombre()== nombreVentas){
			return Ventas;
		}
		actual = actual->getSiguiente();
	}
	return nullptr;
}

