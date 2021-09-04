#include "nodo.h"

struct Cola {
	int largo;
	Nodo* inicio;
	Nodo* final;
} typedef Cola;

Cola* Crear_Cola();
void Insertar(Cola* C, Info* dato_a_insertar );
void Mostrar_Cola(Cola *C);
Info Extraer(Cola* C);