#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_CTYPE, "Spanish");
	
	int n; //variable de tipo entero
	printf ("Ingrese un n�mero entero \n");
	scanf ("%d", &n); //Recibimos un dato por teclado y se lo asignamos a una variable
	printf ("N�mero entero: %d \n", n); //Mostrar por pantalla los valores ingresados por teclado
	
	float decimal; //Variable de tipo decimal
	printf ("Ingrese un n�mero decimal \n");
	scanf ("%f", &decimal);
	printf ("N�mero entero: %f \n", decimal); //Mostrar por pantalla los valores ingresados por teclado
	
	double decimal2; //Variable de tipo decimal
	printf ("Ingrese un n�mero decimal \n");
	scanf ("%lf", &decimal2);
	printf ("N�mero entero: %lf \n", decimal2); //Mostrar por pantalla los valores ingresados por teclado
	
	//limpiar buffer de entrada
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
		
	char letra;
	printf ("Ingrese una letra \n");
	scanf ("%c", &letra);
	printf ("letra: %c \n", letra); //Mostrar por pantalla los valores ingresados por teclado
		
	return 0;
}
