/*5. Desarrolle un programa que lea de teclado dos numeros enteros y los almacene en dos variables
de tipo int. Posteriormente debera intercambiar los valores almacenados en dichas variables y finalmente
debera escribir el valor almacenados en cada una de ellas.*/

#include <stdio.h>

int main (){
	int num1, num2;
	printf ("Ingrese un valor entero: \n");
	scanf ("%d", &num1);
	printf ("Ingrese otro valor entero: \n");
	scanf ("%d", &num2);
	
	printf ("El primer valor ingresado fue: %d \n", num1);
	printf ("El segundo valor ingresado fue: %d \n", num2);	
	
	printf ("Al intercambiar sus valores obtenemos que: \n");
	
	int aux = num1; //Mantiene el valor ingresado de num1
	num1 = num2; //Reemplaza el valor de num1 por el num2 ingresado por tecla
	num2 = aux; //Toma el valor almacenado en la variable aux de num1 el cual no sufrio modificación
	
	printf ("El primer valor ahora es: %d \n", num1);
	printf ("y el segundo valor es: %d \n", num2);	
	
	return 0;
}
