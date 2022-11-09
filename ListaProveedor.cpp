#include <sstream>
using std::stringstream;

#include "ListaProveedor.h"

ListaProveedor::ListaProveedor():primero(nullptr), actual(nullptr) {
	
}

ListaProveedor::~ListaProveedor() {
	
}

void ListaProveedor::agregarProveedor(Proveedor* dato){
	primero = new NodoProveedor(dato,primero);
}

string ListaProveedor::toString(){
	stringstream r;
	Proveedor* Proveedor;
	actual = primero;
	while(actual != nullptr){
		Proveedor = actual->getDato();
		r << Proveedor->toString();
		actual = actual->getSiguiente();
	}
	return r.str();
}

Proveedor* ListaProveedor::recuperarProveedor(string nombreProveedor){
	Proveedor* Proveedor;
	actual = primero;
	while(actual != nullptr){
		Proveedor = actual->getDato();
		if(Proveedor != nullptr && Proveedor->getNombre()== nombreProveedor){
			return Proveedor;
		}
		actual = actual->getSiguiente();
	}
	return nullptr;
}
