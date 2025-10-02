#include <stdio.h>
int vetGlobal[5];//Global --> Área de dados
int main(){
	int vetLocal[5];//Local --> Stack
	printf("Endereco vetGlobal: %p\n",(void*)vetGlobal);
	printf("Endereco vetLocal: %p\n",(void*)vetLocal);
	return 0;
}