#include <stdio.h>
float produto(float num1,float num2){
	return num1 * num2;
}

int main(){
	float num1,num2;
	printf("Digite o primeiro numero: ");
	scanf("%f",&num1);
	printf("Digite o segundo numero: ");
	scanf("%f",&num2);
	printf("Resultado: %.2f\n",produto(num1,num2));
}