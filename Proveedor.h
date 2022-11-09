#ifndef PROVEEDOR_H
#define PROVEEDOR_H

#include <string>
using std::string;

class Proveedor {
public:
	Proveedor(string);
	~Proveedor();
	string getNombre();
	string toString();
	
private:
	string nombre;
};

#endif
