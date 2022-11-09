#ifndef CHOFER_H
#define CHOFER_H

#include <string>
using std::string;

class Chofer {
public:
	Chofer(string);
	~Chofer();
	string getNombre();
	string toString();
	
private:
	string nombre;
};

#endif
