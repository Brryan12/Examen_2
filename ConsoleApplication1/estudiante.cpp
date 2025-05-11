//////////////////////////// estudiante.cpp //////////////////////////
#include "estudiante.h"

estudiante::estudiante(string nombre, string cedula, int nota){
	this->nombre = nombre;
	this->cedula = cedula;
	this->nota = nota;
}
//-------------------------------------------------
estudiante::~estudiante(){

}
//-------------------------------------------------
string estudiante::getNombre() { return nombre;}
string estudiante::getCedula() { return cedula; }
int estudiante::getNota()  { return nota; }

void estudiante::setNombre(string nombre) {  this->nombre=nombre; }
void estudiante::setCedula(string cedula) { this->cedula = cedula; }
void estudiante::setNota(int nota) { this->nota = nota; }

//-------------------------------------------------
string estudiante::toString() {
	stringstream r;
	r << "Nombre : " << nombre <<endl;
	r << "Cedula : " << cedula <<endl;
	r << "Nota : " << nota << endl << endl;
	return r.str();
}

bool estudiante::operator==(const estudiante& estudianteC)
{
	return this->cedula==estudianteC.cedula;
}

bool estudiante::operator!=(const estudiante& estudianteC)
{
	return this->cedula!=estudianteC.cedula;
}

ostream& operator<<(ostream& out, estudiante& estudianteC)
{
	out << estudianteC.toString();
	return out;
}

istream& operator>>(istream& in, estudiante& estudianteC)
{
	cout << "Ingrese el nombre del estudiante: ";
	in >> estudianteC.nombre;
	cout << "Ingrese la cedula del estudiante: ";
	in >> estudianteC.cedula;
	cout << "Ingrese la nota del estudiante: ";
	in >> estudianteC.nota;
	return in;
}

