#include "lista.h"

struct Grafo{
	int numero_de_vertices;
	int numero_de_aristas;
	Lista* lista_de_adyacencia;
} typedef Grafo;

Grafo* Crear_Grafo(int numero_de_vertices);
void Insertar_Arista(Grafo *G, int vertice1, int vertice2);
void Mostrar_Grafo(Grafo *G);