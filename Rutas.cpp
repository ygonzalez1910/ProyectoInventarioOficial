#include <sstream>
using std::stringstream;

#include "Rutas.h"

Rutas::Rutas(int numero): numero(numero) {
	
}

Rutas::~Rutas() {
	
}

string Rutas::toString(){
	stringstream r;
	r <<"Rutas: " <<  numero <<"\n";
	return r.str();
}

int Rutas::getNumero ( ) {
	return numero;
}
