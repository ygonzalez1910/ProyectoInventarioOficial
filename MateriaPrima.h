#ifndef MATERIAPRIMA_H
#define MATERIAPRIMA_H

#include <iostream>
using namespace std;
#include <sstream>
class MateriaPrima {
public:
	MateriaPrima(int,string);
	~MateriaPrima();
	int getCantidad();
	string getNombre();
	string toString();
	
private:
	int cantidad;
	string nombre;
	int cantMinima;
};

#endif
