//verifier
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{ int nombreMystere,MIN,MAX,n,count=0,choice;
 int rejouer;
//Menu
printf("\nChoisissez le niveau du jeux::\n\n");
printf("\n1. Facile [1,10]\n");
printf("\n2. Moyen[1,100]\n");
printf("\n3. Difficile[1,1000]\n");
printf("\n4. Tres Difficile[1,10000]\n");
printf("\n5. Pour les Geek[1,100000]\n");
printf("\n=> Votre choix:");
scanf("%i",&choice);
 switch(choice)
     {
     	case 1:MAX=10;
     	break;
     	case 2:MAX=100;
     	break;
     	case 3:MAX=1000;
     	break;
     	case 4:MAX=10000;
     	break;
     	case 5:MAX=100000;
     	break;
     default:
        printf("!!!!!Wrong Value\n MAX=10 par defaut\n");
        MAX=10;
     }
     do{
     srand(time(NULL));
	 nombreMystere=(rand()%(MAX-MIN+1))+MIN;	
	do{
	printf("Deviner le nombre Mystere\n");
	scanf("%i",&n);
	count++;

	if (n>nombreMystere)
		printf("c'est plus il faut retrancher\n");
	else if (n<nombreMystere)
		printf("c'est moins il faut ajouter\n");
	else
		{
		printf("Bravo,Vous avez trouver le nombre Mystere");
		printf(" en %i coup\n",count);
		}
	}while(n!=nombreMystere);
		printf("\n vous voulez continuer la partie?\n");
		printf("\n Non=1 et Oui=0\n");
		scanf("%i",&rejouer);
	}while(rejouer!=1);
//	system(pause);
}
