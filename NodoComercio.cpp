#include "NodoComercio.h"

NodoComercio::NodoComercio(Comercio* dato, NodoComercio* siguiente)
	: dato(dato), siguiente(siguiente) {
	
}

NodoComercio::~NodoComercio() {
	
}

NodoComercio* NodoComercio::getSiguiente(){
	return siguiente;
}

Comercio* NodoComercio::getDato(){
	return dato;
}

