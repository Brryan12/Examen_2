#include <iostream>
#include <sstream>
#include "lista.h"
#include "estudiante.h"
using namespace std;

int main(){
	lista* l1= new lista();
	estudiante* e1 = new estudiante("Juan", "111", 79);
	estudiante* e2 = new estudiante("Juan", "111", 89);
	estudiante* e3 = new estudiante("Juan", "321", 20);
	estudiante* e4 = new estudiante("Juan", "465", 50);
	estudiante* e5 = new estudiante("Juan", "987", 100);

	l1->insertarInicio(e1);
	l1->insertarInicio(e2);
	l1->insertarInicio(e3);
	l1->insertarInicio(e4);
	l1->insertarInicio(e5);

	cout << l1->toString();
	l1->insertarInicio(e1);
	//--------------------------------------------------------

	// Pruebe lo realizado aqui
	if (e1->operator==(*e2))
		cout << "Son iguales" << endl;
	else
		cout << "No son iguales" << endl;
	if (e1->operator!=(*e2))
		cout << "No son iguales" << endl;
	else
		cout << "Son iguales" << endl;
	if (e1->operator==(*e3))
		cout << "Son iguales" << endl;
	else
		cout << "No son iguales" << endl;
	if (e3->operator!=(*e2))
		cout << "No son iguales" << endl;
	else
		cout << "Son iguales" << endl;

	cin.get();
	return 0;
}