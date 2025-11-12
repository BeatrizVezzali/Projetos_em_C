#include <stdio.h>
int main(){
	int v[5] = {10,20,30,40,50};
	int *p = v + 2;
	printf("%d", *p);
	return 0;
}