#include <stdio.h>
int main(){
	int numero;
	printf("Digite um numero: ");
	scanf("%d",&numero);
	if(numero > 0){
		printf("Numero positivo.\n");
	}
	else{
		printf("Numero negativo.\n");
	}
	return 0;
}