#include <stdio.h>
#include <stdlib.h>
int main(){
	int tamanho = sizeof(int);
	printf("\nTamanho de um inteiro: %d",tamanho);
	int *v;
	v = (int *) malloc(10*tamanho);
	printf("\nEndereco alocado para 10 ints: %x conteudo: %d",v);
	printf("\nEndereco alocado para v[0]: %x conteudo: %d",&v[0],v[0]);
	printf("\nEndereco alocado para v[1]: %x conteudo: %d",&v[1],v[1]);
	printf("\nEndereco alocado para v[2]: %x conteudo: %d",&v[2],v[2]);
	printf("\nEndereco alocado para v[3]: %x conteudo: %d",&v[3],v[3]);
	printf("\nEndereco alocado para v[4]: %x conteudo: %d",&v[4],v[4]);
	printf("\nEndereco alocado para v[5]: %x conteudo: %d",&v[5],v[5]);
	printf("\nEndereco alocado para v[6]: %x conteudo: %d",&v[6],v[6]);
	printf("\nEndereco alocado para v[7]: %x conteudo: %d",&v[7],v[7]);
	printf("\nEndereco alocado para v[8]: %x conteudo: %d",&v[8],v[8]);
	printf("\nEndereco alocado para v[9]: %x conteudo: %d",&v[9],v[9]);
	return 0;
}