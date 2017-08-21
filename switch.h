/* Ejercicios implementando un switch
*  Fecha 21/08/2017
*  Elaborado por: John Sebastian Nieto gil 
*  Elaborado por: Ricardo Andres Villalobos
*/
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
	switch(vocal)
	{
		case 'a':
		{
			printf("El codigo acssi es : 97");
			break;
		}
		case 'e':
		{
			printf("El codigo acssi es : 101");
			break;
		}
		case 'i':
		{
			printf("El codigo acssi es : 105");
			break;
		}
		case 'o':
		{
			printf("El codigo acssi es : 111");
			break;
		}
		case 'u':
		{
			printf("El codigo acssi es : 117");
			break;
		}
		case 'A':
		{
			printf("El codigo acssi es : 65");
			break;
		}
		case 'E':
		{
			printf("El codigo acssi es : 69");
			break;
		}
		case 'I':
		{
			printf("El codigo acssi es : 73");
			break;
		}
		case 'O':
		{
			printf("El codigo acssi es : 79");
			break;
		}
		case 'U':
		{
			printf("El codigo acssi es : 85");
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
			printf("El codigo ascii es : 48");
			break;
		}
		case '1':
		{
			printf("El codigo ascii es : 49");
			break;
		}
		case '2':
		{
			printf("El codigo ascii es : 50");
			break;
		}
		case '3':
		{
			printf("El codigo ascii es : 51");
			break;
		}
		case '4':
		{
			printf("El codigo ascii es : 52");
			break;
		}
		case '5':
		{
			printf("El codigo ascii es : 53");
			break;
		}
		case '6':
		{
			printf("El codigo ascii es : 54");
			break;
		}
		case '7':
		{
			printf("El codigo ascii es : 55");
			break;
		}
		case '8':
		{
			printf("El codigo ascii es : 56");
			break;
		}
		case '9':
		{
			printf("El codigo ascii es : 57");
			break;
		}
		default:
		{
			printf("Numero no valido");
			break;
		}
	}
}
