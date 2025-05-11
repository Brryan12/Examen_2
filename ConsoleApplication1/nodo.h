#pragma once
#include "estudiante.h"
class nodo{
private:
	estudiante* estu;
	nodo* sig;
public:
	nodo(estudiante*, nodo*);
	~nodo();
	void setEstu(estudiante*);
	estudiante* getEstu();
	void setSig(nodo*);
	nodo* getSig();
	string toStringNodo();
};