#include <stdio.h>
int main()
{
	int a;
	printf("Introduce una nota del 0-10:\n");
	scanf("%d",&a);
	switch(a)
		{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			printf("Suspenso\n");
		break;
		case 5:
		case 6:
			printf("Aprobado\n");
		break;
		case 7:
		case 8:
			printf("Notable\n");
		break;
		case 9:
		case 10:
			printf("Sobresaliente\n");
		break;
		default:printf("operacion erronea\n");
		}
return 0;
}
