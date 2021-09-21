#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "grafo.h"
//#include "lista.h"

int main(void) {
	char nombre[200];
  int vertices, vert1, vert2;
  printf("Ingrese el nombre del archivo a leer\n");
  //scanf("%s", nombre);
  strcpy(nombre,"grafo_entrada.txt");
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
	
	
	/*
  // probemos la lista
	Lista *L = Crear_Lista();
	Insertar_Al_Final(L, 1);
	Insertar_Al_Final(L, 2);
	Insertar_Al_Final(L, 21);
	Mostrar_Lista(L);
	*/

	/*
	// PROBAMOS EL GRAFO Y LA ESTRUCTURA GRAFO
	Grafo *graf;
	graf = Crear_Grafo(10);
	Insertar_Arista(graf, 1,2);
	Insertar_Arista(graf, 2,3);
	Insertar_Arista(graf, 2,4);
	Insertar_Arista(graf, 2,8);
	Mostrar_Grafo(graf);
	*/

	/*
	// asi se usan los arreglos
	int arreglo_de_enteros[10];
	arreglo_de_enteros[0] = 20;
	arreglo_de_enteros[1] = 99;

	int* arreglo_de_enteros_ptr;
	arreglo_de_enteros_ptr = (int*)malloc(sizeof(int)*10);
	arreglo_de_enteros_ptr[0] = 20;
	*(arreglo_de_enteros_ptr+1) = 99;

	free(arreglo_de_enteros_ptr);
	*/
  return 0;
}