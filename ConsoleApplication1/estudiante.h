//////////////////////////// Estudiante.h //////////////////////////
#pragma once
#include <iostream>
#include <sstream>
using namespace std;


class estudiante{
private:
	string nombre;
	string cedula;
	int nota;
public:
	estudiante(string nombre = "",string cedula ="", int nota=0);
	~estudiante();

	string getNombre() ;
	string getCedula();
	int getNota();

	void setNombre(string nombre);
	void setCedula(string cedula);
	void setNota(int nota);

    string toString();
	friend ostream& operator<<(ostream& out, estudiante& estudiante);
	friend istream& operator>>(istream& in, estudiante& estudiante);
	bool operator==(const estudiante& estudiante);
	bool operator!=(const estudiante& estudiante);
};


