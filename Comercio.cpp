#include "Comercio.h"
#include <sstream>
using std::stringstream;

Comercio::Comercio(){
	
}

Comercio::~Comercio() {
	
}

void Comercio::agregarChofer (Chofer * chofer) {
	choferes->agregarChofer(chofer);
}

string Comercio::listadoChoferes ( ) {
	return choferes->toString();
}

void Comercio::agregarProveedor (Proveedor * proveedor) {
	provedores->agregarProveedor(proveedor);
}

string Comercio::listadoProveedores ( ) {
	provedores->toString();
}

void Comercio::agregarRutas (Rutas* rutas) {
	rutas-agregarRutas();
}

string Comercio::listadoRutas(){
	rutas->toString();
}

void Comercio::agregarMateriaPrima(MateriaPrima* materiaPrima) {
	materiasPrimas->agregarMateriaPrima(materiaPrima191);
}

string Comercio::listadoMateriaPrima ( ) {
	
}

