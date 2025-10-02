#include <stdio.h>
void funcao(){
	int x = 10;//Variável local em funcao()
	printf("Endereco da variavel local em funcao(): %p\n",(void*)&x);
}
int main(){
	int y = 20;//Variável local em main()
	printf("Endereco da variavel local em main(): %p\n",(void*)&y);
	
	funcao();
	return 0;
}