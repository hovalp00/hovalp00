#include <stdio.h>
int main()
{
	int a,resultado;
	printf("Escribe un numero:\n");
	scanf("%d",&a);
	resultado=a%2;
		if(resultado==0)
			printf("Es par\n");
		else
			printf("Es impar\n");
return 0;
}
