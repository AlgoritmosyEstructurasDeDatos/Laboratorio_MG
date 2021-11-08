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


// EJERCICIO 1
int contador_hojas = 0;
int BuscarHojas(Nodo* n){
	if(n!=NULL){
		if(n->izq == NULL && n->der == NULL){
			// NODO HOJA
			printf("+Es hoja %d\n", n->info);
			contador_hojas++;
		}
		else {
			BuscarHojas(n->izq);
			BuscarHojas(n->der);
		}
	}
	return contador_hojas;
}

// EJERCICIO 1 (OTRA FORMA RECURSIVA)
int BuscarHojas2(Nodo* n){
	if(n!=NULL){
		if(n->izq == NULL && n->der == NULL){
			// NODO HOJA
			printf("+Es hoja(rec) %d\n", n->info);
			contador_hojas++;
			return 1;
		}
		else {
			return BuscarHojas2(n->izq) + BuscarHojas2(n->der);
		}
	}
	return 0;
	//return contador_hojas;
}

// EJERCICIO 2
int es_raiz = 1;
int BuscarInterno(Nodo* n){
	int val = 0;
	if(n!=NULL){
		if((n->izq != NULL || n->der != NULL) && !es_raiz){
			printf("- Es nodo interno %d\n", n->info);
			val = 1;
		}
		es_raiz = 0;
		val += BuscarInterno(n->izq) + BuscarInterno(n->der);  
	}
	return val;
}

// ejercicio 3
// Hacer BFS que recorra por niveles.
// tambien puede hacerlo recorriendo recursivamente el árbol y guardando un contador en un arrego, cuyo índice sea el nivel del árbol.

// ejercicio 5
int nivel = 0;
int altura = 0;
int mostrarAltura(Nodo* n){
	nivel++;
  	printf("nodo %d - Nivel %d\n", n->info, nivel);
  	if(n->izq!=NULL) mostrarAltura(n->izq);
  	//nivel--;
	if(altura < nivel) altura = nivel;
	//nivel++;
	if(n->der!=NULL) mostrarAltura(n->der);
	nivel--;

	return altura;
}
