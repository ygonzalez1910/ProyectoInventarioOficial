#include <sstream>
using std::stringstream;

#include "ListaComercio.h"

ListaComercio::ListaComercio():primero(nullptr), actual(nullptr) {
	
}

ListaComercio::~ListaComercio() {
	
}

void ListaComercio::agregarComercio(Comercio* dato){
	primero = new NodoComercio(dato,primero);
}

string ListaComercio::toString(){
	stringstream r;
	Comercio* Comercio;
	actual = primero;
	while(actual != nullptr){
		Comercio = actual->getDato();
		r << Comercio->toString();
		actual = actual->getSiguiente();
	}
	return r.str();
}

Comercio* ListaComercio::recuperarComercio(string nombreComercio){
	Comercio* Comercio;
	actual = primero;
	while(actual != nullptr){
		Comercio = actual->getDato();
		if(Comercio != nullptr && Comercio->getNombre()== nombreComercio){
			return Comercio;
		}
		actual = actual->getSiguiente();
	}
	return nullptr;
}
