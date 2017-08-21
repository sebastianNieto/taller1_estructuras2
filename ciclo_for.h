/* Ejercicios implementando el ciclo For
*  Fecha 21/08/2017
*  Elaborado por: John Sebastian Nieto gil 
*  Elaborado por: Ricardo Andres Villalobos
*/


void tabla_multiplicar(int);
int factorial(int);
void fibonacci(int);

//Imprime las tablas de multiplicar de un número, del 1 al 20
void tabla_multiplicar(int numero)
{
	short i;
	int producto;
	
	producto = 0;
	
	for(i=1; i<=20; i++)
	{
		producto = numero*i;
		gotoxy(31,i+6);printf("%d X %d = %d \n", numero, i, producto);
	}
}

//Retorna el factorial de un número dado
int factorial(int numero)
{
	int i, factorial;
	
	factorial = 1;
	
	for(i=numero; i>=1; i--)
	{
		factorial = factorial*i;
	}
	
	return factorial;
	
	return 0;
}

//imprime los números de Fibonacci hasta la cantidad especificada
void fibonacci(int numero)
{
	int i, fibbo, anterior, actual;
	
	fibbo = 1;
	anterior = 1;
	actual = 0;
	
	for(i=1; i<=numero; i++)
	{
		fibbo = anterior + actual;
		anterior = actual;
		actual = fibbo;
		printf("%d,",fibbo);
	}
}
