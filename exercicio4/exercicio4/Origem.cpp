#include<stdio.h>
#include<stdlib.h>

int main() {

	printf("\nRECEBENDO DADOS DO ALUNO\n\n");

	struct aluno
	{
		char nome[50];
		int ru;
	}; struct aluno dados, *ptr_dados_aluno;

	ptr_dados_aluno = &dados;

	printf("Nome do aluno: ");
	fflush(stdin);
	fgets((*ptr_dados_aluno).nome, 50, stdin);

	printf("\nNumero do RU: ");
	scanf_s("%d", &(*ptr_dados_aluno).ru);

	printf("\n\n-------------------------------------\n\n");
	printf("IMPRESSAO DOS DADOS INFORMADOS\n\n");

	printf("Nome do aluno informado: %s\n", (*ptr_dados_aluno).nome);
	printf("Numero do RU informado: %i\n\n\n", (*ptr_dados_aluno).ru);

	system("pause");
	return 0;
}