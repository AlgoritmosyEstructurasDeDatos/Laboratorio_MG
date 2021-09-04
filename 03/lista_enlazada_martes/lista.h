// almacena los datos que quiero guardar
struct Info{
	int rut;
	int telefono;	
} typedef Info;

struct Nodo{
	Info *dato;
	struct Nodo *siguiente;
} typedef Nodo;

struct Lista {
	Nodo *inicio;
	int largo;
} typedef Lista;

// crea una lista vacia y retorna la direccion de memoria de la lista
Lista* Crear_Lista();
void Insertar_al_inicio(Lista *L, Info *dato_entrada);
void Mostrar_Lista(Lista *L);

void Insertar_al_final(Lista *L, Info *dato_entrada);

void Eliminar_del_inicio(Lista *L);


// AGREGUE LOS PROTOTIPOS DE LA TAREA