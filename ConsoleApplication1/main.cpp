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

	lista* l2 = new lista();
	l2->operator=(*l1);
	cout << "Lista 1: \n" << l1->toString();
	cout << "Lista 2: \n"<< l2->toString();
	if (l1->operator==(*l2))
		cout << "Son iguales" << endl;
	else
		cout << "No son iguales" << endl;
	lista* l3 = new lista();
	l3->insertarInicio(e1);
	l3->insertarInicio(e2);
	l3->insertarInicio(e3);
	if (l1->operator==(*l3))
		cout << "Son iguales" << endl;
	else
		cout << "No son iguales" << endl;
	cout << "Lista 1 por operador []: \n";
	cout << l1->operator[](2)->toString();
	cout << "Lista 2 por operador []: \n";
	cout << l2->operator[](2)->toString();
	cout << "Estudiante por operador <<: \n";
	cout << *e2;
	cout << "Estudiante por operador >>: \n\n";
	estudiante* e6 = new estudiante();
	cin >> *e6;
	cout << "Estudiante recien creado: \n\n";
	cout << *e6;

	cin.get();
	delete l1;
	delete l2;
	delete e6;
	return 0;
}