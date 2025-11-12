#include <stdio.h>
int main(){
	int a = 5, b = 10;
	int *p1 = &a, *p2 = &b;
	*p1 = *p2;
	printf("%d", a);
	return 0;
}