#include <stdio.h>

int main()
{
	int a;
	float PI=3.14159/3;
	float radio,lado1,lado2,altura,resultado;
	printf("MENU CALCULAR:\n1-Volumen del cono\n2-Volumen del octoedro\n");
	scanf("%d",&a);
	switch(a)
		{
		case 1:
			printf("introduzca el radio\n");
			scanf("%f",&radio);
			printf("introduzca la altura\n");
			scanf("%f",&altura);
			resultado=radio*radio*altura;
			resultado=PI*resultado;
			printf("El resultado es = %f metros cubicos\n",resultado);
		break;
		case 2:
			printf("introduzca el lado1\n");
			scanf("%f",&lado1);
			printf("introduzca el lado2\n");
			scanf("%f",&lado2);
			printf("introduzca la altura\n");
			scanf("%f",&altura);
			resultado=lado1*lado2*altura;
			printf("El resultado es = %f metros cubicos\n",resultado);
		break;
		default:printf("operacion erronea\n");
		}
return 0;
}
