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
	lista(lista& listaCopia);
	~lista();
	lista& operator=(lista& listaCopia);
	void insertarInicio(estudiante*);
	string toString();
	bool listaVacia();
	int cuentaNodos();
	bool eliminaInicio();
	bool operator==(lista& listaCopia);
    estudiante* operator[](int index);
};