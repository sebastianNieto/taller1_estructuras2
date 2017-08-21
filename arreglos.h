/* Ejercicios que implementan un arreglo o mas
*  Fecha 21/08/2017
*  Elaborado por: John Sebastian Nieto gil 
*  Elaborado por: Ricardo Andres Villalobos
*/

int potencia(int, int);
void arreglo_decimales();
void arreglo_ceros_unos(int, int);
void ingresar_arreglo(int [][4], int);
void arreglo_potencia(int [][4], int);

//Retorna el numero elevado al exponente ingresado
int potencia(int numero, int exp)
{
	int result = 1;
	for (int i = 1; i <= exp; i++)
		result = result*numero;
	
	return result;
}

//Imprime un arreglo de números decimales
void arreglo_decimales()
{
	short i;
	float numeros[4] = {32.583, 11.239, 45.781, 22.237};
	
	for(i=0; i<=3; i++)
	{
		gotoxy(35,i+13);printf("%.3f", numeros[i]);
	}
}


//Imprime arreglo de 0 y 1, según las dimensiones especifucadas en los parametros
void arreglo_ceros_unos(int numA, int numB)
{
	short i, j, k;
	int numeros[numA][numB];
	
	for(i=0; i<numA; i++)
	{
		for(j=0; j<numB; j++)
		{
			numeros[i][j] =  rand()%2;
		}
	}
	
	for(i=0; i<numA; i++)
	{
		k=18;
		for(j=0; j<numB; j++)
		{
			gotoxy(k,11+i);printf("%d ", numeros[i][j]);
			k+=2;
		}
	}
}

//Ingresar los valores de la primera columna para el arreglo 4X4 potencia
void ingresar_arreglo(int arreglo[][4], int cant)
{
	short i;
	gotoxy(19,4);printf("Ingrese los 4 valores para el arreglo");
	for(i=0; i<cant; i++)
	{
		gotoxy(19,6+i);printf("ingrese el valor %d: ", i+1);
		scanf("%d", &arreglo[i][0]);
	}
}

/* Imprimer un arreglo 4X4.
* Primera Columna ingresado por el usuario
* Segunda Columna el número elevado al cuadrado
* tercera Columna el número elevado al cubo
* Cuarta Columna el número elevado a la cuarta
*/
void arreglo_potencia(int arreglo[][4], int cant)
{
	short i, j, k;
	
	for(i=0; i< cant ; i++)
	{
		k=19;
		for(j=0; j<=3; j++)
		{
			arreglo[i][j] = potencia(arreglo[i][0],j+1);
			gotoxy(k,14+i);printf("%d", arreglo[i][j]);
			k+=8;
		}
	}
}
