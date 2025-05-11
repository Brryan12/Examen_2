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
	estudiante(string="",string="", int=0);
	~estudiante();

	string getNombre() ;
	string getCedula();
	int getNota();

	void setNombre(string);
	void setCedula(string);
	void setNota(int);

    string toString();
};


