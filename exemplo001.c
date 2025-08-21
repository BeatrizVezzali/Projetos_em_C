#include <stdio.h>
int main(){
	int v[] = {20,15,30,80,50,45,75,32,10,5};
	int i,resposta =-1,num;
	printf("Entre com o numero procurado:");
	scanf("%d",&num);
	printf("%d\n",num);
	i = 0;
	while(i < 10){
		if(v[i] == num){
			resposta = i;
			break;
		}
		i++;
	}
	printf("Posicao: %d",resposta);
	return 0;
}