#include "maBiblio.h"

void vente(joueur tableauj[4], int j, int nbjoueurs)
{
    char ouiounon = 'j';
    int i,id =0,bien,prix;
    /* i contient les itérations des différentes boucles de la procédure.
    id contient l'identifiant du joueur avec qui on souhaite échanger.
    bien est une variable qui reçoit la place du tableau où se situe le bien que l'on souhaite échanger.
    prix contient le prix que souhaite payez le joueur pour acheter la propriété d'un autre joueur.*/
    do
    {
        printf("Avec quel joueur souhaitez-vous echanger ?\n Entrez son identifiant :\n");
        for(i = 1; i<(nbjoueurs+1); i++)
        {
            printf("ID %d = %s\n", i, tableauj[i].nom);
        }
        scanf("%d", &id);
    }
    while(id<0 || id>(nbjoueurs));

    if(id == 1)
    {
        for(i = 0; i<23; i++)
        {
            printf("%d = %s\n",i, tableauj[id].connais[i]);
        }

        do
        {
            printf("Entrez le numero du bien que vous souhaitez vendre.\n");
            scanf("%d", &bien);
        }
        while((bien<0) || (bien>21));

        do
        {
            printf("Combien voulez-vous en recevoir ?\n");
            scanf("%d", &prix);
        }
        while(prix<0);

        printf("Transmettez l'ordinateur \x85 %s\n", tableauj[id].nom);

        do
        {
            printf("Le joueur souhaite vous vendre %s. Il souhaite le vendre contre %d. Tapez o si vous acceptez, n si non.\n", &tableauj[1].connais[bien], prix);
            fflush(stdin);
            scanf("%c", &ouiounon);
        }
        while(!(ouiounon == 'o' || ouiounon == 'n'));


        if(ouiounon == 'o')
        {
            tableauj[j].portefeuille = tableauj[j].portefeuille + prix;
            tableauj[id].portefeuille = tableauj[id].portefeuille - prix;
            tableauj[id].connais[bien] = tableauj[j].connais[bien];
            tableauj[j].connais[bien] = tableauj[j].connais[22];
            tableauj[j].connais[bien].proprietaire = tableauj[id].identifiant;
            printf("L'echange a \x82t\x82 effectu\x82.\n Transmettez l'ordinateur au joueur.\n");
        }

        else if(ouiounon == 'n')
        {
            printf("Transmettez l'ordinateur au joueur.\n %s a refus\x82 l'echange.\n", tableauj[1].nom);
        }
    }

    else if(id == 2)
    {
        for(i = 0; i<23; i++)
        {
            printf("%d = %s\n",i, tableauj[id].connais[i]);
        }

        do
        {
            printf("Entrez le numero du bien que vous souhaitez vendre.\n");
            scanf("%d", &bien);
        }
        while((bien<0) || (bien>21));

        do
        {
            printf("Combien voulez-vous en recevoir ?\n");
            scanf("%d", &prix);
        }
        while(prix<0);

        printf("Transmettez l'ordinateur \x85 %s\n", tableauj[id].nom);

        do
        {
            printf("Le joueur souhaite vous vendre %s. Il souhaite le vendre contre %d. Tapez o si vous acceptez, n si non.\n", &tableauj[1].connais[bien], prix);
            fflush(stdin);
            scanf("%c", &ouiounon);
        }
        while(!(ouiounon == 'o' || ouiounon == 'n'));


        if(ouiounon == 'o')
        {
            tableauj[j].portefeuille = tableauj[j].portefeuille + prix;
            tableauj[id].portefeuille = tableauj[id].portefeuille - prix;
            tableauj[id].connais[bien] = tableauj[j].connais[bien];
            tableauj[j].connais[bien] = tableauj[j].connais[22];
            tableauj[j].connais[bien].proprietaire = tableauj[id].identifiant;
            printf("L'echange a \x82t\x82 effectu\x82.\n Transmettez l'ordinateur au joueur.\n");
        }

        else if(ouiounon == 'n')
        {
            printf("Transmettez l'ordinateur au joueur.\n %s a refus\x82 l'echange.\n", tableauj[1].nom);
        }
    }
    else if(id == 3)
    {
        for(i = 0; i<23; i++)
        {
            printf("%d = %s\n",i, tableauj[id].connais[i]);
        }

        do
        {
            printf("Entrez le numero du bien que vous souhaitez vendre.\n");
            scanf("%d", &bien);
        }
        while((bien<0) || (bien>21));

        do
        {
            printf("Combien voulez-vous en recevoir ?\n");
            scanf("%d", &prix);
        }
        while(prix<0);

        printf("Transmettez l'ordinateur \x85 %s\n", tableauj[id].nom);

        do
        {
            printf("Le joueur souhaite vous vendre %s. Il souhaite le vendre contre %d. Tapez o si vous acceptez, n si non.\n", &tableauj[1].connais[bien], prix);
            fflush(stdin);
            scanf("%c", &ouiounon);
        }
        while(!(ouiounon == 'o' || ouiounon == 'n'));


        if(ouiounon == 'o')
        {
            tableauj[j].portefeuille = tableauj[j].portefeuille + prix;
            tableauj[id].portefeuille = tableauj[id].portefeuille - prix;
            tableauj[id].connais[bien] = tableauj[j].connais[bien];
            tableauj[j].connais[bien] = tableauj[j].connais[22];
            tableauj[j].connais[bien].proprietaire = tableauj[id].identifiant;
            printf("L'echange a \x82t\x82 effectu\x82.\n Transmettez l'ordinateur au joueur.\n");
        }

        else if(ouiounon == 'n')
        {
            printf("Transmettez l'ordinateur au joueur.\n %s a refus\x82 l'echange.\n", tableauj[1].nom);
        }

    }
    else if(id == 4)
    {
        for(i = 0; i<23; i++)
        {
            printf("%d = %s\n",i, tableauj[id].connais[i]);
        }

        do
        {
            printf("Entrez le numero du bien que vous souhaitez vendre.\n");
            scanf("%d", &bien);
        }
        while((bien<0) || (bien>21));

        do
        {
            printf("Combien voulez-vous en recevoir ?\n");
            scanf("%d", &prix);
        }
        while(prix<0);

        printf("Transmettez l'ordinateur \x85 %s\n", tableauj[id].nom);

        do
        {
            printf("Le joueur souhaite vous vendre %s. Il souhaite le vendre contre %d. Tapez o si vous acceptez, n si non.\n", &tableauj[1].connais[bien], prix);
            fflush(stdin);
            scanf("%c", &ouiounon);
        }
        while(!(ouiounon == 'o' || ouiounon == 'n'));


        if(ouiounon == 'o')
        {
            tableauj[j].portefeuille = tableauj[j].portefeuille + prix;
            tableauj[id].portefeuille = tableauj[id].portefeuille - prix;
            tableauj[id].connais[bien] = tableauj[j].connais[bien];
            tableauj[j].connais[bien] = tableauj[j].connais[22];
            tableauj[j].connais[bien].proprietaire = tableauj[id].identifiant;
            printf("L'echange a \x82t\x82 effectu\x82.\n Transmettez l'ordinateur au joueur.\n");
        }

        else if(ouiounon == 'n')
        {
            printf("Transmettez l'ordinateur au joueur.\n %s a refus\x82 l'echange.\n", tableauj[1].nom);
        }
    }
}
