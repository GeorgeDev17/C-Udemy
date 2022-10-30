#include <stdio.h>
#include <locale.h>//Liberia acentos
//Calcular el perimetro de un circulo
#define PI 3.1416 /*Declarar una constante debajo de todas las librerias usando el signo numeral
seguido de la palabra define, nombre de la constante en MAYUS, espacio y su valor*/

int main()
{
	setlocale (LC_CTYPE,"Spanish"); //Idioma y acentos
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
	printf("El perimetro del circulo de radio 4 es %f \n",perimetro);
	
	//Para usar la constante EQUIVALENCIA_C_F
	
	float cel, far;
	cel = 8;
	//--CONVERTIR CELSIUS A FARHENHEIT--
	far = cel * EQUIVALENCIA_C_F;
	printf("La equivalencia de grados Celsius a Farhenheit es: %f \n", far);
	
	//declarar variables
	int n=6, n2=4;
	int respuesta;
	
	//--OPERACIONES ARITMETICAS--
	respuesta = n + n2; //Evalua la variable n que es igual a 6
	printf("Suma: %d \n", respuesta);
	n = 10; //Cambiamos el valor de la variable n que ahora es igual a 10
	respuesta = n - n2;
	printf("Resta: %d \n", respuesta);
	respuesta = n *n2;
	printf("Multiplicación: %d \n", respuesta);
	respuesta = n / n2;
	printf("División: %d \n", respuesta);
	respuesta = n % n2;
	printf("Resto o MOD: %d \n", respuesta);
	
	/* Imprimir una constante y modificar el numero de decimales a imprimir %.1f (secuencia de escape)*/
	printf ("El valor de la constante PI = %f \n", PI); //Sin modificar
	printf ("El valor de la constante PI = %.4f \n", PI); //Modificada
	printf ("Equivalencia de celsius a Farhenheit = %.2f", EQUIVALENCIA_C_F);
	return 0;
}
