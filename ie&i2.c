#include <stdio.h>
#include <stdlib.h>
int main(){
	int i = 123;
	printf("\n Valor de i: %d",i);
	printf("\n Endereco de i: %x",&i);
	int *end_i;
	printf("\n Endereco de end_i: %x",&end_i);
	end_i = &i;
	printf("\n Conteudo de end_i: %x",end_i);
	printf("\n Conteudo apontado em end_i: %d",*end_i);
	return 0;
}