#include <stdio.h>
int main(){
	int a = 4, b = 9;
	int *p = &a;
	int *q = &b;
	*p = *q;
	printf("%d %d", a, b);
	return 0;
}