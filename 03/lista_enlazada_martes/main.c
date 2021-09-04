#include <stdio.h>
#include "lista.h"

int main(void) {
  Lista *my_lista;
	my_lista = Crear_Lista();

	Info matias;
	matias.rut = 18818;
	matias.telefono = 922222;

	Info elias;
	elias.rut = 727281911;
	elias.telefono = 44434511;
	
	Mostrar_Lista(my_lista);
	
	Insertar_al_inicio(my_lista, &matias);
	Insertar_al_inicio(my_lista, &elias);

	Mostrar_Lista(my_lista);

	// creo un nuevo elemento para insertar al final
	Info benjamin;
	benjamin.rut = 11111;
	benjamin.telefono=22222;

	Insertar_al_final(my_lista, &benjamin);
	Mostrar_Lista(my_lista);

	Eliminar_del_inicio(my_lista);
	Mostrar_Lista(my_lista);
	
	return 0;
}