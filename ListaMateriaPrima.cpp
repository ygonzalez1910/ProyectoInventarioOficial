#include <sstream>
using std::stringstream;

#include "ListaMateriaPrima.h"

ListaMateriaPrima::ListaMateriaPrima():primero(nullptr), actual(nullptr) {
	
}

ListaMateriaPrima::~ListaMateriaPrima() {
	
}

void ListaMateriaPrima::agregarMateriaPrima(MateriaPrima* dato){
	primero = new NodoMateriaPrima(dato,primero);
}

string ListaMateriaPrima::toString(){
	stringstream r;
	MateriaPrima* MateriaPrima;
	actual = primero;
	while(actual != nullptr){
		MateriaPrima = actual->getDato();
		r << MateriaPrima->toString();
		actual = actual->getSiguiente();
	}
	return r.str();
}

MateriaPrima* ListaMateriaPrima::recuperarMateriaPrima(string nombreMateriaPrima){
	MateriaPrima* MateriaPrima;
	actual = primero;
	while(actual != nullptr){
		MateriaPrima = actual->getDato();
		if(MateriaPrima != nullptr && MateriaPrima->getNombre()== nombreMateriaPrima){
			return MateriaPrima;
		}
		actual = actual->getSiguiente();
	}
	return nullptr;
}
