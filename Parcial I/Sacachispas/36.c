/* 36. E.P. que lea 50 n�meros y que cuente e imprima cuantos son
negativos.
Equipo: SacaChispas

Integrantes:
Ricardo Nicol�s Canul Ibarra
Senaida Norely Chan Chan
Javier Alejandro Chim Cem�

Fecha: 7/feb/2019
Version: 1.0 */

#include <stdio.h>
#include <conio.h>

int main() {
	
	/*Creamos las variables necesarias para el programa*/
	int cont_numeros, cont_negativos;
	float numero_actual;
	
	/*Inicializamos el contador para los n�meros*/
	cont_numeros = 1;
	cont_negativos = 0;
	
	/*Creamos el ciclo while para la lectura de los 25 n�meros*/
	while (cont_numeros <= 10)
	{
		/*ENTRADA DE DATOS*/
		printf("\n\nInserte el %i� n�mero ", cont_numeros++);
		scanf("%f", &numero_actual);
		
		/*PROCESO para determinar si el n�mero insertado es negativo*/
		if (numero_actual < 0)
		{
			printf("\n\nEste n�mero es negativo");
			
			cont_negativos++;
		}
	}
	
	/*SALIDA DE DATOS*/
	printf("\n\nEl n�mero total de negaivos es: %i", cont_negativos);
	
	
	getch(); //Esperar un caracter del teclado
	
	return 0;
}
/*Revisado por: Compiladores_ Jafet Fernandez
Al usar un floatante se atora y falla
En general bien*/

