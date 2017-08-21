/* Ejercicios implementando el ciclo while
*  Fecha 21/08/2017
*  Elaborado por: John Sebastian Nieto gil 
*  Elaborado por: Ricardo Andres Villalobos
*/


int sumar_numeros();
int sumar_pares();
int sumar_impares();

//Sumar los n�meros del 1 al 100
int sumar_numeros()
{
	short numero, suma;
	
	numero = 1;
	suma = 0;
	
	while(numero <= 100)
	{
		suma = suma+numero;
		numero++;
	}
	
	return suma;
}

//Sumar los n�meros pares del 1 al 50
int sumar_pares()
{
	short numero, suma;
	
	numero = 1;
	suma = 0;
	
	while(numero <= 50)
	{
		if(numero%2 == 0)
		{
			suma = suma+numero;
		}
		numero++;
	}
	
	return suma;
};

//Sumar los n�meros impares del 1 al 50
int sumar_impares()
{
	short numero, suma;
	
	numero = 1;
	suma = 0;
	
	while(numero <= 50)
	{
		if(numero%2 != 0)
		{
			suma = suma+numero;
		}
		numero++;
	}
	
	return suma;
}
