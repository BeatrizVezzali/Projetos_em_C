#include <stdio.h>
int main(){
	int x = 7, *p = &x;
	*p = *p + 3;
	printf("%d", x);
	return 0;
}