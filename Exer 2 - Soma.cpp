//Faça uma função em C que recebe 2 números como parametros e retorna a soma destes 2 números.

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
