#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

Lista* Crear_Lista(){
	Lista* lista_a_retornar = (Lista*)malloc(sizeof(Lista));
	lista_a_retornar->largo = 0;
	lista_a_retornar->top = NULL;
	return lista_a_retornar;
}

void Insertar_Al_Final(Lista *L, int dato_de_entrada){
	Nodo *n = (Nodo*)malloc(sizeof(Nodo));
	n->informacion = dato_de_entrada;
	n->siguiente = NULL;

	// si la lista está vacia inserta al inicio
	if (L->largo == 0){
		L->top = n;		
	}
	// si no esta vacia itera hasta el ultimo nodo
	else {
		Nodo *i = L->top;// i es el que usamos para iterar
		while(i->siguiente != NULL){
			i = i->siguiente;
		}
		i->siguiente = n;
	}
	L->largo = L->largo + 1;
}

void Mostrar_Lista(Lista *L){
	Nodo *n = L->top;
	while(n != NULL) {
		// imrpimir nodo - acceder a info
		printf("(%d), ", n->informacion);
		n = n->siguiente;
	}
	printf("\n");
}