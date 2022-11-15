#ifndef COMERCIO_H
#define COMERCIO_H
#include "ListaChofer.h"
#include "ListaProveedor.h"
#include "ListaRutas.h"
#include "ListaMateriaPrima.h"
#include <string>
using std::string;

class Comercio {
public:
	Comercio();
	~Comercio();
	
	void agregarChofer(Chofer*);
	string listadoChoferes();
	
	void agregarProveedor(Proveedor*);
	string listadoProveedores();
	
	void agregarRutas(Rutas*);
	string listadoRutas();
	
	void agregarMateriaPrima(MateriaPrima*);
	string listadoMateriaPrima();
	
private:
	ListaChofer* choferes;
	ListaProveedor* provedores;
	ListaRutas* rutas;
	ListaMateriaPrima* materiasPrimas;
};

#endif
