#include<stdio.h>

int main(){
	
	int i, j, n;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		for(j = 0; j <= i - 1; j++){
			printf("%d ", i);
		}
	printf("\n");
	}
	
	
}
