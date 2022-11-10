#ifndef MATERIAPRIMA_H
#define MATERIAPRIMA_H

#include <iostream>
using namespace std;
#include <sstream>
class MateriaPrima {
public:
	MateriaPrima(int,string);
	MateriaPrima(ifstream&);
	~MateriaPrima();
	int getCantidad();
	string getNombre();
	bool guardar(ofstream&);
	string toString();
	
private:
	int cantidad;
	string nombre;
	int cantMinima;
};

#endif
