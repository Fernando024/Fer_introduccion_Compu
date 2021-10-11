#include <stdio.h>
//Sumaremos dos nuemeros ingresados por el usuario
int main(void)
{
	//Declaracion de variables
	int Numero1, Numero2, Resultado;

	printf("SUMA DE DOS NUMEROS\n");
	//Lectura de datos
	printf("\nIngrese el primer numero:\n");
	scanf_s("%d", &Numero1);//Entrada de dato tipo numerico Numero1
	printf("\nIngrese el segundo numero:\n");
	scanf_s("%d", &Numero2);//Entrada de dato tipo numerico Numero2

    //Operacion 
	Resultado = Numero1 + Numero2;

	//Resultado de la opereacion (Suma)
	printf("\nEl resultado de la suma es:\n");
	printf("============================\n");
	printf("%d\n", Resultado);

}