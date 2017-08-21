/* Ejercicios que implementan estructuras
*  Fecha 21/08/2017
*  Elaborado por: John Sebastian Nieto gil 
*  Elaborado por: Ricardo Andres Villalobos
*/
#include <string.h>
void alumnos_orden_promedio(int cant);
void datos_competidor();
void muestra_competidor();
void datos_alumno();
void muestra_alumno();
void alumno_promedio_varios(int cant);


struct Alumno 
{
	char nombre[20];
	float nota1, nota2, nota3, promedio;
};

struct Competidores
{
	char nombre[20];
	unsigned short int edad;
	char sexo;
	char club[10];
}competidor;

struct Promedio
{
	float nota1,nota2,nota3;
};

struct AlumnoPromedio
{
	char nombre[20];
	unsigned short int edad;
	char sexo;
	struct Promedio promedio;
}alum;


//Ingresa datos de los alumnos y os imprime en orden de mejor promedio
void alumnos_orden_promedio(int cant)
{
	Alumno alumno[cant];
	int i,j,k;
	float promedioP, nota1P, nota2P, nota3P;
	char nombreP[20];
	
	for(i=0;i<cant;i++)
	{
		printf("Ingrese los datos del %d alumno \n", i+1);
		printf("nombre: ");
		scanf("%s", &alumno[i].nombre);
		printf("nota1: ");
		scanf("%2f", &alumno[i].nota1);
		printf("nota2: ");
		scanf("%2f", &alumno[i].nota2);
		printf("nota3: ");
		scanf("%2f", &alumno[i].nota3);
		alumno[i].promedio = (alumno[i].nota1 + alumno[i].nota2 + alumno[i].nota3)/3;
	}
	
	for(i=0;i<cant;i++)
	{
		for(j=0;j<cant;j++)
		{
			if(alumno[j].promedio < alumno[j+1].promedio)
			{
				strcpy(nombreP, alumno[j].nombre);
				promedioP=alumno[j].promedio;
				nota1P=alumno[j].nota1;
				nota2P=alumno[j].nota2;
				nota3P=alumno[j].nota3;
				
				strcpy(alumno[j].nombre, alumno[j+1].nombre);
				alumno[j].promedio = alumno[j+1].promedio;
				alumno[j].nota1 = alumno[j+1].nota1;
				alumno[j].nota2 = alumno[j+1].nota2;
				alumno[j].nota3 = alumno[j+1].nota3;
				
				
				strcpy(alumno[j+1].nombre, nombreP);
				alumno[j+1].promedio = promedioP;
				alumno[j+1].nota1 = nota1P;
				alumno[j+1].nota2 = nota2P;
				alumno[j+1].nota3 = nota3P;
			}
		}
	}
	printf("Alumnos: \n");
	for(int i=0;i<cant;i++)
	{
		printf("Nombre: %s \n", alumno[i].nombre);
		printf("Nota1: %.2f \n", alumno[i].nota1);
		printf("Nota2: %.2f \n", alumno[i].nota2);
		printf("Nota3: %.2f \n", alumno[i].nota3);
		printf("Promedio: %.2f \n \n", alumno[i].promedio);
	}
}

//Obtiene los datos del competidor
void datos_competidor()
{
	
	gotoxy(15,4);printf("ingrese el nombre del competidor: ");
	scanf("%s", &competidor.nombre);
	gotoxy(15,5);printf("ingrese la edad del competidor: ");
	scanf("%d", &competidor.edad);
	gotoxy(15,6);printf("ingrese el sexo del competidor: F-M: ");
	scanf("%*c %c", &competidor.sexo);
	gotoxy(15,7);printf("ingrese el club del competidor: ");
	scanf("%s", &competidor.club);
	
}

