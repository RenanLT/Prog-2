//Exer. 2 - Faça um prog em C para ler um vetor de 1- numeros e imprimir o maior numero lido
// Supondo que os numeros anteriores sao notas, calcule a media da turma e quantos alunos
// tiraram nota acima desta media calculada.

#include <stdio.h>


int main()
{
	int notas[10],i, media=0,total=0,soma=0;
	
	for(i=0;i<10;i++)
	{
		printf("Digite a nota:");
		scanf("%d", &notas[i]);	
		
		soma = notas[i] + soma;
	}
	
		media = soma/10;
		
	for(i=0;i<10;i++)
	{	
		if(notas[i] >= media)
		{
			total ++;
		}
	}
		printf("Media da turma = %d", media);
		printf(" Quantidade de alunos acima da media = %d", total);
		
		
	return 0;	
}
		
		
		
		
		
		
		
		
		
