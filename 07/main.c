#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "grafo.h"

int main(void) {
	char nombre[200];
 	int vertices, vert1, vert2;
  printf("Ingrese el nombre del archivo a leer\n");
  //scanf("%s", nombre);
  strcpy(nombre,"grafo_entrada2.txt");
	FILE *fp;
  fp = fopen(nombre, "r");
  fscanf(fp, "%d", &vertices);
  
	// cre un grafo (sin aristas) con vertices como numero de vertices 
	Grafo* graf = Crear_Grafo(vertices);

	// leo el archivo leyendo cada una de las aristas
  while (fscanf(fp, "%i %i", &vert1, &vert2 ) == 2){
		Insertar_Arista(graf,vert1,vert2);
	}
	
	// Muestro el grafo leido del archivo
	Mostrar_Grafo(graf);

	DFT(graf, 0);
	
	
  return 0;
}