#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int nombre�trouver;
	int nombrepropose;


	srand(time(NULL));


	nombre�trouver = rand() % 100 + 1;

	printf(">>>Bienvenue dans le jeu du C'est + C'est - !<<<\n");
	printf("Devine le nombre que j'ai choisi entre 1 et 100 !\n");


	while (1) {
		printf("Ta proposition est donc : ");
		scanf_s("%d", &nombrepropose);


		if (nombrepropose < nombre�trouver) {
			printf("C'est + ! \n");
		}
		else if (nombrepropose > nombre�trouver) {
			printf("C'est - ! \n");
		}
		else {
			printf("LEEEZZZZZGOOOOOO T'AS TROUVE BOGOSS !\n");
			break;
		}
	}
	return 0;
}
