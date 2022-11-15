#include "MateriaPrima.h"
#include <sstream>
using std::stringstream;

MateriaPrima::MateriaPrima(int cantidad,string nombre): cantidad(cantidad),nombre(nombre),cantMinima(cantMinima) {
	
}

MateriaPrima::~MateriaPrima() {
	
}

string MateriaPrima::toString(){
	stringstream r;
	r <<"Materia Prima: " <<  nombre <<"\n";
	r <<"Cantidad: " <<  cantidad <<"\n";
	return r.str();
}

string MateriaPrima::getNombre ( ) {
	return nombre;
}

int MateriaPrima::getCantidad ( ) {
	return cantidad;
}


