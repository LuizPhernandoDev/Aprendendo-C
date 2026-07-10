#include "poligonos.h"

//arquivo com as funções que segue a referencia

float PerimetroTriangulo(float a, float b, float c){
	
	return a + b + c;
}

float PerimetroRetangulo(float a, float b){
	
	return 2*a + 2*b;
}

float PerimetroCirculo(float r){
	
	return 2*PI*r;
}

float AreaTriangulo(float a, float b){
	
	return a*b/2;
}

float AreaRetangulo(float a, float b){
	
	return a * b;
}

float AreaCirculo(float r){
	
	return PI*r*r;
}