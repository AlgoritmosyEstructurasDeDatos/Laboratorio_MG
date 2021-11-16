#include <stdio.h>
#include "avl.h"

int main(void) {
  AVL A;
	A = IniciaAVL();
	/*
	A = Insertar(A, 8);
	A = Insertar(A, 4);
	A = Insertar(A, 12);
	A = Insertar(A, 2);
	A = Insertar(A, 6);
	A = Insertar(A, 1);
	*/
	//50, 30, 20, 60, 70, 55, 57, 58
	printf("-Insertando 50\n");
	A = Insertar(A, 50);
	printf("-Insertando 30\n");
	A = Insertar(A, 30);
	printf("-Insertando 20\n");
	A = Insertar(A, 20);
	printf("-Insertando 60\n");
	A = Insertar(A, 60);
	printf("-Insertando 70\n");
	A = Insertar(A, 70);
	printf("-Insertando 55\n");
	A = Insertar(A, 55);
	printf("-Insertando 57\n");
	A = Insertar(A, 57);
	printf("-Insertando 58\n");
	A = Insertar(A, 58);
	
	printf("Preorden:\n");
	Preorden(A);
	printf("Inorden:\n");
	Inorden(A);
	
	return 0;
}