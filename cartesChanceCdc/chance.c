#include "maBiblio.h"

void chance(/*nbm de fois tombé sur case chance*/, int nombreJoueurs, joueur tableauj[5])//Inserer en parametre la variable du nbm de fois où les joueurs sont tombés sur une case chance, la structure joueur.
{
    int i,id;
    if(tableauj[1].emplacement == 6 || tableauj[1].emplacement == 18)
    {
        id = tableauj[1].identifiant;
    }
    if(tableauj[2].emplacement == 6 || tableauj[2].emplacement == 18)
    {
        id = tableauj[2].identifiant;
    }
    if(tableauj[3].emplacement == 6 || tableauj[3].emplacement == 18)
    {
        id = tableauj[3].identifiant;
    }
    if(tableauj[4].emplacement == 6 || tableauj[4].emplacement == 18)
    {
        id = tableauj[4].identifiant;
    }



    printf("Carte CHANCE\n\n");
    if(i == 0)
    {
        if(tableauj[id].identifiant == id)
        {
            printf("Vous avez une bonne excuse pour sortir de la soiree, gardez cette carte, elle vous permet de sortir de la soiree.\n");
            tableauj[id].sortieSoiree =+ 1;//Ajoute 1 au nombre de cartes permettant au joueur de sortir de la prison.
        }

    }
    else if(i == 1)
    {
        printf("Vous \x88tes malades, perdez 60 min.\n");//Verifier code ASCII.OK
        if(tableauj[id].identifiant == id)
        {
            tableauj[id].portefeuille = tableauj[id].portefeuille - 60;
        }

    }

    else if(i == 2)
    {
        if(tableauj[id].identifiant == id)
        {
            printf("Nous sommes Mardi, suivez la prochaine Masterclass, si un étudiant la possede d\x82j\x85, perdez le double sinon vous pouvez l’acheter.\n");
            int i;

            for(int b=1; b<=4; b++)
            {
                printf("%d\n",b);
                for(int a=1; a<=8; a++)
                {
                    printf("%d",a);
                    if(tab[a][b]==pionj1)
                    {
                        i=((b-1)*8)+(a-1);
                        printf("vous etes sur la case %s ",cases[i].nomCase);
                    }
                }
            }
            if(tableauj[id].emplacement == 6)
            {
                if(structcase.proprietaire == '0')
                {
                    tableauj[id].emplacement = 12;
                    printf("Cette masterclass n'appartient \x85 personne, vous pouvez l'acheter.");
                    //intégrer achat propriété.
                }
                else if(!(structcase.propietaire == '0'))
                {
                    tableauj[id].emplacement = 12;
                    printf("La case appartient \x85 un autre joueur, perdez le double du temps normalement pr\x82vu.");
                //intégrer code pour payer le loyer et faire * 2
                }
            }

            if(tableauj[id].emplacement == 18)
            {
                if(structcase.proprietaire == '0')
                {
                    tableauj[id].emplacement = 20;
                    printf("Cette masterclass n'appartient \x85 personne, vous pouvez l'acheter.");
                    //intégrer achat propriété.
                }
                else if(!(structcase.propietaire == '0'))
                {
                    tableauj[id].emplacement = 20;
                    printf("La case appartient \x85 un autre joueur, perdez le double du temps normalement pr\x82vu.");
                //intégrer code pour payer le loyer et faire * 2
                }
            }
        }
    }

    else if(i == 3)
    {
        printf("Vos amis vous aident \x85 r\x82viser, recevez 20min par joueurs pr\x82sent sur le plateau.\n");
        if(tableauj[id].identifiant == id)
        {
            tableauj[id].portefeuille = tableauj[id].portefeuille + 20*nbJoueurs;//Verifier nbJoueurs et si ok, passer en parametre de la fonction.OK
        }
    }
    else if(i == 4)
    {
        printf("Vos prises de notes ne tiennent plus la route, vous devez les r\x82diger \x85 nouveau, perdez 25min par fiche et 40min par cahier.\n");
        if(tableauj[id].identifiant == id)
            for(int j = 0, j</*Nombre de fiches du joueur*/, j++)
            {
                tableauj[id].portefeuille = tableauj[id].portefeuille - 25;
            }
        for(j = 0, j </*Nombre de cahiers qu'il possède*/, j++)             ///ATTENTION ICI RECTIFICATION A FAIRE
        {
            tableauj[id].portefeuille = tableauj[id].portefeuille - 40;
        }
    }
    else if(i == 5)
    {
        if(tableauj[id].identifiant == id)
        {
            printf("Une session de soutien en physique vous est proposee, avancez jusqu’au Chapitre 1 de mecanique. Si vous passez par la case d\x82part, recevez 200min.\n");
            for(int b=1; b<=4; b++)
            {
                printf("%d\n",b);
                for(int a=1; a<=8; a++)
                {
                    printf("%d",a);
                    if(tab[a][b]==pionj1)
                    {
                        i=((b-1)*8)+(a-1);
                        printf("vous etes sur la case %s ",cases[i].nomCase);
                    }
                }
            }
            if(tableauj[id].emplacement = 6)
            {
                tableauj[id].emplacement = 9;
            }
            else if(tableauj[id].emplacement = 18)
            {
                tableauj[id].emplacement = 9;
                tableauj[id].portefeuille = tableauj[id].portefeuille + 200;
            }
        }
    }
    else if(i == 6)
    {
        printf("Vos cahier ne tiennent plus la route, vous devez les r\x82diger à nouveau. Payez 40min par fiche et 115min par cahier.\n");
        if(tableauj[id].identifiant == id)
        {
            for(int j = 0, j</*Nombre de fiches qu'il possède*/, j++)
            {
                tableauj[id].portefeuille = tableauj[id].portefeuille - 40;                     ///ATTENTION ICI RECTIFICATION A FAIRE, EN DESSOUS AUSSI
            }
            for(j = 0, j </*Nombre de cahiers qu'il possède*/, j++)
            {
                tableauj[id].portefeuille = tableauj[id].portefeuille - 115;
            }
        }

    }
    else if(i == 7)
    {
        if(tableauj[id].identifiant == id)
        {
            printf("Un ami vous appelle et vous propose une soiree tout de suite, vous vous y rendez immediatement et vous ne passez pas par la case depart.\n");
            tableauj[id].emplacement = //coordonnées de la prison.
        }
    }

    else if(i == 8)
    {
        if(tableauj[id].identifiant == id)
        {
            printf("Une session de soutien en informatique vous est proposee, avancez jusqu’au Chapitre 2 algorithme et programmation, si vous passez par la case d\x82part vous obtiendrez 200min.\n");
            for(int b=1; b<=4; b++)
            {
                printf("%d\n",b);
                for(int a=1; a<=8; a++)
                {
                    printf("%d",a);
                    if(tab[a][b]==pionj1)
                    {
                        i=((b-1)*8)+(a-1);
                        printf("vous etes sur la case %s ",cases[i].nomCase);
                    }
                }
            }
            if(tableauj[id].emplacement = 6)
            {
                tableauj[id].emplacement = 15;
            }
            else if(tableauj[id].emplacement = 18)
            {
                tableauj[id].emplacement = 15;
                tableauj[id].portefeuille = tableauj[id].portefeuille + 200;
            }
        }
    }

    else if(i == 9)
    {
        if(tableauj[id].identifiant == id)
        {
            printf("Vous \x88tes exclu de cours pour non-port du masque, payez 100min.\n");
            tableauj[id].portefeuille = tableauj[id].portefeuille - 100;
        }
    }
    else if(i == 10)
    {
        if(tableauj[id].identifiant == id)
        {
            printf("C'est l'anniversaire de votre meilleur ami, allez directement \x85 sa soiree sans passer par la case d\x82part.\n");
            tableauj[id].emplacement = //coordonnées de la prison.
        }
    }
    else if(i == 11)
    {
        if(tableauj[id].identifiant == id)
        {
            printf("C’est votre anniversaire, vous recevez un livre de physique, vous gagnez 150min. \n");
            tableauj[id].portefeuille = tableauj[id].portefeuille + 150;
        }
    }
}
