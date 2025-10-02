#include <stdio.h>
void contador(){
	static int x = 0;//Variável estática ? Mantida entre chamadas
	int y = 0;//Variável local normal
	x++;
	y++;
	printf("x(estatica) = %d | y(local) + %d\n",x,y);
}
int main(){
	 contador();
	 contador();
	 contador();
	 return 0;
}