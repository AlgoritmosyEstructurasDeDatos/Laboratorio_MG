#include <stdio.h>
#include "tree.h"

int main(void) {
	Nodo* raiz = CrearNodo(1);
	
	Nodo* n2 = InsertarElemento(raiz, 'i', 2);
	Nodo* n3 = InsertarElemento(raiz, 'd', 3);

	Nodo* n4 = InsertarElemento(n2, 'i', 4);
	Nodo* n5 = InsertarElemento(n2, 'd', 5);

	Nodo* n6 = InsertarElemento(n3, 'i', 6);
	Nodo* n7 = InsertarElemento(n3, 'd', 7);

	Nodo* n8 = InsertarElemento(n5, 'd', 8);


	//Algoritmo_Misterio(raiz);
	//printf("Preorden: ");
	//PreOrden(raiz);

	//printf("\n\nInorden: ");
	//InOrden(raiz);

	//printf("\n\nPostorden: ");
	//PostOrden(raiz);

	int hojas = BuscarHojas(raiz);
	printf("La cantidad de hojas es %d \n", hojas);

	int hojas2 = BuscarHojas2(raiz);
	printf("La cantidad de hojas es %d \n", hojas2);

	int internos = BuscarInterno(raiz);
	printf("La cantidad de internos es %d \n", internos);

	int altu = mostrarAltura(raiz);
	printf("La altura del arbol es %d\n", altu);


	return 0;
}