#include <stdio.h>
#include "abo.h"
//10, 9, 8, 11, 2, 20, 15, 14, 3, 21

int main(void) {
	ABO A = IniciaABO();
	A = CrearNodo(10);
	Insertar(A, 9);	
	Insertar(A, 8);
	Insertar(A, 11);
	Insertar(A, 2);
	Insertar(A, 20);
	Insertar(A, 15);
	Insertar(A, 14);
	Insertar(A, 3);
	Insertar(A, 21);
	Insertar(A, 9999);

	printf("\nRecorrido en preorden: ");
	preorden(A);
	// corolario: el recorrido en inorden siempre da de menor a mayor.
	printf("\nRecorrido en inorden: ");
	inorden(A);

	printf("\nEl mayor dentro del ABO es %d", Max(A));
	printf("\nEl menor dentro del ABO es %d", Min(A));

	printf("\nExiste el numero 20 en el ABO? %d", Buscar(A, 20) );
	printf("\nExiste el numero 555 en el ABO? %d", Buscar(A, 555) );

	printf("\nExiste el numero 1 en el ABO? %d", Buscar(A, 1) );
  return 0;
}