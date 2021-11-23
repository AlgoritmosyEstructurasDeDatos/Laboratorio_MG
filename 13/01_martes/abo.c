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



/* RECORRIDOS CON IMPRIMIR NIVEL**/

void ImprimirNivel(Nodo* n, int nivel){
	if(n != NULL){
		printf("nodo %d (nivel %d)\n", n->info, nivel);
    ImprimirNivel(n->izq, nivel+1);
    ImprimirNivel(n->der, nivel+1);
	}
}
int MAX(int a, int b){
	if(a>b) return a;
	else return b;
}

int ImprimirAltura(Nodo* n){
  if(n!=NULL){
    int h_izq = ImprimirAltura(n->izq);
    int h_der = ImprimirAltura(n->der);
    int altura = MAX(h_izq, h_der)+1;
    printf("Nodo %d (altura %d)\n", n->info, altura);
		return altura;
  }
  else {
     // cuando es null = altura 0 
     return 0;
  }
}

int ObtenerAltura(Nodo* n){
  if(n!=NULL){
    int h_izq = ObtenerAltura(n->izq);
    int h_der = ObtenerAltura(n->der);
    int altura = MAX(h_izq, h_der)+1;
    //printf("Nodo %d (altura %d)\n", n->info, altura);
		return altura;
  }
  else {
     // cuando es null = altura 0 
     return 0;
  }
}
// Nodo* n es la raiz del árbol, y valor del nodo es el valor a buscar
void BuscarNodo_FB(Nodo* n, int valor_del_nodo){
	if(n!=NULL){
		if(n->info == valor_del_nodo){
			// si el nodo es el encontrado!!
			int h_izq = ObtenerAltura(n->izq);
			int h_der = ObtenerAltura(n->der);
			int FB = h_izq - h_der;
			printf("\n\n**El nodo %d tiene FB %d**\n", valor_del_nodo, FB );
			return; 
		}
		else {
			BuscarNodo_FB(n->izq, valor_del_nodo);
			BuscarNodo_FB(n->der, valor_del_nodo);
		}
	}

}


