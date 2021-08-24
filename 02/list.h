struct list{
	int values[100];
	int largo;
} typedef list;

void MostrarLista(list *L);
void append(int valor, list *L);
int push (list *L);
int append_al_inicio(int valor, list *L);