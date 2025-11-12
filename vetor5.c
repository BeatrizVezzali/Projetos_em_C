#include <stdio.h>
int main(){
	int vetor[4] = {2,4,6,8};
	int *p = vetor;
	printf("%d", *(p + 3));
	return 0;
}