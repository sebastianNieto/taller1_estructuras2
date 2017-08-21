/* Estilos de ubicacion, color y marco
*  Fecha 21/08/2017
*  Elaborado por: John Sebastian Nieto gil 
*  Elaborado por: Ricardo Andres Villalobos
*/


void gotoxy(int x, int y);
void dibujaRectangulo(int superiorX, int superiorY, int inferiorX, int inferiorY, char marco);
void color(int n);

//Ubica la posición del cursor
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//Dibuja un marco en pantalla
void dibujaRectangulo(int superiorX, int superiorY, int inferiorX, int inferiorY, char marco = '\260')
{
	int x1,x2,i;
	x1=superiorX;
	x2=inferiorX;
	i = superiorX;
	for(i;i<=inferiorX;i++)
	{
		gotoxy(x1,superiorY);
		printf("%c", marco);
		gotoxy(x2,inferiorY);
		printf("%c", marco);
		x1++;
		x2--;
	}
	x1=superiorY;
	x2=inferiorY;
	i = superiorY;
	for(i;i<=inferiorY;i++)
	{
		gotoxy(superiorX,x1);
		printf("%c", marco);
		gotoxy(inferiorX,x2);
		printf("%c", marco);
		x1++;
		x2--;
	}
	
}

//Cambia el color de la letra
void color(int n)
{ 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n); 
} 
