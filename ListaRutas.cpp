#include <sstream>
using std::stringstream;

#include "ListaRutas.h"

ListaRutas::ListaRutas():primero(nullptr), actual(nullptr) {
	
}

ListaRutas::~ListaRutas() {
	
}

void ListaRutas::agregarRutas(Rutas* dato){
	primero = new NodoRutas(dato,primero);
}

string ListaRutas::toString(){
	stringstream r;
	Rutas* Rutas;
	actual = primero;
	while(actual != nullptr){
		Rutas = actual->getDato();
		r << Rutas->toString();
		actual = actual->getSiguiente();
	}
	return r.str();
}

Rutas* ListaRutas::recuperarRutas(int numeroRutas){
	Rutas* Rutas;
	actual = primero;
	while(actual != nullptr){
		Rutas = actual->getDato();
		if(Rutas != nullptr && Rutas->getNumero()== numeroRutas){
			return Rutas;
		}
		actual = actual->getSiguiente();
	}
	return nullptr;
}

