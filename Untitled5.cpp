#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int i , num1 , mult;
	
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	
	for (i = 1 ; i <= 10 ; i++){
		
		mult = i * num1;
		
		printf("\n %d * %d = %d",i, num1, mult);
		
		
		}
		
}