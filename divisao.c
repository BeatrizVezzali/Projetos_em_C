#include <stdio.h>
int main(){
	int num = 100;
	int *p = &num;
	printf("%d", *p / 10);
	return 0;
}