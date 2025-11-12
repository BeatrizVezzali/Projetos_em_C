#include <stdio.h>
int main(){
	int v[5] = {10,20,30,40,50};
	int *p =v;
	printf("%d", *(p+2));
	return 0;
}