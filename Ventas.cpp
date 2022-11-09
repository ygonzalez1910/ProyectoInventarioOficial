#include "Ventas.h"
#include <sstream>
using std::stringstream;

Ventas::Ventas(string nombre): nombre(nombre) {
	
}

Ventas::~Ventas() {
	
}

string Ventas::toString(){
	stringstream r;
	r <<"Ventas: " <<  nombre <<"\n";
	return r.str();
}

string Ventas::getNombre ( ) {
	return nombre;
}

