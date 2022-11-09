#ifndef COMERCIO_H
#define COMERCIO_H

#include <string>
using std::string;

class Comercio {
public:
	Comercio(string);
	~Comercio();
	string getNombre();
	string toString();
	
private:
	string nombre;
};

#endif
