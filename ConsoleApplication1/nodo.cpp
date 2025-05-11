#include "nodo.h"


nodo::nodo(estudiante*  e, nodo* s) {
	estu= e;
	sig = s;
}
//-------------------------------------------------
nodo::~nodo() {
	delete estu;
}
//-------------------------------------------------
void nodo::setEstu(estudiante* e) {
	estu = e;
}
//-------------------------------------------------
estudiante* nodo::getEstu() {
	return estu;
}
//-------------------------------------------------
void nodo::setSig(nodo*  s) { 
	sig = s;
}
//-------------------------------------------------
nodo* nodo::getSig() {
	return sig;
}
//-------------------------------------------------
string nodo::toStringNodo() {
	return estu->toString();
}
//-------------------------------------------------