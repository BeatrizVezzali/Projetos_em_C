#include <stdio.h>
int global = 100;//Variável global ? Área de dados (Não está na Stack)
int main(){
	int local = 200;//Variável local (Está na Stack)
	printf("Endereco da variavel global: %p\n",(void*)&global);
	printf("Endereco da variavel local: %p\n",(void*)&local);
	return 0;
}