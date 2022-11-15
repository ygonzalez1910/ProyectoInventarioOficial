#ifndef VENTAS_H
#define VENTAS_H
#include "ListaMateriaPrima.h"
#include <string>
using std::string;

class Ventas {
public:
	Ventas(string);
	~Ventas();
	bool guardar(ofstream&);
	void agregarMateriaPrima(MateriaPrima*);
	string getNombre();
	string toString();
	
private:
	string nombre;
	ListaMateriaPrima* materiaPrima;
};

#endif
