struct NodoAVL{
	int info;
	int altura;
	struct NodoAVL* izq;
	struct NodoAVL* der;
} typedef NodoAVL;
typedef NodoAVL *AVL;

AVL IniciaAVL();
AVL CrearNodo(int val);
AVL ActualizarAltura(AVL A);
AVL RotarSimpleDerecha(AVL A);
AVL RotarSimpleIzquierda(AVL A);
AVL RotarDobleIzquierdaDerecha(AVL A);
AVL RotarDobleDerechaIzquierda(AVL A);
AVL Insertar(AVL A, int x);
AVL Balancear(AVL A);

void Preorden(AVL A);
void Inorden(AVL A);