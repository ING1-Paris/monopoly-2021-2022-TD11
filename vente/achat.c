#include "maBiblio.h"

void achat(joueur tableauj[4], int j, int nbjoueurs)
{
    char ouiounon = 'j';//permet de récupérer le choix du joueur.
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
                printf("ID %d = %s\n", i, tableauj[i].nom);//affichage des id de tous les joueurs
            }
            scanf("%d", &id);
        }while(id<0 || id>(nbjoueurs));//blindage de la valeur

        if(id == 1)//Pour le choix du joueur d'id 1
        {
             for(i = 0; i<23; i++)
            {
                printf("%d = %s\n",i, tableauj[id].connais[i]);//Imprime toutes les connaissances de ce joueur.
            }

            do
            {
                printf("Entrez le numero du bien que vous souhaitez.\n");//Saisie la connaissance que le joueur souhaite acquérir.
                scanf("%d", &bien);
            }while((bien<0) || (bien>21));

            do
            {
            printf("Combien voulez-vous le payer ?\n");//Le prix auquel il souhaite l'acheter.
            scanf("%d", &prix);
            }while(prix<0);

            printf("Transmettez l'ordinateur \x85 %s\n", tableauj[id].nom);//Affichage d'un messaged'information avec le nom du joueur à qui donner le pc.

            do
            {
            printf("Le joueur souhaite vous acheter %s. Il souhaite l'acheter contre %d. Tapez o si vous acceptez, n si non.\n", &tableauj[1].connais[bien], prix);
            //Affichage de la proposition du joueur. Si le joueur accepte, il saisit o sinon n.
            fflush(stdin);
            scanf("%c", &ouiounon);
            }while(!(ouiounon == 'o' || ouiounon == 'n'));


            if(ouiounon == 'o')
            {
                tableauj[j].portefeuille = tableauj[j].portefeuille - prix;//On enleve du portefeuille de l'acheteur
                tableauj[id].portefeuille = tableauj[id].portefeuille + prix;//On ajoute au portefeuille du vendeur.
                tableauj[j].connais[bien] = tableauj[id].connais[bien];//On transmet le bien
                tableauj[id].connais[bien] = tableauj[id].connais[22];//On associe au bien anciennement possédé une valeur nulle.
                tableauj[id].connais[bien].proprietaire = tableauj[j].identifiant;
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
                printf("Entrez le numero du bien que vous souhaitez.\n");
                scanf("%d", &bien);
            }while((bien<0) || (bien>21));

            do
            {
            printf("Combien voulez-vous le payer ?\n");
            scanf("%d", &prix);
            }while(prix<0);

            printf("Transmettez l'ordinateur \x85 %s\n", tableauj[id].nom);

            do
            {
            printf("Le joueur souhaite vous acheter %s. Il souhaite l'acheter contre %d. Tapez o si vous acceptez, n si non.\n", &tableauj[1].connais[bien], prix);
            fflush(stdin);
            scanf("%c", &ouiounon);
            }while(!(ouiounon == 'o' || ouiounon == 'n'));


            if(ouiounon == 'o')
            {
                tableauj[j].portefeuille = tableauj[j].portefeuille - prix;//On enleve du portefeuille de l'acheteur
                tableauj[id].portefeuille = tableauj[id].portefeuille + prix;//On ajoute au portefeuille du vendeur.
                tableauj[j].connais[bien] = tableauj[id].connais[bien];//On transmet le bien
                tableauj[id].connais[bien] = tableauj[id].connais[22];//On associe au bien anciennement possédé une valeur nulle.
                tableauj[id].connais[bien].proprietaire = tableauj[j].identifiant;
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
                printf("Entrez le numero du bien que vous souhaitez.\n");
                scanf("%d", &bien);
            }while((bien<0) || (bien>21));

            do
            {
            printf("Combien voulez-vous le payer ?\n");
            scanf("%d", &prix);
            }while(prix<0);

            printf("Transmettez l'ordinateur \x85 %s\n", tableauj[id].nom);

            do
            {
            printf("Le joueur souhaite vous acheter %s. Il souhaite l'acheter contre %d. Tapez o si vous acceptez, n si non.\n", &tableauj[1].connais[bien], prix);
            fflush(stdin);
            scanf("%c", &ouiounon);
            }while(!(ouiounon == 'o' || ouiounon == 'n'));


            if(ouiounon == 'o')
            {
                tableauj[j].portefeuille = tableauj[j].portefeuille - prix;//On enleve du portefeuille de l'acheteur
                tableauj[id].portefeuille = tableauj[id].portefeuille + prix;//On ajoute au portefeuille du vendeur.
                tableauj[j].connais[bien] = tableauj[id].connais[bien];//On transmet le bien
                tableauj[id].connais[bien] = tableauj[id].connais[22];//On associe au bien anciennement possédé une valeur nulle.
                tableauj[id].connais[bien].proprietaire = tableauj[j].identifiant;
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
                printf("Entrez le numero du bien que vous souhaitez.\n");
                scanf("%d", &bien);
            }while((bien<0) || (bien>21));

            do
            {
            printf("Combien voulez-vous le payer ?\n");
            scanf("%d", &prix);
            }while(prix<0);

            printf("Transmettez l'ordinateur \x85 %s\n", tableauj[id].nom);

            do
            {
            printf("Le joueur souhaite vous acheter %s. Il souhaite l'acheter contre %d. Tapez o si vous acceptez, n si non.\n", &tableauj[1].connais[bien], prix);
            fflush(stdin);
            scanf("%c", &ouiounon);
            }while(!(ouiounon == 'o' || ouiounon == 'n'));


            if(ouiounon == 'o')
            {
                tableauj[j].portefeuille = tableauj[j].portefeuille - prix;//On enleve du portefeuille de l'acheteur
                tableauj[id].portefeuille = tableauj[id].portefeuille + prix;//On ajoute au portefeuille du vendeur.
                tableauj[j].connais[bien] = tableauj[id].connais[bien];//On transmet le bien
                tableauj[id].connais[bien] = tableauj[id].connais[22];//On associe au bien anciennement possédé une valeur nulle.
                tableauj[id].connais[bien].proprietaire = tableauj[j].identifiant;
                printf("L'echange a \x82t\x82 effectu\x82.\n Transmettez l'ordinateur au joueur.\n");
            }

            else if(ouiounon == 'n')
            {
                printf("Transmettez l'ordinateur au joueur.\n %s a refus\x82 l'echange.\n", tableauj[1].nom);
            }
        }
}
