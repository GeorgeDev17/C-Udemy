/*6. escriba un programa que reciba por teclado una cantidad de dolares y escriba por pantalla
su equivalencia en pesos

1 USD = 19.86 MXN */

#include <stdio.h>

int main (){
	float dolar, peso_Mxn, val_Dolar;
	
	printf ("Ingrese la cantidad de dolares a convertir: \n");
	scanf ("%f", &dolar);
	
	val_Dolar = 19.86; //1 Dólar = 19.86 Pesos Mexicanos
	peso_Mxn = dolar * val_Dolar;
	
	printf ("La equivalencia de $%.0f dolares en peso mexicano es $%.0f pesos \n", dolar, peso_Mxn);
	
	return 0;
}
