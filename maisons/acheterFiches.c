#include "maBiblio.h"

void acheterFiches(joueur tableauj[5], structcase cases[32])
{
    int choixp;
    char lettre, sortie;
    printf("Entrez m si vous souhaitez acheter des fiches ce tour.\n");
    fflush(stdin);
    scanf("%c", &lettre);
    if(lettre == 'm')
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
                printf("Entrez le num�ro de la case sur laquelle vous voulez mettre une fiche.\n");
                fflush(stdin);
                scanf("%d", &choixp);
            }
            while(!(choixp == 1 || choixp == 3 || choixp == 5 || choixp == 7 || choixp == 9 || choixp == 11 || choixp == 13 || choixp == 15 || choixp == 17 || choixp == 19 || choixp == 21 || choixp == 23 || choixp == 25 || choixp == 27 || choixp == 29 || choixp == 31));
            if(tableauj[/* num�ro du joueur qui joue*/].identifiant == cases[choixp].proprietaire)
            {
                if(choixp == 1 || choixp == 5 || choixp == 9 || choixp == 13 || choixp == 17 || choixp == 21 || choixp == 25 || choixp == 29)
                {
                    if(cases[choixp+2].proprietaire == tableauj[/* num�ro du joueur qui joue*/].identifiant)
                    {
                        if(cases[choixp].nbfiches - cases[choixp+2].nbfiches < 2)
                        {
                            if(tableauj[/* num�ro du joueur qui joue*/].portefeuille - cases[choixp].prixFiche > 0)
                            {
                                if(cases[choixp].nbfiches < 6)
                                {
                                    tableauj[/* num�ro du joueur qui joue*/].portefeuille = tableauj[/* num�ro du joueur qui joue*/].portefeuille - cases[choixp].prixFiche;
                                    cases[choixp].nbfiches =+1
                                }
                                else
                                {
                                    printf("Vous avez d\x82j\x85 fait un cahier pour ce cours !");
                                }

                            }
                            else
                            {
                                printf("Vous n'avez pas assez de temps pour faire une fiche sur cette propri\x82t\x82 !\n ");
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
                    if(cases[choixp-2].proprietaire == tableauj[/* num�ro du joueur qui joue*/]. identifiant)
                    {
                        if(cases[choixp].nbfiches - cases[choixp-2].nbfiches < 2)
                        {
                            if(tableauj[/* num�ro du joueur qui joue*/].portefeuille - cases[choixp].prixFiche > 0)
                            {
                                if(cases[choixp].nbfiches < 6)
                                {
                                    tableauj[/* num�ro du joueur qui joue*/].portefeuille = tableauj[/* num�ro du joueur qui joue*/].portefeuille - cases[choixp].prixFiche;
                                    cases[choixp].nbfiches =+1
                                }
                                else
                                {
                                    printf("Vous avez d\x82j\x85 fait un cahier pour ce cours !");
                                }

                            }
                            else
                            {
                                printf("Vous n'avez pas assez de temps pour faire une fiche sur cette propri\x82t\x82 !\n ");
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

    //Entrer id = le joueur qui est en train de jouer.
    /*
    Penser �:
    - pas plus d'une fiche d'�cart par couleur
    - v�rifier que les 2 cours appartiennent bien � la personne.
    - Demander la s�lection de la case o� poser les cartes (essayer par affichage plateau complet et selection par indice
    - Ajouter nombre de fiches poss�d� � la structure de la propri�t�.
    - Afficher demande pour construire les fiches
    - Afficher prix pour chaque fiche

    Pour la vente :
    - s�lection de la propri�t�
    - vente
    -Ne jamais avoir plus d'un d'�cart.


    Ou alors faire �a sous la forme : � chaque fois qu'on indique l'indice de la case, on ajoute ou enl�ve une maison.
    Penser � bien blinder les conditions dans ce cas l�.*/

}
