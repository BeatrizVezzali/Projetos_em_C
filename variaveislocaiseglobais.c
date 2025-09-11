#include <stdio.h>
int a;
int vezesx(){
	int x = a;
	a = 4;
	return 2*x;
}

int main(){
	int x = 5;
	a = 1;
	printf("%d %d %d\n",vezesx(),x,a);
	return 0;
}