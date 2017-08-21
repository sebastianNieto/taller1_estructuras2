/* Ejercicios implementando un switch
*  Fecha 21/08/2017
*  Elaborado por: John Sebastian Nieto gil 
*  Elaborado por: Ricardo Andres Villalobos
*/
#include<ctype.h>
void mes_sistema(unsigned short);
void vocal_ascii(char);
void numero_ascii(char);

//muestra el nombre del mes según su numero
void mes_sistema(unsigned short mes)
{
	switch(mes)
	{
		case 1:
		{
			printf("El mes actual es Enero");
			break;
		}
		case 2:
		{
			printf("El mes actual es Febrero");
			break;
		}
		case 3:
		{
			printf("El mes actual es Marzo");
			break;
		}
		case 4:
		{
			printf("El mes actual es Abril");
			break;
		}
		case 5:
		{
			printf("El mes actual es Mayo");
			break;
		}
		case 6:
		{
			printf("El mes actual es Junio");
			break;
		}
		case 7:
		{
			printf("El mes actual es Julio");
			break;
		}
		case 8:
		{
			printf("El mes actual es Agosto");
			break;
		}
		case 9:
		{
			printf("El mes actual es Septiembre");
			break;
		}
		case 10:
		{
			printf("El mes actual es Octubre");
			break;
		}
		case 11:
		{
			printf("El mes actual es Noviembre");
			break;
		}
		case 12:
		{
			printf("El mes actual es Diciembre");
			break;
		}
		default:
		{
			printf("Numero no valido");
			break;
		}
	
	}
	
}

//-----------------------------------------------------------------------------------
//Los  2 ejercicios siguientes se pueden realizar de una forma mucho mas simplificada
//pero se realizaron de esta forma ya que se requeria que fuera con un switch
//------------------------------------------------------------------------------------


//Muestra el codigo ascii de una vocal
void vocal_ascii(char vocal)
{
	switch(tolower(vocal))
	{
		case 'a':
		{
			printf("El codigo acssi es : %d", vocal);
			break;
		}
		case 'e':
		{
			printf("El codigo acssi es : %d", vocal);
			break;
		}
		case 'i':
		{
			printf("El codigo acssi es : %d", vocal);
			break;
		}
		case 'o':
		{
			printf("El codigo acssi es : %d", vocal);
			break;
		}
		case 'u':
		{
			printf("El codigo acssi es : %d", vocal);
			break;
		}
		default:
		{
			printf("No es una vocal");
			break;
		}
	
	}
}

//Muestra el codigo ascii de un numero
void numero_ascii(char numero)
{
	switch(numero)
		{
		case '0':
		{
			printf("El codigo ascii es : %d", numero);
			break;
		}
		case '1':
		{
			printf("El codigo ascii es : %d", numero);
			break;
		}
		case '2':
		{
			printf("El codigo ascii es : %d", numero);
			break;
		}
		case '3':
		{
			printf("El codigo ascii es : %d", numero);
			break;
		}
		case '4':
		{
			printf("El codigo ascii es : %d", numero);
			break;
		}
		case '5':
		{
			printf("El codigo ascii es : %d", numero);
			break;
		}
		case '6':
		{
			printf("El codigo ascii es : %d", numero);
			break;
		}
		case '7':
		{
			printf("El codigo ascii es : %d", numero);
			break;
		}
		case '8':
		{
			printf("El codigo ascii es : %d", numero);
			break;
		}
		case '9':
		{
			printf("El codigo ascii es : %d", numero);
			break;
		}
		default:
		{
			printf("Numero no valido");
			break;
		}
	}
}
