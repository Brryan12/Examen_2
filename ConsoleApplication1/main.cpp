#include <iostream>
#include <sstream>
#include "lista.h"
#include "estudiante.h"
#include "Analizador.h"
using namespace std;

int main(){
	lista<estudiante>* l1= new lista<estudiante>();
	estudiante* e1 = new estudiante("Juan", "111", 79);
	estudiante* e2 = new estudiante("Juan", "111", 89);
	estudiante* e3 = new estudiante("Juan", "111", 20);
	estudiante* e4 = new estudiante("Juan", "111", 50);
	estudiante* e5 = new estudiante("Ricardo", "111", 100);

	l1->insertarInicio(e1);
	l1->insertarInicio(e2);
	l1->insertarInicio(e3);
	l1->insertarInicio(e4);
	l1->insertarInicio(e5);

	cout << l1->toString();
	l1->insertarInicio(e1);

	//--------------------------------------------------------

	// Pruebe lo realizado aqui
	std::cout << "Lista de estudiantes" << std::endl;
	Iterador<estudiante>* it = l1->getIterador();
	it->first();
	while (!it->isDone()) {
		cout << it->currentItem()->toString();
		it->next();
	}
	std::cout << "Estudiante con la mejor nota" << std::endl;
	Analizador* a = new Analizador();
	std::cout << a->estudianteNotaMayor(l1) << std::endl;



	cin.get();
	return 0;
}