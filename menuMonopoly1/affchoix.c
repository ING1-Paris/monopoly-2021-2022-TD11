#include "maBiblio.h"

///Proc�dure apr�s que le choix dans le menu ait �t� effectu�.

/*Lorsque le choix est effectu� dans le menu, on affiche un nouveau menu permettant 2 choix � l'utilisateur, continuer l'op�ration
ou revenir au menu pour modifier son choix. Ici lorsque le programme re�oit l'instruction que le choix du joueur est valid�, il renvoit un 0 et le programme choisit
s'ex�cute. Si il choisit de revenir au menu, le programme renvoit un 1 ce qui provoque une nouvelle it�ration de la boucle de menu.*/


void affchoix(int d)//fonction permettant de pr�senter � l'utilisateur son choix et lui permet de revenir sur son choix si celui-ci ne lui convient pas.
{
    char lettre;//D�clare la variable qui permet de sortir du programme.
    int i=0;

    if(d == 1)//S'active quand la s�lection du joueur est 1
    {
      do
        {
            printf("Vous avez choisi de relancer une nouvelle partie\n");
            printf("Si vous souhaitez poursuivre, tapez p\n");
            printf("Si vous souhaitez realiser une autre op\x82ration, tapez r\n");
            fflush(stdin);
            scanf("%c", &lettre);
        }while(!(lettre == 'p' || lettre == 'r'));//R�p�te la boucle tant que la s�lection du joueur n'est pas r pour retour ou p pour poursuivre.
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


    if(d == 2)//S'active quand la s�lection du joueur est 2
    {
        do
        {
            printf("Vous avez choisi de relancer une partie sauvergardee\n");
            printf("Si vous souhaitez poursuivre, tapez p\n");
            printf("Si vous souhaitez realiser une autre op\x82ration, tapez r\n");
            fflush(stdin);
            scanf("%c", &lettre);
        }while(!(lettre == 'p' || lettre == 'r'));//R�p�te la boucle tant que la s�lection du joueur n'est pas r pour retour ou p pour poursuivre.
        if(lettre == 'r')
        {
            return 1;
        }
        if(lettre == 'p')
        {
            charger_une_ancienne_partie();
            return 0;//Mettre en execution le programme pour lacer une partie pr�-enregistr�e.
        }

    }
    if(d == 3)//S'active quand la s�lection du joueur est 3
    {
        do
        {
            printf("Vous avez choisi de lire les r\x82gles\n");
            printf("Si vous souhaitez poursuivre, tapez p\n");
            printf("Si vous souhaitez realiser une autre op\x82ration, tapez r\n");
            fflush(stdin);
            scanf("%c", &lettre);
        }while(!(lettre == 'p' || lettre == 'r'));//R�p�te la boucle tant que la s�lection du joueur n'est pas r pour retour ou p pour poursuivre.
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
    if(d == 4)//S'active quand la s�lection du joueur est 4
    {
        do
        {
            printf("Vous avez choisi de lire les credits\n");
            printf("Si vous souhaitez poursuivre, tapez p\n");
            printf("Si vous souhaitez realiser une autre op\x82ration, tapez r\n");
            fflush(stdin);
            scanf("%c", &lettre);
        }while(!(lettre == 'p' || lettre == 'r'));//R�p�te la boucle tant que la s�lection du joueur n'est pas r pour retour ou p pour poursuivre.
        if(lettre == 'r')
        {
            return 1;
        }
        if(lettre == 'p')
        {
            credits();
            return 0;//Mettre en execution le programme pour les cr�dits
        }
    }
}

