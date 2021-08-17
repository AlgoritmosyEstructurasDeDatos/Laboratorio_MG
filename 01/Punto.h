// estamos definiendo nuestro propio tipo de dato
struct Punto{
	float x;
	float y;
}typedef Punto;

void ImprimirPuntoEnElPlano(Punto x); // prototipo = solo la declaración
Punto CrearPuntoEnElPlano(float valor_x, float valor_y);
int ObtenerCuadrante(Punto x);
float obtenerDistanciaEntreDosPuntos(Punto p1, Punto p2);