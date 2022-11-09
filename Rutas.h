#ifndef RUTAS_H
#define RUTAS_H

#include <string>
using std::string;

class Rutas {
public:
	Rutas(int);
	~Rutas();
	int getNumero();
	string toString();
	
private:
	int numero;
};

#endif
