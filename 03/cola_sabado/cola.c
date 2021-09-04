#include <stdlib.h>
#include <stdio.h>
#include "cola.h"

Cola* Crear_Cola(){
	Cola* cola_a_retornar = (Cola*)malloc(sizeof(Cola));
	cola_a_retornar->inicio = NULL;
	cola_a_retornar->final = NULL;
	cola_a_retornar->largo = 0;
	return cola_a_retornar;
}

// funcion que permite insertar en la cola (recordar que inserta al final)
void Insertar(Cola* C, Info* dato_a_insertar ){
	Nodo* nodo_a_insertar = (Nodo*)malloc(sizeof(Nodo));
	nodo_a_insertar->dato = dato_a_insertar;
	nodo_a_insertar->siguiente = NULL;
	// si la cola esta vacia
	if (C->inicio == NULL) { 
		C->inicio = nodo_a_insertar;
		C->final = nodo_a_insertar;
	}
	else {
		C->final->siguiente = nodo_a_insertar; // paso 3
		C->final = nodo_a_insertar; // paso 4
	}
 	C->largo = C->largo + 1;
}

// retorna el primer elemento de la cola y lo saca
Info Extraer(Cola* C){
	if(C->largo > 0) {
		Nodo* primer_elemento = C->inicio;
		Info variable_a_retornar = *primer_elemento->dato;
		C->inicio = C->inicio->siguiente; // es lo mismo que primer_elemento->siguiente
		if (C->largo == 1){
			C->final = NULL;
		}		
		free(primer_elemento);
	
		C->largo = C->largo-1;
		return variable_a_retornar;
	}
	else {
		printf("La cola esta vacia");
	}
	//return 0;
}

void Mostrar_Cola(Cola *C){
	Nodo* nos_paramos_en = C->inicio; 
	while(nos_paramos_en != NULL){
		printf("(%d,%d) - ", nos_paramos_en->dato->rut, nos_paramos_en->dato->telefono );
		nos_paramos_en = nos_paramos_en->siguiente;
	}
	printf("\n");
}


// TAREA:
// IMPLEMENTAR LAS SIGUIENTES FUNCIONES

// void Eliminar(Cola *C) // elimina el elemento del inicio
// void Insertar_en_n(Cola *C, Info dato_a_insertar, int indice) //meter un colao en la fila/cola
// void Eliminar_en_n(Cola *C, int indice) // elimina a un colado en la cola