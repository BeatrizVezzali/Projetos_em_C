#include <stdio.h>
void recursiva(int n){
	int x = n;
	printf("Chamada %d ? endereco de x: %p\n", n,(void*)&x);
	if(n>0){
		recursiva(n-1);
	}
}
int main(){
	recursiva(5);
	return 0;
}