#include <stdio.h>
struct Pessoa{
	int idade;
	float altura;
};
struct Pessoa global = {30,1.80};

int main(){
	struct Pessoa local = {20,1.70};
	printf("Endereco global.idade: %p\n",(void*)&global.idade);
	printf("Endereco global.altura: %p\n",(void*)&global.altura);
	
	printf("Endereco local.idade: %p\n",(void*)&local.idade);
	printf("Endereco local.altura: %p\n",(void*)&local.altura);
	return 0;
}
