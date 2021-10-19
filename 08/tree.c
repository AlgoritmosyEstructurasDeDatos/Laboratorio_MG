#include <stdlib.h>
#include <stdio.h>
#include "tree.h"

Nodo* CrearNodo(int val){
	Nodo* aux;
	aux = (Nodo*)malloc(sizeof(Nodo));
	aux->info = val;
	aux->izq = NULL;
	aux->der = NULL;
	return aux;
}

Nodo* InsertarElemento(Nodo* padre, char IzqOrDer, int valor){
	Nodo* NodoAInsertar = CrearNodo(valor);

	if(IzqOrDer == 'i'){
		padre->izq = NodoAInsertar;
	}
	else if (IzqOrDer == 'd'){
		padre->der = NodoAInsertar;	
	}
	printf("- Insertado valor %d en %c de %d\n", valor, IzqOrDer, padre->info );
	return NodoAInsertar; 
}

void Algoritmo_Misterio(Nodo* n){
	printf("Entrando a %d\n", n->info );
	if(n->izq != NULL){
		printf("- Visitando hijo izq de %d\n", n->info);
		Algoritmo_Misterio(n->izq);
	}
	if(n->der != NULL){
		printf("- Visitando hijo der de %d\n", n->info);
		Algoritmo_Misterio(n->der);
	}
	printf("Saliendo de %d\n", n->info );
}

// recorre en profundidad el arbol
void PreOrden(Nodo* n){
	if(n!=NULL){
		printf("%d, ", n->info );
		PreOrden(n->izq);
		PreOrden(n->der);
	}
}
void InOrden(Nodo* n){
	if(n!=NULL){
		InOrden(n->izq);
		printf("%d, ", n->info );
		InOrden(n->der);
	}
}

void PostOrden(Nodo* n){
	if(n!=NULL){
		PostOrden(n->izq);
		PostOrden(n->der);
		printf("%d, ", n->info );
	}
}



