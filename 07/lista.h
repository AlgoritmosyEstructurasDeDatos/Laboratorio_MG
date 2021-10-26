struct Nodo{
	int informacion; // el indice del nodo del grafo
	struct Nodo* siguiente;
} typedef Nodo;

struct Lista{
	Nodo* top;
	int largo;
} typedef Lista;

Lista* Crear_Lista();
void Mostrar_Lista(Lista *L);
void Insertar_Al_Final(Lista *L, int dato_de_entrada);
void Mostrar_Elemento_n_Lista(Lista *L, int indice);
