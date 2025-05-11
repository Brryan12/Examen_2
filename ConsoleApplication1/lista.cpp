#include "lista.h"
//-------------------------------------------------
lista::lista() {
	primero = nullptr;
	actual = nullptr;
}
lista::lista(lista& listaCopia)
{
	primero = nullptr;
	actual = nullptr;
	nodo* nodoCopia = listaCopia.primero;
	while (nodoCopia != nullptr) {
		estudiante* e = new estudiante(nodoCopia->getEstu()->getNombre(), nodoCopia->getEstu()->getCedula(), nodoCopia->getEstu()->getNota());
		insertarInicio(e);
		nodoCopia = nodoCopia->getSig();
	}
	actual = primero;
	actual = actual->getSig();
}
//-------------------------------------------------
void lista::insertarInicio(estudiante*  e) {
	primero = new nodo(e, primero);
}
//-------------------------------------------------
string lista::toString() {
	actual = primero;
	stringstream  s;

	while (actual != nullptr){
		s << actual->toStringNodo();
		actual = actual->getSig();
	}
	return s.str();
}

//-----------------------------------------------
bool lista::listaVacia(){
	if (primero == nullptr) { return true; }
	return false;
}
//-----------------------------------------------
bool lista::eliminaInicio(){
	if (primero == nullptr) { // caso 1: lista vacia
		return false;
	}
	else {// caso 2: lista NO vacia
		actual = primero;
		primero = primero->getSig();
		delete actual;
		return true;
	}
}

bool lista::operator==(lista& listaCopia)
{
	actual = primero;
	bool igual=false;
	nodo* nodoCopia = listaCopia.primero;
	while (actual != nullptr) {
		while (nodoCopia != nullptr) {
			if (actual != nodoCopia) {
				nodoCopia = nodoCopia->getSig();
			}
			if (actual == nodoCopia) {
				igual = true;
			}
			else {
				igual = false;
			}
		}
		actual = actual->getSig();
	}
	return igual;
}

estudiante* lista::operator[](int index)
{
	actual = primero;
	int i = 0;
	while (actual != nullptr && i < index) {
		actual = actual->getSig();
		i++;
	}
	if (actual != nullptr) {
		return actual->getEstu();
	}
	else {
		return nullptr;
	}
}

//----------------------------------------------
int lista::cuentaNodos() {
	actual = primero;
	int can = 0;

	while (actual != nullptr){
		actual = actual->getSig();
		can++;
	}
	return can;
}

//-----------------------------------------------
lista::~lista() { 
	while (!listaVacia()) {
		eliminaInicio();
	}
}

lista& lista::operator=(lista& listaCopia)
{
	if (this != &listaCopia) {
		while (!listaVacia()) {
			eliminaInicio();
		}
		nodo* nodoCopia = listaCopia.primero;
		while (nodoCopia != nullptr) {
			estudiante* e = new estudiante(nodoCopia->getEstu()->getNombre(), nodoCopia->getEstu()->getCedula(), nodoCopia->getEstu()->getNota());
			insertarInicio(e);
			nodoCopia = nodoCopia->getSig();
		}
		actual = primero;
		actual = actual->getSig();
	}
	return *this;
}
