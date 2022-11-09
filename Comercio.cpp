#include "Comercio.h"
#include <sstream>
using std::stringstream;

Comercio::Comercio(string nombre): nombre(nombre) {
	
}

Comercio::~Comercio() {
	
}

string Comercio::toString(){
	stringstream r;
	r <<"Comercio: " <<  nombre <<"\n";
	return r.str();
}

string Comercio::getNombre ( ) {
	return nombre;
}
