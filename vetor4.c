#include <stdio.h>
int main(){
	int v[3] = {1,2,3};
	int *p = v;
	printf("%d", *(p + 1) + *(p + 2) );
	return 0;
}