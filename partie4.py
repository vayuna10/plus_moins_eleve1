#include<stdio.h>

void plus_moins(int val_a_trouver, int choix_joueur)
{
	if(choix_joueur<val_a_trouver)
		printf("Le nombre est plus grand!\n");
	else if(choix_joueur>val_a_trouver)
		printf("Le nombre est plus petit!\n");
	else
		printf("BINGO!!!\n");
	
}