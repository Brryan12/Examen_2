//#include "lista.h"
////-------------------------------------------------
//lista::lista() {
//	primero = NULL;
//	actual = NULL;
//}
////-------------------------------------------------
//void lista::insertarInicio(estudiante*  e) {
//	primero = new nodo(e, primero);
//}
////-------------------------------------------------
//string lista::toString() {
//	actual = primero;
//	stringstream  s;
//
//	while (actual != NULL){
//		s << actual->toStringNodo();
//		actual = actual->getSig();
//	}
//	return s.str();
//}
//
////-----------------------------------------------
//bool lista::listaVacia(){
//	if (primero == NULL) { return true; }
//	return false;
//}
////-----------------------------------------------
//bool lista::eliminaInicio(){
//	if (primero == NULL) { // caso 1: lista vacia
//		return false;
//	}
//	else {// caso 2: lista NO vacia
//		actual = primero;
//		primero = primero->getSig();
//		delete actual;
//		return true;
//	}
//}
//
////----------------------------------------------
//int lista::cuentaNodos() {
//	actual = primero;
//	int can = 0;
//
//	while (actual != NULL){
//		actual = actual->getSig();
//		can++;
//	}
//	return can;
//}
//
////-----------------------------------------------
//lista::~lista() { 
//	while (!listaVacia()) {
//		eliminaInicio();
//	}
//}