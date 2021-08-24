#include <stdio.h>
#include "list.h"

// agregar al final, igual como lista de python
void append(int valor, list *L){
	L->values[L->largo] = valor;
	L->largo++;
}

void MostrarLista(list *L){
	for(int i=0; i<L->largo ; i++){
		// cuando L es un puntero *L debemos acceder a sus propiedades o miembros de la estructura usando una flecha ->
		// cuando es no es un puntero L debemos acceder a sus propiedades usando un punto .
		printf("%d, ", L->values[i]);
	}
	printf("\n");
}

int push (list *L){
	int valor_a_retornar = L->values[L->largo-1];
	L->largo--;
	return valor_a_retornar;
}

// agrega un valor al inicio
int append_al_inicio(int valor, list *L){
	for(int i=L->largo; i>0; i--){
		L->values[i] = L->values[i-1];
	}
	L->values[0] = valor;
}
