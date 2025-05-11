#include <iostream>
#include <sstream>
#include "lista.h"
#include "estudiante.h"
using namespace std;

int main(){
	lista* l1= new lista();
	estudiante* e1 = new estudiante("Juan", "111", 79);
	estudiante* e2 = new estudiante("Juan", "111", 89);
	estudiante* e3 = new estudiante("Juan", "111", 20);
	estudiante* e4 = new estudiante("Juan", "111", 50);
	estudiante* e5 = new estudiante("Juan", "111", 100);

	l1->insertarInicio(e1);
	l1->insertarInicio(e2);
	l1->insertarInicio(e3);
	l1->insertarInicio(e4);
	l1->insertarInicio(e5);

	cout << l1->toString();
	l1->insertarInicio(e1);
	//--------------------------------------------------------

	// Pruebe lo realizado aqui
	cin.get();
	return 0;
}