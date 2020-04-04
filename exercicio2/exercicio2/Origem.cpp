#include<stdio.h>
#include<stdlib.h>
#define comparacao(x,y) x>y?x:y

int main() {

	int RU1, RU2, *PTR_RU1, *PTR_RU2;

	printf("\nCOLETANDO OS DADOS DO USUARIO\n\n");

	printf("Digite o primeiro RU: ");
	scanf_s("%d", &RU1);
	printf("Digite o segundo RU: ");
	scanf_s("%d", &RU2);

	PTR_RU1 = &RU1;
	PTR_RU2 = &RU2;

	printf("\n\nIMPRIMINDO OS DADOS DIGITADOS\n\n");

	printf("O primeiro RU digitado eh %d e o segundo eh %d\n\n", *PTR_RU1, *PTR_RU2);

	printf("O maior numero entre os dois RU eh %d\n\n", comparacao(*PTR_RU1,*PTR_RU2));


	system("pause");
	return 0;
		

}
	