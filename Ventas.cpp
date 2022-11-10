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

Ventas::Ventas (ifstream& entrada ) {
	int cantidadmateriaPrimas = 0;
	materiaPrima* materiaPrima;
	materiaPrima = new Lista();
	
	entrada >> nombre;
	entrada >> cantidadmateriaPrimas;
	
	for(int i=0; i < cantidadmateriaPrimas; i++){
		materiaPrima = new materiaPrima(entrada);
		materiaPrima -> agregar(materiaPrima);
	}
}
}

bool Ventas::guardar (ofstream& salidaa ) {
	salida << nombre <<endl;
	salida << materiaPrima->getN() <<endl;
	MateriaPrima* materiaPrima;
	
	materiaPrima->iniciarActual();
	while(materiaPrima->masElementos()){
		materiaPrima = materiaPrima->recuperarmateriaPrima();
		materiaPrima->guardar(salida);
	}
	
	if(salida.good()){
		return true;
	}
	return false;
}

void Ventas::agregarMateriaPrima (MateriaPrima* materiaPrima) {
	materiaPrima -> agregar(materiaPrima);
}

