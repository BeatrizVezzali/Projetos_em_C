#include <stdio.h>
int main(){
	int vet[5];
	for(int i=0; i<5; i++){
		printf("Endereco de vet[%d] = %p\n",i,(void*)&vet[i]);
	}
	return 0;
}