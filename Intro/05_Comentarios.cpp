#include <stdio.h>
//Calcular el perimetro de un circulo
#define PI 3.1416 /*Declarar una constante debajo de todas las librerias usando el signo numeral
seguido de la palabra define, nombre de la constante en MAYUS, espacio y su valor*/

int main()
{
	/*Otra manera de definir una constante mediante el uso de la palabra reservada const
	Escribimos dentro del metodo principal const, tipo de dato, nombre de la constante en MAYUS, 
	signo igual y su valor*/
	//--DECLARAR UNA CONSTANTE--
	const float EQUIVALENCIA_C_F = 33.8; 
	
	//Para usar la constante PI
	
	//--ASIGNACION DE VALORES--
	float radio = 4; //Creamos una variable de tipo flotante para radio y su valor
	float perimetro; //Creamos una variable de tipo flotante para perimetro
	
	//--CALCULANDO EL PERIMETRO--
	perimetro = 2 * PI * radio;
	
	//Para usar la constante EQUIVALENCIA_C_F
	
	float cel, far;
	//--CONVERTIR CELSIUS A FARHENHEIT--
	far = cel * EQUIVALENCIA_C_F;
	
	//declarar variables
	int n=6, n2=4;
	int respuesta;
	
	//--OPERACIONES ARITMETICAS--
	respuesta = n + n2;
	respuesta = n - n2;
	respuesta = n *n2;
	respuesta = n / n2;

	return 0;
}
