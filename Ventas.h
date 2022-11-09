#ifndef VENTAS_H
#define VENTAS_H

#include <string>
using std::string;

class Ventas {
public:
	Ventas(string);
	~Ventas();
	string getNombre();
	string toString();
	
private:
	string nombre;
};

#endif
