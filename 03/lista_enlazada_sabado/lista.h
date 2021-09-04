#include "nodo.h"

struct Lista{
	Nodo* top;
	int largo;
} typedef Lista;

Lista* Crear_Lista();
void Insertar_Al_Inicio(Lista* L, Info* dato_de_entrada);
void Mostrar_Lista(Lista *L);
void Insertar_Al_Final(Lista *L, Info *dato_de_entrada);