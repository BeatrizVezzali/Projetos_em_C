#include <stdio.h>
void f1(){
	int a = 10;
	printf("Endereco de a em f1(): %p\n",(void*)&a);
}
void f2(){
	int b = 20;
	printf("Endereco de b em f2(): %p\n",(void*)&b);
}
int main(){
	f1();
	f2();
	return 0;
}