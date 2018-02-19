#include <stdio.h>


int main()
{
	int maior[10],i, maiorr=0;
	
	for(i=0;i<10;i++)
	{
		printf("Digite um numero:");
		scanf("%d", &maior[i]);	
	}
	
	for(i=0;i<10;i++)
	{
		if(i > maiorr)
		
		maiorr = i;	
	}
	
	printf(" Maior valor: %d", maiorr);
	
		
return 0;	
}

