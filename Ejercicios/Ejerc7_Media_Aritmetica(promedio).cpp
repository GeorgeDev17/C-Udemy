/*7. Desarrolle un programa que calcule y escriba la media aritmetica (promedio) de 3 numeros enteros 
leidos por teclado*/

#include <stdio.h>

int main(){
	int num1, num2, num3;
	float prom;
	
	printf ("Ingrese el primer numero entero \n");
	scanf ("%d", &num1);
	
	printf ("Ingrese el segundo numero entero \n");
	scanf ("%d", &num2);
	
	printf ("Ingrese el tercer numero entero \n");
	scanf ("%d", &num3);
	
	int suma = (num1 + num2 + num3);
	//Float entre parentesis permite cambiar el resultado entero de la división a tipo flotante
	prom = (float)suma / 3; 
	
	printf ("El promedio de %d + %d + %d es igual a: %f", num1, num2, num3, prom);
	
	return 0;
}
