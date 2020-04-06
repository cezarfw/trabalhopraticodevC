//CARREGANDO BIBLIOTECAS
#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#define VET 2  //DECLARACAO DE CONSTANTE


int main() {

	//DECLARACAO DE VARIAVEIS E PONTEIROS DO TIPO INT, FLOAT E CHAR
	int var1 = 38, *ponteiro_var1; 
	float var2 = 55.38, *ponteiro_var2;
	char var3[VET] = "C", *ponteiro_var3;

	//ASSOCIANDO AS VARIAVEIS AOS PONTEIROS
	ponteiro_var1 = &var1;
	ponteiro_var2 = &var2;
	ponteiro_var3 = var3;

	printf("\nOS VALORES ANTES DA ALTERACAO, COM OS DADOS SOLICITADOS NA ATIVIDADE\n\n");

	//IMPRIMINDO NA TELA OS VALORES SETADOS NO MOMENTO DA DECLARACAO DAS MESMAS
	printf("Os dois ultimos digitos do RU: %d\n", var1);
	printf("Os quatro ultimos digitos do RU com virgula: %.2f\n", var2);
	printf("A primeira letra do meu nome (Cezar) eh: %s\n\n", var3);


	//ATRIBUINDO NOVO VALOR PARA AS VARIAVEIS POR MEIO DOS PONTEIROS
	*ponteiro_var1 = 8990;
	*ponteiro_var2 = 89.90;
	char new_var3[VET] = "Z"; //INSTANCIANDO NOVA VARIAVEL PARA ESPECIFICAR O NOVO VALOR DE VAR3 (CHAR) 
	memmove(ponteiro_var3, new_var3, sizeof(VET)); //MOVENDO O VALOR DE NEW_VAR3 PARA O PONTEIRO_VAR3 CONFORME SOLICITADO

	printf("\n---------------------------------------------------------\n\n");

	printf("\nOS VALORES DEPOIS DA ALTERACAO\n\n");
	
	printf("Os dois ultimos digitos do RU: %d\n", var1); //IMPRIMINDO NA TELA O VALOR DEPOIS DA ALTERACAO DA VARIAVEL POR MEIO DO PONTEIRO - TIPO INTEIRO
	printf("Os quatro ultimos digitos do RU com virgula: %.2f\n", var2); //IMPRIMINDO NA TELA O VALOR DEPOIS DA ALTERACAO DA VARIAVEL POR MEIO DO PONTEIRO COM 2 DIGITOS APOS A VIRGULA - TIPO FLOAT
	printf("A primeira letra do meu nome (Cezar) eh: %s\n\n\n", var3); //IMPRIMINDO NA TELA O VALOR DEPOIS DA ALTERACAO DA VARIAVEL POR MEIO DO PONTEIRO - TIPO STRING


	system("pause"); //PAUSE NA EXECUÇÃO PARA CONSEGUIRMOS VER O RESULTADO
	return 0; // RETORNO 0 PARA INDICAR QUE A EXECUÇÃO FOI REALIZADA COM EXITO
	
}