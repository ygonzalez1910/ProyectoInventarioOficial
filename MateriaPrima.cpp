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

MateriaPrima::MateriaPrima (ifstream& entrada) {
	entrada >> nombre;
	entrada >> cantidad;
}

bool MateriaPrima::guardar (ofstream& salida) {
	salida << nombre <<endl;
	salida << cantidad << endl;
	
	//Limpiar el buffer del stream
	salida.flush();
	
	if(salida.good()){
		return true;
	}
	return false;
}

