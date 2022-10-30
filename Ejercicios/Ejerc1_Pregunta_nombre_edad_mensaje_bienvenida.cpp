//1. Escribe un programa que le pregunte al usuario su nombre y edad, e imprima un mensaje de bienvenida

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_CTYPE, "Spanish");
	
	char nombre [10];
	int edad;
	
	printf ("Ingrese su nombre: \n");
	scanf ("%s", &nombre);
	printf ("Ingrese su edad: \n");
	scanf ("%d", &edad);
	
	printf ("Hola, bienvenido %s ¿cómo te sientes a los %d?", nombre, edad);
	
	return 0;
}
