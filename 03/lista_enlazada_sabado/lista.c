#include <stdlib.h>
#include <stdio.h>
#include "lista.h"


Lista* Crear_Lista(){
	Lista* lista_a_retornar = (Lista*)malloc(sizeof(Lista));
	lista_a_retornar->largo = 0;
	lista_a_retornar->top = NULL;
	return lista_a_retornar;
}

void Insertar_Al_Inicio(Lista *L, Info *dato_de_entrada){
	Nodo *n = (Nodo*)malloc(sizeof(Nodo));
	n->informacion = dato_de_entrada;
	n->siguiente = L->top;
	L->top = n;
	L->largo = L->largo+1;
}

void Insertar_Al_Final(Lista *L, Info *dato_de_entrada){
	Nodo *n = (Nodo*)malloc(sizeof(Nodo));
	n->informacion = dato_de_entrada;
	n->siguiente = NULL;

	Nodo *i = L->top;// es el que usamos para itera
	while(i->siguiente != NULL){
		i = i->siguiente;
	}
	i->siguiente = n;
	L->largo = L->largo + 1;
}




void Mostrar_Lista(Lista *L){
	Nodo *n = L->top;
	while(n != NULL) {
		// imrpimir nodo - acceder a info
		printf("(%d,%d), ", n->informacion->rut, n->informacion->telefono);
		n = n->siguiente;
	}
	printf("\n");
}

