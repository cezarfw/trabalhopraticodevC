#include<stdio.h>
#include<stdlib.h>

int main() {

	printf("\nRECEBENDO DADOS DO ALUNO\n\n");

	struct aluno
	{
		char nome[50];
		int ru;
	}; struct aluno dados_aluno;

	printf("Nome do aluno: ");
	fflush(stdin);
	fgets(dados_aluno.nome, 50, stdin);

	printf("\nNumero do RU: ");
	scanf_s("%d", &dados_aluno.ru);


	printf("\n\n-------------------------------------\n\n");
	printf("IMPRESSAO DOS DADOS INFORMADOS\n\n");

	printf("Nome do aluno informado: %s\n", dados_aluno.nome);
	printf("Numero do RU informado: %d\n\n\n", dados_aluno.ru);

	system("pause");
	return 0;

}