#include "maBiblio.h"

///Affiche l'�cran de pr�sentation et le menu du jeu.

int menu()
{
    int choix;//D�claration de la seule variable de la boucle. On la retournera au main.
    printf("MONOPOLY\n\n\n");
    printf("Bonjour, Bienvenu dans le menu du jeu:\n\n");
    printf("1- Nouvelle partie\n");
    printf("2- Parties sauvegardees\n");
    printf("3- R\x8Agles du jeu\n");
    printf("4- Credits\n\n");//Les 5 lignes pr�c�dentes affichent le texte qui sera affich� au lancement du jeu.
    do
    {
        printf("Entrez votre s\x82lection:\n\n\n");
        fflush(stdin);
        scanf("%d", &choix);
    }while(choix < 1 || choix > 4);//On recommence la boucle tant que le choix du joueur n'est pas compris entre 1 et 4.

    return choix;
}
