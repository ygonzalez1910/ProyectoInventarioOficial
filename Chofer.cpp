#include <sstream>
using std::stringstream;

#include "Chofer.h"

Chofer::Chofer(string nombre): nombre(nombre) {
	
}

Chofer::~Chofer() {
	
}

string Chofer::toString(){
	stringstream r;
	r <<"Chofer: " <<  nombre <<"\n";
	return r.str();
}

string Chofer::getNombre ( ) {
	return nombre;
}

