/*3. Escribe un programa que pida 2 números y muestre su suma
Ejemplo 3 + 5 = 8 */ 

#include <stdio.h>

int main(){
	int num1, num2, suma;//defino las variables como tipo decimal
	
	printf ("Ingrese el primer numero: ");//Muestro el mensaje por pantalla 
	scanf ("%d", &num1);//recibo el primer numero ingresado por teclado
	printf ("Ingrese el segundo numero: ");
	scanf ("%d", &num2);//recibo el segundo numero ingresado por teclado
	
	suma = num1 + num2; //asigno la variable que evaluara la suma entre num1 y num2
	
	printf ("El resultado de la suma de %d + %d = %d", num1, num2, suma); 
	//devuelve en pantalla el resultado de la suma
	
	return 0;
}
