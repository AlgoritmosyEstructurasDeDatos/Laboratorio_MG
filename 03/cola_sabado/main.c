#include <stdio.h>
#include <stdlib.h>
#include "cola.h"

int main(void) {
	Cola* C = Crear_Cola();
	printf("El largo de la cola es: %d\n", C->largo);

	Info* d1 = (Info*)malloc(sizeof(Info)); 
	d1->telefono = 567890;
	d1->rut = 56789098;

	Info d2;
	d2.telefono = 5678;
	d2.rut = 8768;

	Insertar(C, d1);
	Insertar(C, &d2);

	Mostrar_Cola(C);

	printf("\nInserto un nuevo elemento\n");
	Info d3;
	d3.rut = 1;
	d3.telefono=2;
	Insertar(C, &d3);
	Mostrar_Cola(C);
	
	Info d = Extraer(C);
	printf("\nExtrajo %d %d", d.rut, d.telefono);
	Mostrar_Cola(C);

  return 0;
}