//CARREGANDO BIBLIOTECAS
#include<stdio.h>
#include<stdlib.h>

int imprime(int inicio, int sfim); //DECLARANDO FUNCAO RECURSIVA

int main() {

	int inicio, sfim, i; //DECLARANDO VARIAVEIS DO TIPO INT

	printf("Digite valor inicial: "); //IMPRIMINDO MENSAGEM NA TELA DO USUARIO
	scanf_s("%d", &inicio); //CAPTURANDO VALOR DIGITADO PELO USUARIO E ARMAZENANDO NA VARIAVEL INICIO

	printf("Digite valor final: "); //IMPRIMINDO MENSAGEM NA TELA DO USUARIO
	scanf_s("%d", &sfim); //CAPTURANDO VALOR DIGITADO PELO USUARIO E ARMAZENANDO NA VARIAVEL SFIM

	//CRIACAO DA FUNCAO ITERATIVA COM LACO DE REPETICAO FOR
	printf("\n\nFUNCAO ITERATIVA\n\n"); //IMPRIMINDO MENSAGEM NA TELA DO USUARIO
	for (int i = inicio; i <= sfim; i++) {    //CRIANDO UM LA�O DE REPETICAO DEFININDO VARIAVEL I DO TIPO INTEIRO PARA RECEBER O VALOR DE INICIO, I SENDO USADO COMO CONTADOR
		printf("Numero: %d\n", i);  //A CONDICAO DE PARADA DO LACO SERA QUANDO O I ATINGIR O VALOR DEFINIDO PARA SFIM, SENDO QUE A CADA PASSAGEM PELO LOOP SERA IMPRESSA UMA MENSAGEM COM O VALOR DE I
	}

	
	printf("\nFUNCAO RECURSIVA\n\n"); //IMPRIMINDO MENSAGEM NA TELA DO USUARIO
	imprime(inicio, sfim); //CHAMANDO FUNCAO RECURSIVA DECLARADA FORA DO BLOCO MAIN


	printf("\n"); //PULANDO UMA LINHA
	system("pause"); //PAUSE NA EXECU��O PARA CONSEGUIRMOS VER O RESULTADO
	return 0; //RETORNO 0 PARA INDICAR QUE A EXECU��O FOI REALIZADA COM EXITO

}


//CRIACAO DA FUNCAO RECURSIVA
int imprime(int comeco, int final) { //RECEBENDO OS VALORES PASSADOS COMO PARAMETROS PARA FUNCAO QUANDO A MESMA FOI CHAMADA
	int j = comeco; //DECLARANDO NOVA VARIAVEL J PARA RECEBER O VALOR DE COMECO - PASSADA COMO PARAMETRO
	if (j <= final) {   //CRIANDO UMA FUNCAO DE COMPARACAO PARA VERIFICAR SE O VALOR DE J � MENOR QUE O VALOR PASSADO COMO CONDICAO PARA TERMINAR AS CHAMADAS DE FUNCAO PARA SI MESMA
		printf("Numero: %d\n", j); //IMPRIMINDO MENSAGEM NA TELA COM O VALOR CONTIDO NA VARIAVEL J
		imprime((j + 1), final); //SE O LACO N�O ALCANCAR O VALOR ATRIBUIDO NA VARIAVEL J, A FUNCAO RECURSIVA IRA CHAMAR ELA MESMA ACRESCENDO MAIS 1 NO VALOR J COMO PRIMEIRO PARAMETRO E O SEGUNDO SERA O VALOR FINAL.
	}
	return 0;  //RETORNO 0 PARA INDICAR QUE A EXECU��O FOI REALIZADA COM EXITO
}