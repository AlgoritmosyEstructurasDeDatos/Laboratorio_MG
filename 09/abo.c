#include "abo.h"


Nodo* CrearNodo(int val){
	Nodo* aux;
	aux = (Nodo*)malloc(sizeof(Nodo));
	aux->info = val;
	aux->izq = NULL;
	aux->der = NULL;
	return aux;
}
ABO IniciaABO(){
	ABO aux = NULL;
	return aux;
}
ABO Insertar(ABO A, int x){
	if(A == NULL){
		A = CrearNodo(x);
	}
	else {
		if(x < A->info)
			A->izq = Insertar(A->izq, x);
		else // si es mayor o igual
			A->der = Insertar(A->der, x);
	}
	return A;
}
// retorna el mayor valor del ABO
int Max(ABO A){
	if(A->der == NULL)
		return A->info;
	else {
		return Max(A->der);
	} 	
}
int Min(ABO A){
	if(A->izq == NULL)
		return A->info;
	else {
		return Min(A->izq);
	} 	
}
bool Buscar(ABO A, int elem){
	if(A == NULL)
		// busco hasta que el elemento fuera nulo, y no lo encontró
		return 0;	
	if(A->info == elem)
		//encontro el elemento
		return 1;
	printf("\n --Verificando en %d",A->info);
	if(elem < A->info)
		//si es menor, buscar en el subarbol izquierdo
		return Buscar(A->izq, elem);
	else 
		//si es mayor o igual, voy a buscar en el subarbol derecho
		return Buscar(A->der, elem);
}


/*RECORRIDOS SEMANA PASADA*/
void preorden(ABO A){
	if(A != NULL){
		printf("%d, ", A->info);
		preorden(A->izq);
		preorden(A->der);
	}
}
void inorden(ABO A){
	if(A != NULL){
		inorden(A->izq);
		printf("%d, ", A->info);
		inorden(A->der);
	}
}