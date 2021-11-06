struct Nodo {
	int info;
	struct Nodo* izq;
	struct Nodo* der;
}typedef Nodo;

Nodo* CrearNodo(int val);
Nodo* InsertarElemento(Nodo* padre, char IzqOrDer, int valor);
void Algoritmo_Misterio(Nodo* n);
void PreOrden(Nodo* n);
void InOrden(Nodo* n);
void PostOrden(Nodo* n);

int BuscarHojas(Nodo* n);
int BuscarHojas2(Nodo* n);
int BuscarInterno(Nodo* n);

int mostrarAltura(Nodo* n);