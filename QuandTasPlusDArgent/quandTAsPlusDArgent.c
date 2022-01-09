#include "maBiblio.h"

void quandTasPlusDArgent(joueur tableauj[5], structcase cases[32], int nbjoueurs, int j)
{
    int choix;
    if(tableauj[/*Joueur actuel*/].portefeuille < 0)
    {
        do
        {
            printf("Veuillez s\x82lectionner une des solutions ci-dessous pour vous refaire de l'argent :\n");
            printf("1 = Echanger avec un autre joueur\n");
            printf("2 = Vendre des cahiers ou des fiches\n");
            printf("3 = Hypot\x82quer des cours\n");
            fflush(stdin);
            scanf("%d", &choix);
        }while(choix<1 || choix>3);

        if(choix == 1)
        {
            vente(tableauj, j, nbjoueurs);
        }
        if(choix == 2)
        {
            vendreFiches(tableauj, cases);
        }
        if(choix == 3)
        {
            //Hypotèque
        }

    }
}