//Muestra los datos del competidor
void muestra_competidor()
{
	char categoria[8]; 
	
	if(competidor.edad <= 30)
	{
		if(competidor.edad <=15)
		{
			strcpy(categoria, "Infantil");
		}
		else
		{
			strcpy(categoria, "joven");
		}
	}
	else
	{
		strcpy(categoria, "Mayor");
	}
	
	gotoxy(15,9);printf("Los datos del competidor son:");
	gotoxy(15,11);printf("Nombre: %s \n", competidor.nombre);
	gotoxy(15,12);printf("Edad: %d \n", competidor.edad);
	gotoxy(15,13);printf("Sexo: %c \n", competidor.sexo);
	gotoxy(15,14);printf("Club: %s \n", competidor.club);
	gotoxy(15,15);printf("Categoria: %s \n", categoria);
}


//Obtiene los datos de un alumno
void datos_alumno()
{
	gotoxy(18,4);printf("Nombre del estudiante: ");
	scanf("%s",alum.nombre);
	gotoxy(18,5);printf("Edad del estudiante: ");
	scanf("%d", &alum.edad);
	gotoxy(18,6);printf("Sexo del estudiante: ");
	scanf("%*c %c", &alum.sexo);
	gotoxy(18,7);printf("Nota1 del estudiante: ");
	scanf("%f", &alum.promedio.nota1);
	gotoxy(18,8);printf("Nota2 del estudiante: ");
	scanf("%f", &alum.promedio.nota2);
	gotoxy(18,9);printf("Nota3 del estudiante: ");
	scanf("%f", &alum.promedio.nota3);
}

//Muestra los datos del alumno
void muestra_alumno()
{
	float promedio;
	
	gotoxy(18,11);printf("Datos del alumno");
	gotoxy(18,13);printf("Nombre del estudiante: %s \n", alum.nombre);
	gotoxy(18,14);printf("Sexo del estudiante: %c \n", alum.sexo);
	gotoxy(18,15);printf("Edad del estudiante: %d \n", alum.edad);
	gotoxy(18,16);printf("Nota1 del estudiante: %.2f \n", alum.promedio.nota1);
	gotoxy(18,17);printf("Nota2 del estudiante: %.2f \n", alum.promedio.nota2);
	gotoxy(18,18);printf("Nota3 del estudiante: %.2f \n", alum.promedio.nota3);
	promedio = (alum.promedio.nota1 + alum.promedio.nota2 + alum.promedio.nota3)/3;
	gotoxy(18,19);printf("Promedio del estudiante: %.2f \n", promedio);
}

//Obtiene los datos de n alumno y luego los imprime
void alumno_promedio_varios(int cant)
{
	AlumnoPromedio alumno[cant];
	int i,j;
	float promedio;
	
	for(i = 0; i < cant; i++)
	{
		printf("\nNombre del estudiante: ");
		scanf("%s", &alumno[i].nombre);
		printf("Edad del estudiante: ");
		scanf("%d", &alumno[i].edad);
		printf("Sexo del estudiante: ");
		scanf("%*c %c", &alumno[i].sexo);
		printf("Nota1 del estudiante: ");
		scanf("%f", &alumno[i].promedio.nota1);
		printf("Nota2 del estudiante: ");
		scanf("%f", &alumno[i].promedio.nota2);
		printf("Nota3 del estudiante: ");
		scanf("%f", &alumno[i].promedio.nota3);
	}
	
	printf("\n Datos de los alumnos \n \n");
	
	for(i = 0; i < cant; i++)
	{
		printf("Nombre del estudiante: %s \n", alumno[i].nombre);
		printf("Sexo del estudiante: %c \n", alumno[i].sexo);
		printf("Edad del estudiante: %d \n", alumno[i].edad);
		printf("Nota1 del estudiante: %.2f \n", alumno[i].promedio.nota1);
		printf("Nota2 del estudiante: %.2f \n", alumno[i].promedio.nota2);
		printf("Nota3 del estudiante: %.2f \n", alumno[i].promedio.nota3);
		promedio = (alumno[i].promedio.nota1 + alumno[i].promedio.nota2 + alumno[i].promedio.nota3)/3;
		printf("Promedio del estudiante: %.2f \n \n", promedio);
	}
}
