#ifndef RUTAS_H
#define RUTAS_H

#include <string>
using std::string;

class Rutas {
public:
	Rutas(string);
	~Rutas();
	string getNombre();
	string toString();
	
private:
	string nombre;
};

#endif
