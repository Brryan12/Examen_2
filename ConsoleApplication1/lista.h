#pragma once
#include "estudiante.h"
#include "nodo.h"
#include <sstream>
class lista{
private:
	nodo* primero;
	nodo* actual;
public:
	lista();
	void insertarInicio(estudiante*);
	string toString();
	bool listaVacia();
	int cuentaNodos();
	bool eliminaInicio();
	~lista();
};