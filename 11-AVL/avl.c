#define MAX(a,b) ((a) > (b) ? (a) : (b))

#include <stdlib.h>
#include <stdio.h>
#include "avl.h"

AVL IniciaAVL(){
	AVL aux = NULL;
	return aux;
}

AVL CrearNodo(int val){
	AVL aux;
	aux = (AVL)malloc(sizeof(NodoAVL));
	if(aux!=NULL){
		aux->info = val;
		aux->altura = 1; //todos los nodos creados son hoja
		aux->izq = NULL;
		aux->der = NULL;
	}
	return aux;
}
int AlturaNodo(AVL A){
	if(A==NULL) return 0;
	else return A->altura;
}

AVL ActualizarAltura(AVL A){
	if(A!=NULL){
		A->altura = MAX(AlturaNodo(A->izq), AlturaNodo(A->der)) + 1;
	}
	return A;
}

AVL RotarSimpleDerecha(AVL A){
	AVL aux;
	aux = A->izq;
	A->izq = aux->der;
	aux->der = A;
	A = ActualizarAltura(A);
	aux = ActualizarAltura(aux);
	return aux;
}

AVL RotarSimpleIzquierda(AVL A){
	AVL aux;
	aux = A->der;
	A->der = aux->izq;
	aux->izq = A;
	A = ActualizarAltura(A);
	aux = ActualizarAltura(aux);
	return aux;
}

AVL RotarDobleIzquierdaDerecha(AVL A){
	A->izq = RotarSimpleIzquierda(A->izq);
	A = RotarSimpleDerecha(A);
	return A;
}

AVL RotarDobleDerechaIzquierda(AVL A){
	A->der = RotarSimpleDerecha(A->der);
	A = RotarSimpleIzquierda(A);
	return A;
}

AVL Insertar(AVL A, int x){
	if(A==NULL){
		A = CrearNodo(x);
	}
	else {
		if(x < A->info){
			A->izq = Insertar(A->izq, x);
		}
		else {
			A->der = Insertar(A->der, x);
		}
	}
	A = ActualizarAltura(A);
	A = Balancear(A);
	
	return A;
}
/*pseudocodigo
AVL Balancear(A){
	if(FB(A) == 2){
		//significa que tiene mas nodos a la izq
		if(FB(A->izq) == 0 or FB(A->izq)==1)
			RotacionSimpleDerecha(A)
		else 
			RotacionDobleIzquiedaDerecha(A)
	}

	if(FB(A) == -2){
		//significa que tiene mas nodos a la der
		if(FB(A->der) == 0 or FB(A->der)==-1)
			RotacionSimpleIzquierda(A)
		else 
			RotacionDobleDerechaIzquierda(A);
	}
}
*/


AVL Balancear(AVL A){
	int fb, dif;
	if(A!=NULL){
		fb = AlturaNodo(A->izq) - AlturaNodo(A->der); // diferencia de alturas //fb=raiz()
		if(fb == 2){ //el hijo izq de A es mas alto
			dif = AlturaNodo(A->izq->izq) - AlturaNodo(A->izq->der); //fb del hijo izq
			if(dif == 1 || dif == 0){
				printf("RSD\n");
				return RotarSimpleDerecha(A);
			}
			else{
				printf("RDID\n");
				return RotarDobleIzquierdaDerecha(A);
			}
		}
		else if(fb == -2){ //el hijo der de A es mas alto
			dif = AlturaNodo(A->der->izq) - AlturaNodo(A->der->der);
			if(dif == -1 || dif == 0){
				printf("RSI\n");
				return RotarSimpleIzquierda(A);
			}
			else{
				printf("RDDI\n");
				return RotarDobleDerechaIzquierda(A);
			}
		}
		else {
			printf("No balancear\n");
		}
	}
	return A;
}

void Preorden(AVL A){
	if(A!=NULL){
		printf("%d (altura %d)\n ", A->info, A->altura);
		Preorden(A->izq);
		Preorden(A->der);
	}
}
void Inorden(AVL A){
	if(A!=NULL){
		Inorden(A->izq);
		printf("%d (altura %d)\n ", A->info, A->altura);
		Inorden(A->der);
	}
}


/*

void Preorden(AVL A){
	if(A!=NULL){
		printf("%d (altura %d)\n ", A->info, A->altura);
		Preorden(A->izq);
		Preorden(todos los hijos mas hacia la derecha);
	}
}
inorden(){
	if(A!=NULL){
		Preorden(A->izq);
		printf("%d (altura %d)\n ", A->info, A->altura);
		Preorden(todos los hijos mas hacia la derecha);
	}
}
postorden(){
	if(A!=NULL){
		Preorden(A->izq);
		Preorden(todos los hijos mas hacia la derecha);
		printf("%d (altura %d)\n ", A->info, A->altura);
	}
}
*/