//Fa�a uma fun��o em C que recebe 2 n�meros como parametros e retorna a soma destes 2 n�meros.

#include <stdio.h>
#include <stdlib.h>

int soma(int c, int d)
{
		int resp;
		resp = c + d;
		
		return resp;
}


int main()
{	
	int a,b,total;
	
	printf("Informe dois numeros:");
	scanf("%d %d", &a, &b);
	
	total= soma(a,b);
	
	printf("A soma e: %d\n\n",total);
	
system ("pause");
return 0;
}
