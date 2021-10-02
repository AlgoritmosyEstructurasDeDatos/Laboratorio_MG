#include <stdlib.h>
#include <stdio.h>
#include "grafo.h"

Grafo* Crear_Grafo(int numero_de_vertices){
	Grafo* G = (Grafo*)malloc(sizeof(Grafo));
	G->numero_de_aristas = 0;
	G->numero_de_vertices = numero_de_vertices;
	// lista de adyacencia: arreglo de listas (reserva memoria)
	G->lista_de_adyacencia = (Lista*)malloc(sizeof(Lista)*numero_de_vertices);
	//inicializar las listas vacias del arreglo de listas
	G->visitados = (int*)malloc(sizeof(int)*numero_de_vertices);
	for(int i=0; i<numero_de_vertices; i++){
		G->lista_de_adyacencia[i] = *Crear_Lista();
		G->visitados[i] = 0; // visitado 0 (falso), 1 true
	}
	return G;
}

void Insertar_Arista(Grafo *G, int vertice1, int vertice2){
	Insertar_Al_Final(&G->lista_de_adyacencia[vertice1], vertice2);
	Insertar_Al_Final(&G->lista_de_adyacencia[vertice2], vertice1);
	G->numero_de_aristas = G->numero_de_aristas+1;
}

void Mostrar_Grafo(Grafo *G){
	printf("El grafo tiene %d vertices y %d aristas\n", G->numero_de_vertices, G->numero_de_aristas);
	for(int i=0; i<G->numero_de_vertices; i++){
		printf("Nodo %d (%d aristas) -> ", i, G->lista_de_adyacencia[i].largo );
		Mostrar_Lista(&G->lista_de_adyacencia[i]);
	}

}

// RECORRIDO DEL GRAFO EN PROFUNDIDAD
// visita en profundidad todos los nodos del grafo
void DFT(Grafo* g, int vertice){
	g->visitados[vertice] = 1;
	printf("Visitando %d\n", vertice);
	
	Lista* adj_al_vertice = &g->lista_de_adyacencia[vertice]; //lista de nodos adyacentes a "vertice"
	Nodo* aux = adj_al_vertice->top;
	while(aux != NULL){
		int sucesor = aux->informacion;
		if(g->visitados[sucesor] == 0 ){
			DFT(g, sucesor);
		}
		aux = aux->siguiente;
	}
	printf(" - Saliendo %d\n",vertice);

}