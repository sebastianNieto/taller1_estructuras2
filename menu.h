/* Menu de opciones del contenido
*  Fecha 21/08/2017
*  Elaborado por: John Sebastian Nieto gil 
*  Elaborado por: Ricardo Andres Villalobos
*/

//Muestra un menu con opciones en pantalla 
void menu(){
	
	unsigned short opcion, subOpcion, i, j, mes;
	int numero, numA, numB, matriz[3][3], cant;
	char vocal, cNumero;
	
	//opcion = 1;
	do
	{
		//subOpcion = 1;
		system("cls");
		dibujaRectangulo(2,2,78,23);
		gotoxy(36,4);printf("MENU \n");
		gotoxy(31,6);printf("1. Ciclo While \n");
		gotoxy(31,7);printf("2. Ciclo For \n");
		gotoxy(31,8);printf("3. Array \n");
		gotoxy(31,9);printf("4. Switch \n");
		gotoxy(31,10);printf("5. Matrices \n");
		gotoxy(31,11);printf("6. Estructuras \n");
		gotoxy(31,12);printf("0. Salir \n");
		gotoxy(31,14);printf("Ingrese la opcion: ");
		scanf("%d", &opcion);
		switch(opcion)
		{
			case 0:
			{
				break;
			}
			case 1:
			{
				do
				{
					system("cls");
					dibujaRectangulo(2,2,78,23);
					gotoxy(32,4);printf("Ciclo While \n");
					gotoxy(20,6);printf("1. Sumar numeros del 1 al 100 \n");
					gotoxy(20,7);printf("2. Sumar numeros pares del 1 al 50 \n");
					gotoxy(20,8);printf("3. Sumar numeros impares del 1 al 50 \n");
					gotoxy(20,9);printf("0. Salir \n");
					gotoxy(20,11);printf("Ingrese la opcion : ");
					scanf("%d", &subOpcion);
					
					switch(subOpcion)
					{
						case 0:
						{
							opcion = 1;
							break;
						}
						case 1:
						{
							gotoxy(25, 14);printf("Sumatoria del 1 al 100 = %d", sumar_numeros());
							getch();
							break;
						}
						case 2:
						{
							gotoxy(22, 14);printf("Sumatoria pares del 1 al 50 = %d", sumar_pares());
							getch();
							break;
						}
						case 3:
						{
							gotoxy(21, 14);printf("Sumatoria impares del 1 al 50 = %d", sumar_impares());
							getch();
							break;
						}
						default:
						{
							gotoxy(30,13);printf("Numero no valido");
							getch();
							break;
						}
					}
				}while(subOpcion != 0);
				break;
			}
			case 2:
			{
				do
				{
					system("cls");
					dibujaRectangulo(2,2,78,23);
					gotoxy(33,4);printf("Ciclo For \n");
					gotoxy(19,6);printf("1. tablas de multiplicar de un numero \n");
					gotoxy(19,7);printf("2. Factorial de un numero \n");
					gotoxy(19,8);printf("3. Numeros de fibonacci \n");
					gotoxy(19,9);printf("0. Salir \n");
					gotoxy(19,11);printf("Ingrese la opcion : ");
					scanf("%d", &subOpcion);
					
					switch(subOpcion)
					{
						case 0:
						{
							opcion = 1;
							break;
						}
						case 1:
						{
							system("cls");
							dibujaRectangulo(2,2,78,28);
							gotoxy(31,4);printf("Ingrese el numero ");
							scanf("%d", &numero);
							tabla_multiplicar(numero);
							getch();
							break;
						}
						case 2:
						{
							gotoxy(29,14);printf("Ingrese el numero ");
							scanf("%d", &numero);
							gotoxy(29,16);printf("%d! = %d \n",numero, factorial(numero));
							getch();
							break;
						}
						case 3:
						{
							gotoxy(22,14);printf("Ingrese la cantidad de terminos ");
							scanf("%d", &numero);
							gotoxy(22,16);fibonacci(numero);
							getch();
							break;
						}
						default:
						{
							gotoxy(30,13);printf("Numero no valido");
							getch();
							break;
						}
					}
				}while(subOpcion != 0);
				break;
			}
			case 3:
			{
				do
				{
					system("cls");
					dibujaRectangulo(2,2,78,23);
					gotoxy(35,4);printf("Array \n");
					gotoxy(21,6);printf("1. Mostrar array numeros decimales \n");
					gotoxy(21,7);printf("2. Mostrar array de 0 y 1 \n");
					gotoxy(21,8);printf("3. array 4X4 (cuadrado, cubo, cuarta) \n");
					gotoxy(21,9);printf("0. Salir \n");
					gotoxy(21,11);printf("Ingrese la opcion : ");
					scanf("%d", &subOpcion);
					
					switch(subOpcion)
					{
						case 0:
						{
							opcion = 1;
							break;
						}
						case 1:
						{
							arreglo_decimales();
							getch();
							break;
						}
						case 2:
						{
							system("cls");
							dibujaRectangulo(2,2,78,23);
							gotoxy(18,4);printf("Ingrese los dos valores para el arreglo \n");
							gotoxy(18,6);scanf("%d", &numA);
							gotoxy(18,7);scanf("%d", &numB);
							gotoxy(18,9);printf("Resultado \n \n");
							arreglo_ceros_unos(numA, numB);
							getch();
							break;
						}
						case 3:
						{
							int arreglo[4][4];
							system("cls");
							dibujaRectangulo(2,2,78,23);
							ingresar_arreglo(arreglo,4);
							gotoxy(19,12);printf("Resultado \n \n");
							arreglo_potencia(arreglo, 4);
							getch();
							break;
						}
						default:
						{
							gotoxy(30,13);printf("Numero no valido");
							getch();
							break;
						}
					}
				}while(subOpcion != 0);
				break;
			}
			case 4:
			{
				do
				{
					system("cls");
					dibujaRectangulo(2,2,78,23);
					gotoxy(35,4);printf("Switch \n");
					gotoxy(24,6);printf("1. Consultar mes del sistema \n");
					gotoxy(24,7);printf("2. Codigo ascii de vocal \n");
					gotoxy(24,8);printf("3. Codigo ascii de numero \n");
					gotoxy(24,9);printf("0. Salir \n");
					gotoxy(24,11);printf("Ingrese la opcion : ");
					scanf("%d", &subOpcion);
					
					switch(subOpcion)
					{
						case 0:
						{
							opcion = 1;
							break;
						}
						case 1:
						{
							// fecha/hora actual basado en el sistema actual 
							time_t now = time(0);
							// Objeto de una estructura tm con fecha/hora local 
							tm * time = localtime(&now);
							
							mes = time->tm_mon+1;
							gotoxy(23,16);mes_sistema(mes);
							getch();
							break;
						}
						case 2:
						{
							gotoxy(28,14);printf("Ingrese la vocal: ");
							scanf("%*c %c", &vocal);
							gotoxy(28,16);vocal_ascii(vocal);
							getch();
							break;
						}
						case 3:
						{
							gotoxy(23,14);printf("Ingrese un numero del 0 al 9: ");
							scanf("%*c %c", &cNumero);
							gotoxy(23,16);numero_ascii(cNumero);
							getch();
							break;
						}
						default:
						{
							gotoxy(30,13);printf("Numero no valido");
							getch();
							break;
						}
					}
				}while(subOpcion != 0);
				break;
			}
			case 5:
			{
				do
				{
					system("cls");
					dibujaRectangulo(2,2,78,23);
					gotoxy(34,4);printf("Matrices \n");
					gotoxy(9,6);printf("1. Matriz 3X3 (usuario completa valores)\n");
					gotoxy(9,7);printf("2. Matriz 3X3 automatica por el sistema \n");
					gotoxy(9,8);printf("3. Matriz 3X3 automatica con numeros primos por el sistema \n");
					gotoxy(9,9);printf("0. Salir \n");
					gotoxy(9,11);printf("Ingrese la opcion : ");
					scanf("%d", &subOpcion);
					
					switch(subOpcion)
					{
						case 0:
						{
							opcion = 1;
							break;
						}
						case 1:
						{
							int matriz[3][3];
							obtener_datos_matriz(matriz, 3);
							gotoxy(23,10);printf("Resultado: ");
							matriz_valores(matriz, 3);
							getch();
							break;
						}
						case 2:
						{
							int matriz[3][3];
							completar_matriz_automatica(matriz, 3);
							matriz_automatica(matriz, 3);
							getch();
							break;
						}
						case 3:
						{
							int matriz[3][3];
							obtener_primos(matriz, 3);
							matriz_primos(matriz, 3);
							getch();
							break;
						}
						default:
						{
							gotoxy(30,13);printf("Numero no valido");
							getch();
							break;
						}
					}
				}while(subOpcion != 0);
				break;
			}
			case 6:
			{
				do
				{
					system("cls");
					dibujaRectangulo(2,2,78,23);
					gotoxy(32,4);printf("Estructuras \n");
					gotoxy(16,6);printf("1. Alumnos ordenados por promedio \n");
					gotoxy(16,7);printf("2. Competidor y categoria \n");
					gotoxy(16,8);printf("3. Estructura anidada (datos y notas 1 alumno) \n");
					gotoxy(16,9);printf("4. Estructura anidada (datos y notas N alumno) \n");
					gotoxy(16,10);printf("0. Salir \n");
					gotoxy(16,12);printf("Ingrese la opcion : ");
					scanf("%d", &subOpcion);
					
					switch(subOpcion)
					{
						case 0:
						{
							opcion = 1;
							break;
						}
						case 1:
						{
							gotoxy(16,15);printf("Ingrese la cantidad de alumnos ");
							scanf("%d", &cant);
							system("cls");
							alumnos_orden_promedio(cant);
							getch();
							break;
						}
						case 2:
						{
							system("cls");
							dibujaRectangulo(2,2,78,23);
							datos_competidor();
							muestra_competidor();
							getch();
							break;
						}
						case 3:
						{
							system("cls");
							dibujaRectangulo(2,2,78,23);
							datos_alumno();
							muestra_alumno();
							getch();
							break;
						}
						case 4:
						{
							gotoxy(16,15);printf("Ingrese la cantidad de alumnos ");
							scanf("%d", &cant);
							system("cls");
							alumno_promedio_varios(cant);
							system("pause");
							break;
						}
						default:
						{
							gotoxy(30,13);printf("Numero no valido");
							getch();
							break;
						}
					}
				}while(subOpcion != 0);
				break;
			}
			default:
			{
				gotoxy(30,13);printf("Numero no valido");
				getch();
				break;
			}
		}
	}while(opcion != 0);
}
