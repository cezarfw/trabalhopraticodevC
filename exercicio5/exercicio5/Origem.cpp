#include<stdio.h>
#include<stdlib.h>

int imprime(int inicio, int sfim);

int main() {

	int inicio, sfim, i;

	printf("Digite valor inicial: ");
	scanf_s("%d", &inicio);

	printf("Digite valor final: ");
	scanf_s("%d", &sfim);


	printf("\n\nFUNCAO ITERATIVA\n\n");
	for (int i = inicio; i <= sfim; i++) {
		printf("Numero: %d\n", i);
	}


	printf("\nFUNCAO RECURSIVA\n\n");
	imprime(inicio, sfim);


	printf("\n");
	system("pause");
	return 0;

}


int imprime(int comeco, int final) {
	int j = comeco;
	if (j <= final) {
		printf("Numero: %d\n", j);
		imprime((j + 1), final);
	}
	return 0;
}