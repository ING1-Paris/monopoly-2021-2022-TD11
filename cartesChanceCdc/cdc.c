#include "maBiblio.h"

void caisseDeCommunaute(/**/, int nombreJoueurs, joueur tableauj[5])//memes parametres que pour chance()
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
    printf("Carte CAISSE DE COMMUNAUTE\n\n");
    if(i == 0)
    {
        if(tableauj[id].identifiant == id)
        {
            printf("Vous avez oubli\x82 votre carte \x82tudiant, vous perdez 120min. \n");
            tableauj[id].portefeuille = tableauj[id].portefeuille - 120;
        }
    }
    else if(i == 1)
    {
        if(tableauj[id].identifiant == id)
        {
            printf("Vous jouez \x85 la console au lieu de travailler, vous perdez 20 min.\n");//Verifier code ASCII.
            if(tableauj[id].identifiant == /*Joueur sur la case*/)
            {
                tableauj[id].portefeuille = tableauj[id].portefeuille - 20;
            }
        }
    }
    else if(i == 2)
    {
        if(tableauj[id].identifiant == id)
        {
            printf("Suivez la prochaine LV2, si un étudiant la possede d\x82j\x85, payez le double sinon vous pouvez l’acheter.\n");
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
            if(tableauj[id].emplacement = 14)
            {
                tableauj[id].emplacement = 22;
                if(cases[22].proprietaire == '0')
                {
                    //inserer code pour acheter case
                }
                else if(!(cases[22].proprietaire == '0'))
                {
                    //code pour payer loyer et faire *2
                }
            }
            else if(tableauj[id].emplacement = 26)
            {
                tableauj[id].emplacement = 10;
                tableauj[id].portefeuille = tableauj[id].portefeuille + 200;
                if(cases[10].proprietaire == '0')
                {
                    //inserer code pour acheter case
                }
                else if(!(cases[10].proprietaire == '0'))
                {
                    //code pour payer loyer et faire *2
                }
            }
        }
    }
    else if(i == 3)
    {
        if(tableauj[id].identifiant == id)
        {
            printf("Vous avez une bonne excuse pour sortir de la soiree, gardez cette carte, elle vous permet de sortir de la soiree.\n");
            tableauj[id].sortieSoiree =+ 1;
        }
    }
    else if(i == 4)
    {
        if(tableauj[id].identifiant == id)
        {
            printf("Vous avez oubli\x82 de pr\x82parer votre prochain cours de maths, perdez 50min.\n");
            tableauj[id].portefeuille = tableauj[id].portefeuille - 50;
        }
    }
    else if(i == 5)
    {
        if(tableauj[id].identifiant == id)
        {
            printf("La semaine passe vite ! rendez-vous sur la case d\x82part.\n");
            tableauj[id].emplacement = 1;  //Il serait intéressant d'automatiser la case départ.
        }
    }
    else if(i == 6)
    {
        if(tableauj[id].identifiant == id)
        {
            printf("Vous \x88tes surmotiv\x82 et travaillez tout votre week-end, recevez 100min.\n");
            tableauj[id].portefeuille = tableauj[id].portefeuille + 100;
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
            printf("Votre professeur est malade, vous perdez de precieuses minutes de cours, perdez 90min.\n");
            tableauj[id].portefeuille = tableauj[id].portefeuille - 90;
        }
    }
    else if(i == 9)
    {
        if(tableauj[id].identifiant == id)
        {
            printf("Vous trichez pour le rendu d'un dm. Tirez les d\x82s, si vous obtenez moins de 9, vous perdez 30min, si vous obtenez 9 ou plus, vous gagnez 60min.\n");
            int test = lancerdes();
            if(test<9)
            {
                tableauj[id].portefeuille = tableauj[id].portefeuille - 30;
            }
            else if(test >= 9)
            {
                tableauj[id].portefeuille = tableauj[id].portefeuille + 60;
            }
        }
    }
    else if(i == 10)
    {
        if(tableauj[id].identifiant == id)
        {
            printf("Vous manquez de s\x82rieux pendant vos vacances et ne travaillez pas, perdez 150min.\n");
            tableauj[id].portefeuille = tableauj[id].portefeuille - 150;
        }
    }
    else if(i == 11)
    {
        if(tableauj[id].identifiant == id)
        {
            printf("C'est la fin de semaine, vous avez suffisament avnc\x82 dans votre travail et profitez d'un repos bien m\x82rit\x82, vous gagnez 120min\n");
            tableauj[id].portefeuille = tableauj[id].portefeuille + 120;
        }
    }
}
