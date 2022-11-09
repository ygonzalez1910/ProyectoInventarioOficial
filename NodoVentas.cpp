#include "NodoVentas.h"

NodoVentas::NodoVentas(Ventas* dato, NodoVentas* siguiente)
	: dato(dato), siguiente(siguiente) {
	
}

NodoVentas::~NodoVentas() {
	
}

NodoVentas* NodoVentas::getSiguiente(){
	return siguiente;
}

Ventas* NodoVentas::getDato(){
	return dato;
}

