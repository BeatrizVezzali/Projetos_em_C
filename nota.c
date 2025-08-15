#include <stdio.h>
void avaliarNota(float nota){
	if(nota >= 7.0){
		printf("Aluno aprovado!\n");
	}
	else if(nota >= 5.0){
		printf("Aluno em recuperacao.\n");
	}
	else if(nota >= 0.0){
		printf("Aluno reprovado.\n");
	}
	else{
		printf("Nota invalida!\n");
	}
}

int main(){
	float nota;
	printf("Digite a nota do aluno(0 a 10): ");
	scanf("%f",&nota);
	avaliarNota(nota);
	return 0;
}