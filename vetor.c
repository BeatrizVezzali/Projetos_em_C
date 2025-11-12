#include <stdio.h>
int main(){
	int numeros[8] = {4,8,12,16,20,24,28,32};
	int *p;
	p = numeros;
	printf("%d",p[4]);
	return 0;
}