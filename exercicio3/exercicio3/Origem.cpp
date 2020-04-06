//CARREGANDO BIBLIOTECAS
#include<stdio.h>
#include<stdlib.h>

int main() {

	struct aluno    //DECLARANDO STRUCT COM DOIS CAMPOS COMO VALORES DE ENTRADA, CHAR E INT
	{
		char nome[50] = "Cezar Augusto Roggia"; //DECLARANDO ARRAY DO TIPO CHAR COM NOME DO ALUNO COM 50 CARACTERES
		int ru = 1955538; //DECLARANDO VARIAVEL DO TIPO INT COM RU DO ALUNO
	}; struct aluno dados_aluno;  //PASSANDO A VARIAVEL DADOS_ALUNO COMO A QUAL SERA REFERENCIADA A STRUCT

	/* ALTERNATIVA COMO ENTRADA DOS DADOS
	printf("Nome do aluno: "); 
	fflush(stdin);
	fgets(dados_aluno.nome, 50, stdin);

	printf("\nNumero do RU: ");
	scanf_s("%d", &dados_aluno.ru);
	*/

	printf("DADOS DO ALUNO\n\n"); //IMPRIMINDO MENSAGEM NA TELA DO USUARIO

	printf("Nome do aluno: %s\n", dados_aluno.nome); //IMPRIMINDO MENSAGEM NA TELA DO USUARIO COM O VALOR DA STRUCT NO CAMPO NOME - TIPO STRING
	printf("Numero do RU: %d\n\n\n", dados_aluno.ru); //IMPRIMINDO MENSAGEM NA TELA DO USUARIO COM O VALOR DA STRUCT NO CAMPO RU - TIPO INT

	system("pause"); //PAUSE NA EXECUÇÃO PARA CONSEGUIRMOS VER O RESULTADO
	return 0; // RETORNO 0 PARA INDICAR QUE A EXECUÇÃO FOI REALIZADA COM EXITO

}