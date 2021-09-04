#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

int main(void) {
  Lista* L = Crear_Lista();

	printf("El largo de la lista es %d\n", L->largo );
	// como es una variable, se usa punto para 
	Info d1;
	d1.rut = 345678;
	d1.telefono = 4567876;

	// como es un puntero debo acceder a sus propiedades usando flecha o casteandolo a una variable
	Info* d2 = (Info*)malloc(sizeof(Info));
	(*d2).rut = 67897;
	d2->telefono = 567898716;

	Insertar_Al_Inicio(L, &d1);
	Insertar_Al_Inicio(L, d2);
	printf("El largo despues de insertar 2 al inicio %d\n", L->largo );
	Mostrar_Lista(L);	

	Info d3;
	d3.rut = 8279191;
	d3.telefono = 875282;

	Insertar_Al_Final(L, &d3);
	printf("La lista despues de insertar al final \n");
	Mostrar_Lista(L);	
	

	return 0;
}