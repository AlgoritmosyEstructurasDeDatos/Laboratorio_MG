#include <stdio.h>
#include "list.h"

int main(void) {
	//arreglo: coleccion de elementos del mismo tipo que son almacenados en direcciones de mmeoria contigua.

	list lalista;
	lalista.largo=0;

	lalista.values[0] = 10;
	lalista.largo++;
	lalista.values[1] = 99;
	lalista.largo++;

	append(1, &lalista);
	append(999, &lalista);
	append(567, &lalista);

	printf("Antes de eliminar el ultimo \n");
	MostrarLista(&lalista);

	int ultimovalor = push(&lalista);
	printf("Despues de eliminar el ultimo que fue %d\n",ultimovalor);
	MostrarLista(&lalista);

	append_al_inicio(7777, &lalista);
	printf("Insertando un valor al inicio queda \n");
	MostrarLista(&lalista);
	
	printf("El largo de la lista es %d\n", lalista.largo);

  return 0;
}