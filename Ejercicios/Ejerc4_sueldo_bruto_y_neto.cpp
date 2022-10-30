/*4. Escribe un programa que pida a un empleado su sueldo por hora e imprima su
sueldo bruto y sueldo neto sabiendo que la tasa de descuento es de 0.25*/

#include <stdio.h>

int main (){
	float sueldoNeto, sueldoBruto, sueldoDescuento, tasaDescuento;
	tasaDescuento = 0.25;
	
	printf ("Ingrese su sueldo por hora: \n");
	scanf ("%f", &sueldoBruto);
	
	sueldoBruto = (sueldoBruto * 8) * 7;
	sueldoDescuento = sueldoBruto * tasaDescuento;
	
	sueldoNeto = sueldoBruto - sueldoDescuento;
	
	printf ("Su sueldo bruto fue de: $%.2f \n", sueldoBruto);
	printf ("Y su sueldo de descuento fue de: $%.2f \n", sueldoDescuento);
	printf ("Y su sueldo de neto fue de: $%.2f \n", sueldoNeto);	
	
}
