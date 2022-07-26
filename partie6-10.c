//Partie6(updated with  code of part 6-10)
#include<stdio.h>
#include<stdlib.h> //For random to work
#include<time.h> //For funcion time to work

void plus_moins(int val_a_trouver, int choix_joueur, char choix_diff)
{
	if(choix_joueur<val_a_trouver)
		printf("The number is too big\n");
	else if(choix_joueur>val_a_trouver)
		printf("The number is too small1\n");
	else
		printf("BINGO!!!!!!\n");

}

void main()
{
	srand(time(NULL)); //To base the generation on the pc's inernal clock,so the number will be random
	int val_a_trouver,choix_joueur,nombre_essaie;
	char hoix_diff;
	int i = 1;
	val_a_trouver= rand() %100 + 1;
	printf("Number generated %d ",val_a_trouver);

	printf("Choose your level of difficulty");
	printf("\nEasy(E) : illimited try-outs. \nMedium(M): 25 Try-outs. \nDifficult(D) : 10 Try-outs");
	printf("\nYour choice:");
	scanf("%s,",&hoix_diff);

	if(hoix_diff=='E') {
		do{
			printf("\nEnter a number from 1 to 100: \n");
			scanf("%d", &choix_joueur);
			plus_moins(val_a_trouver,choix_joueur,hoix_diff);

		}while(choix_joueur!=val_a_trouver);
	}
	else if(hoix_diff=='M')
	{	do{
			
			printf("\nEnter a number from 1 to 100: \n");
			scanf("%d", &choix_joueur);
			plus_moins(val_a_trouver,choix_joueur,hoix_diff);
			i++;
		}while(i<26);
	}
	
	else if(hoix_diff=='D')
	{ 
	 	do{
			
			printf("\nEnter a number from 1 to 100: \n");
			scanf("%d", &choix_joueur);
			plus_moins(val_a_trouver,choix_joueur,hoix_diff);
			i++;
		}while(i<11);
	}

}
