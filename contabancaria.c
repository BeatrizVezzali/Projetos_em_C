#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int numero;
	double saldo;
}contabancaria;
void inicia(contabancaria* conta,int numero,double saldo){
	conta -> numero = numero;
	conta -> saldo = saldo;
}
void deposito(contabancaria* conta,double valor){
	conta -> saldo += valor;
}
void saque(contabancaria* conta,double valor){
	conta -> saldo -+ valor;
}
void imprime(contabancaria conta){
	printf("Numero: %d\n",conta.numero);
	printf("saldo: %f\n",conta.saldo);
}
int main(){
	contabancaria conta1;
	inicia(&conta1,1,0.00);
	printf("\n Antes da movimentacao: \n");
	imprime(conta1);
	deposito(&conta1,50.00);
	saque(&conta1,70.00);
	printf("\n Depois da movimentacao: \n");
	imprime(conta1);
	return 0;
}
