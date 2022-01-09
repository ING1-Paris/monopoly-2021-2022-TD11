#include "maBiblio.h"


void echange(joueur tableauj[4], int j, int nbjoueurs)//Tableau j contient les structures de tous les joueurs. j contient l'identifiant du joueur sur la case, nbjoueurs contient le nombre de joueurs de la partie.
{
    char choix,choix2;
    printf("Voulez-vous faire un echange ce tour-ci ?\n Si oui, tapez e.\n Sinon, jouez.\n");
    scanf("%c", &choix);
    if (choix == 'e')
    {
        do
        {
            printf("Souhaitez-vous acheter ou vendre une propri\x82t\x82 ?\nTapez a pour acheter ou v pour vendre.\n\nTapez q pour quitter.\n\n");
            fflush(stdin);
            scanf("%c", &choix2);
        }
        while(!(choix2 == 'a' || choix2 == 'v' || choix2 == 'q'));
        if(choix2 == 'a')
        {
            achat(tableauj, j, nbjoueurs);
        }
        else if(choix2 =='v')
        {
            vente(tableauj, j, nbjoueurs);
        }
        else
        {
            printf("Vous ne souhaitez pas échanger ce tour.\n\n");
        }
    }
}
