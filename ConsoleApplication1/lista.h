#pragma once
#include "estudiante.h"
#include "nodo.h"
#include <sstream>
#include "Iterador.h"
template<typename Datatype>
class IteradorLista;

template<typename Datatype>
class lista{
private:
	nodo<Datatype>* primero;
	nodo<Datatype>* actual;
public:
	lista() {
		primero = nullptr;
		actual = nullptr;
	}
	void insertarInicio(Datatype* data) {
		primero = new nodo<Datatype>(data, primero);
	}
	string toString() {
			actual = primero;
			stringstream  s;
		
			while (actual != nullptr){
				s << actual->toStringNodo();
				actual = actual->getNext();
			}
			return s.str();
		}
	bool listaVacia() {
			if (primero == nullptr) { return true; }
			return false;
		}
	int cuentaNodos() {
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
	bool eliminaInicio() {
		actual = primero;
		int can = 0;
		
		while (actual != nullptr){
			actual = actual->getSig();
			can++;
		}
		return can;
	}
	~lista() {
		while (!listaVacia()) {
			eliminaInicio();
		}
	}
	IteradorLista<Datatype>* getIterador() {
		return new IteradorLista<Datatype>(this, this->primero);
	}
	nodo<Datatype>* getPrimero() {
		return primero;
	}
};
template<typename Datatype>
class IteradorLista : public Iterador<Datatype> {
private:
	nodo<Datatype>* actual; 
	lista<Datatype>* listai;
public:
	IteradorLista(lista<Datatype>* listai, nodo<Datatype>* primero) {
		this->listai = listai;
		this->actual = primero;
	}
	void first() {
		this->actual = listai->getPrimero();
	}
	void next() {
		if (this->actual != nullptr) {
			this->actual = this->actual->getNext();
		}
	}
	bool isDone() {
		return this->actual == nullptr;
	}
	Datatype* currentItem() {
		return this->actual->getData();
	}
};
