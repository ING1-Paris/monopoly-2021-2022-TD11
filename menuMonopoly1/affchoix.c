#include "maBiblio.h"

///Procédure après que le choix dans le menu ait été effectué.

/*Lorsque le choix est effectué dans le menu, on affiche un nouveau menu permettant 2 choix à l'utilisateur, continuer l'opération
ou revenir au menu pour modifier son choix. Ici lorsque le programme reçoit l'instruction que le choix du joueur est validé, il renvoit un 0 et le programme choisit
s'exécute. Si il choisit de revenir au menu, le programme renvoit un 1 ce qui provoque une nouvelle itération de la boucle de menu.*/


void affchoix(int d)//fonction permettant de présenter à l'utilisateur son choix et lui permet de revenir sur son choix si celui-ci ne lui convient pas.
{
    char lettre;//Déclare la variable qui permet de sortir du programme.
    int i=0;

    if(d == 1)//S'active quand la sélection du joueur est 1
    {
      do
        {
            printf("Vous avez choisi de relancer une nouvelle partie\n");
            printf("Si vous souhaitez poursuivre, tapez p\n");
            printf("Si vous souhaitez realiser une autre op\x82ration, tapez r\n");
            fflush(stdin);
            scanf("%c", &lettre);
        }while(!(lettre == 'p' || lettre == 'r'));//Répète la boucle tant que la sélection du joueur n'est pas r pour retour ou p pour poursuivre.
        if(lettre == 'r')
        {
            return 1;
        }
        if(lettre == 'p')
        {
            void lancementNouvellePartie();
            return 0;//Mettre en execution le programme pour lancer une nouvelle partie.
        }

    }


    if(d == 2)//S'active quand la sélection du joueur est 2
    {
        do
        {
            printf("Vous avez choisi de relancer une partie sauvergardee\n");
            printf("Si vous souhaitez poursuivre, tapez p\n");
            printf("Si vous souhaitez realiser une autre op\x82ration, tapez r\n");
            fflush(stdin);
            scanf("%c", &lettre);
        }while(!(lettre == 'p' || lettre == 'r'));//Répète la boucle tant que la sélection du joueur n'est pas r pour retour ou p pour poursuivre.
        if(lettre == 'r')
        {
            return 1;
        }
        if(lettre == 'p')
        {
            charger_une_ancienne_partie();
            return 0;//Mettre en execution le programme pour lacer une partie pré-enregistrée.
        }

    }
    if(d == 3)//S'active quand la sélection du joueur est 3
    {
        do
        {
            printf("Vous avez choisi de lire les r\x82gles\n");
            printf("Si vous souhaitez poursuivre, tapez p\n");
            printf("Si vous souhaitez realiser une autre op\x82ration, tapez r\n");
            fflush(stdin);
            scanf("%c", &lettre);
        }while(!(lettre == 'p' || lettre == 'r'));//Répète la boucle tant que la sélection du joueur n'est pas r pour retour ou p pour poursuivre.
        if(lettre == 'r')
        {
            return 1;
        }
        if(lettre == 'p')
        {
            regles();
            return 0;
        }
    }
    if(d == 4)//S'active quand la sélection du joueur est 4
    {
        do
        {
            printf("Vous avez choisi de lire les credits\n");
            printf("Si vous souhaitez poursuivre, tapez p\n");
            printf("Si vous souhaitez realiser une autre op\x82ration, tapez r\n");
            fflush(stdin);
            scanf("%c", &lettre);
        }while(!(lettre == 'p' || lettre == 'r'));//Répète la boucle tant que la sélection du joueur n'est pas r pour retour ou p pour poursuivre.
        if(lettre == 'r')
        {
            return 1;
        }
        if(lettre == 'p')
        {
            credits();
            return 0;//Mettre en execution le programme pour les crédits
        }
    }
}

