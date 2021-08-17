#include <stdio.h> // porque aqui estamos usando printf
#include <math.h>
#include "Punto.h" 

// procedimiento que imprime un punto
void ImprimirPuntoEnElPlano(Punto x){
	printf("Punto (%f,%f)\n",x.x, x.y );
}
Punto CrearPuntoEnElPlano(float valor_x, float valor_y){
	Punto nuevo;
	nuevo.x = valor_x;
	nuevo.y = valor_y;
	return nuevo;
}

int ObtenerCuadrante(Punto x){
	if (x.x >= 0 && x.y >=0){
		return 1;
	}
	else if (x.x < 0 && x.y>=0){
		return 2;
	}
	else if (x.x < 0 && x.y < 0){
		return 3;
	}
	else if (x.x >= 0 && x.y < 0){
		return 4;
	}
}

float obtenerDistanciaEntreDosPuntos(Punto p1, Punto p2){
	float distancia = sqrt(pow(p1.x-p2.x, 2) + pow(p1.y - p2.y,2) );	
	return distancia;
}






// Nota: Para compilar, compilar tambien el .c 
// gcc main.c Punto.c -o main.o