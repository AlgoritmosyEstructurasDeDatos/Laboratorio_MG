#include <stdio.h> // a la biblioteca del sistema
#include "Punto.h" // a la misma carpeta del programa

int main(void) {
	Punto p = CrearPuntoEnElPlano(-5.0, 10.0);
	Punto q = CrearPuntoEnElPlano(20.0, -20.0);
	
	ImprimirPuntoEnElPlano(p);
	ImprimirPuntoEnElPlano(q);

	int cuadrante_p = ObtenerCuadrante(p);
	printf("** El cuadrante de p es %d \n", cuadrante_p);
	printf("** El cuadrante de q es %d \n", ObtenerCuadrante(q));

	printf("La distancia entre p y q es %f \n", obtenerDistanciaEntreDosPuntos(p,q));

  return 0;
}