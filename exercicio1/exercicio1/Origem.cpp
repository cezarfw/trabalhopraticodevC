#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define VET 2


int main() {

	int var1 = 38, *ponteiro_var1;
	float var2 = 55.38, *ponteiro_var2;
	char var3[VET] = "C", *ponteiro_var3;

	ponteiro_var1 = &var1;
	ponteiro_var2 = &var2;
	ponteiro_var3 = var3;

	printf("\nOS VALORES ANTES DA ALTERACAO, COM OS DADOS SOLICITADOS NA ATIVIDADE\n\n");

	printf("Os dois ultimos digitos do RU: %d\n", var1);
	printf("Os quatro ultimos digitos do RU com virgula: %.2f\n", var2);
	printf("A primeira letra do meu nome (Cezar) eh: %s\n\n", var3);


	*ponteiro_var1 = 8990;
	*ponteiro_var2 = 89.90;
	char new_var3[VET] = "Z";
	memmove(ponteiro_var3, new_var3, sizeof(VET));

	printf("\nOS VALORES DEPOIS DA ALTERACAO\n\n");

	printf("Os dois ultimos digitos do RU: %d\n", var1);
	printf("Os quatro ultimos digitos do RU com virgula: %.2f\n", var2);
	printf("A primeira letra do meu nome (Cezar) eh: %s\n\n", var3);


	system("pause");
	return 0;
	exit(0);

	
}