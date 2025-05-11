#include "Analizador.h"

std::string Analizador::estudianteNotaMayor(lista<estudiante>* lista)
{
	Iterador<estudiante>* it = lista->getIterador();
	it->first();
	int mayor = 0;
	estudiante* e = it->currentItem();
	it->first();
	while (!it->isDone()) {
		if (it->currentItem()->getNota() > mayor) {
			mayor = it->currentItem()->getNota();
			e = it->currentItem();
		}
		it->next();
	}

    return e->toString();
}
