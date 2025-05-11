#pragma once
#include "estudiante.h"
template <typename Datatype>
class nodo{
private:
	Datatype* data;
	nodo* next;
public:
	nodo(Datatype* data, nodo* next);
	~nodo();
	void setData(Datatype* data);
	Datatype* getData();
	void setNext(nodo*);
	nodo* getNext();
	string toStringNodo();
};

template<typename Datatype>
inline nodo<Datatype>::nodo(Datatype* data, nodo* next) : data(data), next(next)
{
}

template<typename Datatype>
inline nodo<Datatype>::~nodo()
{
	delete data;
}

template<typename Datatype>
inline void nodo<Datatype>::setData(Datatype* data)
{
	this->data=data
}

template<typename Datatype>
inline Datatype* nodo<Datatype>::getData()
{
	return this->data;
}

template<typename Datatype>
inline void nodo<Datatype>::setNext(nodo*)
{
	this->next = next;
}

template<typename Datatype>
inline nodo<Datatype>* nodo<Datatype>::getNext()
{
	return this->next;
}

template<typename Datatype>
inline string nodo<Datatype>::toStringNodo()
{
	return data->toString();	
}
