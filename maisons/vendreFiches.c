#include "maBiblio.h"

void vendreFiches(joueur tableauj[5], structcase cases[32])
{
    int choixp;
    char lettre, sortie;
    printf("Entrez i si vous souhaitez vendre des fiches ce tour.\n");
    fflush(stdin);
    scanf("%c", &lettre);
    if(lettre == 'i')
    {
        printf("Voici la liste des propri\x82t\x82s :\n");
        for(int i = 0; i<32; i++)
        {
            printf("%d = %s", i, *cases[i].nomCase);
        }
        do
        {
            do
            {
                printf("Entrez le numéro de la case sur laquelle vous voulez enlever une fiche.\n");
                fflush(stdin);
                scanf("%d", &choixp);
            }
            while(!(choixp == 1 || choixp == 3 || choixp == 5 || choixp == 7 || choixp == 9 || choixp == 11 || choixp == 13 || choixp == 15 || choixp == 17 || choixp == 19 || choixp == 21 || choixp == 23 || choixp == 25 || choixp == 27 || choixp == 29 || choixp == 31));
            if(tableauj[/* numéro du joueur qui joue*/].identifiant == cases[choixp].proprietaire)
            {
                if(choixp == 1 || choixp == 5 || choixp == 9 || choixp == 13 || choixp == 17 || choixp == 21 || choixp == 25 || choixp == 29)
                {
                    if(cases[choixp+2].proprietaire == tableauj[/* numéro du joueur qui joue*/].identifiant)
                    {
                        if(cases[choixp].nbfiches - cases[choixp+2].nbfiches < 2)
                        {
                            if(cases[choixp].nbfiches < 6 && cases[choixp].nbfiches > 0)
                            {
                                tableauj[/* numéro du joueur qui joue*/].portefeuille = tableauj[/* numéro du joueur qui joue*/].portefeuille + (cases[choixp].prixFiche/2);
                                cases[choixp].nbfiches = cases[choixp].nbfiches - 1;
                            }
                            else
                            {
                                printf("Vous n'avez plus de fiche sur ce cours !\n");
                            }

                        }
                        else
                        {
                            printf("Veuillez ajouter des fiches sur l'autre case avant de le faire sur celle-ci !\n");
                        }
                    }
                    else
                    {
                        printf("Les 2 cases ne vous appartiennent pas !\n");
                    }
                }
                if(choixp == 3 || choixp == 7 || choixp == 11 || choixp == 15 || choixp == 19 || choixp == 23 || choixp == 27 || choixp == 31)
                {
                    if(cases[choixp-2].proprietaire == tableauj[/* numéro du joueur qui joue*/]. identifiant)
                    {
                        if(cases[choixp].nbfiches - cases[choixp-2].nbfiches < 2)
                        {
                            if(tableauj[/* numéro du joueur qui joue*/].portefeuille - cases[choixp].prixFiche > 0)
                            {
                                if(cases[choixp].nbfiches < 6 && cases[choixp].nbfiches > 0)
                                {
                                    tableauj[/* numéro du joueur qui joue*/].portefeuille = tableauj[/* numéro du joueur qui joue*/].portefeuille + (cases[choixp].prixFiche/2);
                                    cases[choixp].nbfiches = cases[choixp].nbfiches-1;
                                }
                                else
                                {
                                    printf("Vous n'avez plus de fiches sur ce cours !\n");
                                }

                            }

                        }
                        else
                        {
                            printf("Veuillez enlever des fiches sur l'autre case avant de le faire sur celle-ci !\n");
                        }
                    }
                    else
                    {
                        printf("Les 2 cases ne vous appartiennent pas !\n");
                    }
                }
            }
            else
            {
                printf("Vous n'\x88tes pas propri\x82taire de ce cours !\n");
            }
            printf("Lorsque vous aurez fini, entrez s.\n");
            scanf("%c", &sortie);
        }
        while(!(sortie == 's'));


    }
}
