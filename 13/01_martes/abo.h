#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct Nodo{ 
	// nodo de arbol binario
	int info;
	struct Nodo* izq;
	struct Nodo* der;
}typedef Nodo;
typedef Nodo *ABO;

Nodo* CrearNodo(int val);
ABO IniciaABO();
ABO Insertar(ABO A, int x);
void preorden(ABO A);
void inorden(ABO A);
int Max(ABO A);
int Min(ABO A);
bool Buscar(ABO A, int elem);

void ImprimirNivel(Nodo* n, int nivel);
int ImprimirAltura(Nodo* n);
int MAX(int a, int b);
void BuscarNodo_FB(Nodo* n, int valor_del_nodo);
int ObtenerAltura(Nodo* n);