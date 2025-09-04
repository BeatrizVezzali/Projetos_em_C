#include <stdio.h>
int soma(int a,int b){
	int c;
	c = a+b;
	return c;
}

int main(){
	int num1,num2,result;
	printf("Numeros a serem somados: ");
	scanf("%d",&num1);
	scanf("%d",&num2);
	result = soma(num1,num2);
	printf("Resultado: %d\n",result);
}