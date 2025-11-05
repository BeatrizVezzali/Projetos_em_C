#include <stdio.h>
#include <stdlib.h>
int main(){
	int * v;
	v = (int *) malloc(10*4);
	printf("\nEndereco alocado para o numero 40: %x",v);
	return 0;
}