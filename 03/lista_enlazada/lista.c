#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

Lista* Crear_Lista(){
	Lista* lista_a_retornar = (Lista*)malloc(sizeof(Lista));
	lista_a_retornar->largo = 0;
	lista_a_retornar->inicio = NULL;
	printf(" *** LISTA VACIA  CREADA CON EXITO \n");
	return lista_a_retornar;
}

void Insertar_al_inicio(Lista *L, Info *dato_entrada){
	Nodo *n = (Nodo*)malloc(sizeof(Nodo));
	n->dato = dato_entrada;
	n->siguiente = L->inicio;
	L->inicio = n;
	L->largo = L->largo +  1;
}

void Insertar_al_final(Lista *L, Info *dato_entrada){
	Nodo *new_nodo = (Nodo*)malloc(sizeof(Nodo));
	new_nodo->dato = dato_entrada;
	new_nodo->siguiente = NULL;

	Nodo *ultimo_nodo = L->inicio;
	while(ultimo_nodo->siguiente != NULL){
		ultimo_nodo = ultimo_nodo->siguiente;
	}
	ultimo_nodo->siguiente = new_nodo;
	L->largo = L->largo +1;
}


void Mostrar_Lista(Lista *L){
	if(L->largo > 0){
		Nodo *n = L->inicio;
		while(n != NULL){
			printf("(%d,%d) - ", n->dato->rut, n->dato->telefono);
			n = n->siguiente;
		}
		printf("\n");
	}
	else {
		printf(" *** LA LISTA ESTA VACIA \n");
	}
}
void Eliminar_del_inicio(Lista *L){
	Nodo *nodo_a_eliminar = L->inicio;
	L->inicio = L->inicio->siguiente;	
	free(nodo_a_eliminar);
}


// TAREA:
// COMPLETAR LAS SIGUIENTES FUNCIONES

/*

//insertar en el indice n
void Insertar_en_n(Lista *L, n, Info *dato_entrada){
}

//obtiene el elemento del indice n
Info *obtener_elemento_n(Lista *L, int n){
}
// eliminar el elemento que está en el indice n
void eliminar_indice_n(Lista *L, int n){
}
// retorna 0 si la lista no esta vacia o 1 si la lista esta vacia
int es_vacia(Lista *L){
}
// Elimina el ultimo nodo
// recuerde utilizar free en el nodo eliminado
void eliminar_del_final(Lista *L){
}
*/










