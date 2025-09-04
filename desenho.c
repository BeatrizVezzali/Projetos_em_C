#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void desenha(){
	int i;
	for(i=0;i<=10;i++)
	   printf(".");
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	desenha();
	printf("Usando procedimento");
	desenha();
	return 0;
}