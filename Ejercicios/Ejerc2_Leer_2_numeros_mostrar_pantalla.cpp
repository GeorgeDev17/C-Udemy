/*2. Desarrolle un programa que lea dos numeros de tipo int de teclado y
posteriormente los escriba en pantalla*/
#include <stdio.h>

int main(){
	int num1, num2; //Defino las variables de tipo entero
	printf ("Ingrese el primer numero: "); //muestro mensaje en pantalla
	scanf ("%d", &num1); //Ingreso datos por teclado
	printf ("Ingrese el primer numero: ");
	scanf ("%d", &num2);
	
	printf ("Los numeros ingresados fueron %d y %d ", num1, num2);//Muestro en pantalla los valores ingresados

	return 0;
}
