#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int i , notm = 0, notb = 1, med, som, nota;
	
	for(i = 1; i <= 10; i++){
	printf("Escreva 10 notas: ");
	scanf("%d", &nota);
	if(nota > notm){
		notm = nota;
	}
	else if(nota < notb){
		notb = nota;
	}
	som = som + i;
	med = som / 10;
	}
	printf("\nA soma é:  %d", som);
	printf("\nA média é:  %d", med);
	printf("\nA maior nota é:  %d", notm);
	printf("\nA menor nota é:  %d", notb);
}