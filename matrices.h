/* Ejercicios que implementan matrices
*  Fecha 21/08/2017
*  Elaborado por: John Sebastian Nieto gil 
*  Elaborado por: Ricardo Andres Villalobos
*/

void obtener_datos_matriz(int[][3], int);
void matriz_valores(int [3][3]);
void completar_matriz_automatica(int [][3], int);
void matriz_automatica();
void obtener_primos();
void matriz_primos();
int numPrimo(int);

//Obtener los datos del usuario para la primer matriz
void obtener_datos_matriz(int matriz[][3], int cant)
{
	short i,j;
	for(i=0;i<cant;i++)
	{
		system("cls");
		dibujaRectangulo(2,2,78,23);
		gotoxy(23,4);printf("Ingrese los datos de la %d fila ", i+1);
		
		for(j=0;j<=2;j++)
		{
			gotoxy(23,6+j);scanf("%d", &matriz[i][j]);
		}
	}
}

//Imprime matriz 3X3 (Valores ingresados por el usuario)
void matriz_valores(int matriz[][3], int cant)
{
	unsigned short i,j,k,posicion, l;
	
	k = 1;
	posicion = 0;
	
	for(i=0;i < cant;i++)
	{
		l=23;
		for(j=0;j<=2;j++)
		{
			gotoxy(l,12+i);printf("%d", matriz[i][j]);
			posicion = posicion+k;
			l += 5;
			k++;
		}
	}
	
	gotoxy(23,16);printf("la suma de las posiciones es %d ", posicion);
}

//Ingresa valores aleatorios de 0 a 100 automaticamente
void completar_matriz_automatica(int matriz[][3], int cant)
{
	unsigned short i,j,aleatorio;
	
	for(i=0;i<cant;i++)
	{
		for(j=0;j<=2;j++)
		{
			aleatorio = rand()%101;
			matriz[i][j] = aleatorio;
		}
	}
}

//Imprimer matriz 3X3 (Valores automaticos)
void matriz_automatica(int matriz[][3], int cant)
{
	unsigned short i,j, k;
	
	for(i=0;i<=2;i++)
	{
		k=9;
		for(j=0;j<=2;j++)
		{
			gotoxy(k,14+i);printf("%d", matriz[i][j]);
			k+=4;
		}
	}
}

//Completa la matriz con los numeros primos automaticamente
void obtener_primos(int matriz[][3], int cant)
{
	unsigned short i,j,k;
	k = 2;
	
	for(i=0;i<cant;i++)
	{
		for(j=0;j<=2;j++)
		{
			matriz[i][j] = numPrimo(k);
			k = matriz[i][j]+1;
		}
		
	}
}

//Imprime matriz 3X3 (Valores primos automaticamente)
void matriz_primos(int matriz[][3], int cant)
{
	unsigned short i,j,m;
	
	for(i=0;i<cant;i++)
	{
		m=9;
		for(j=0;j<=2;j++)
		{
			gotoxy(m,14+i);printf("%d", matriz[i][j]);
			m+=4;
		}
			
	}
}

//retorna un numero primo iniciando desde el numero ingresado por parametro
int numPrimo(int num)
{
	int i, cont;
	bool esPrimo;
	cont;
	
	do
	{
		esPrimo = true;
		cont = 0;
		for(i=1;i<=num;i++)
		{
			if(num%i == 0)
			{
				cont++;
			}
			if(cont > 2)
			{
				break;
			}
		}
		
		if(cont != 2)
		{
			esPrimo = false;
			num++;
		}
	}
	while(!esPrimo);
	return num;
}
