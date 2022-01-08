#include "maBiblio.h"


void chance(/*nbm de fois tombé sur case chance*/, int nombreJoueurs, joueur joueur)//Inserer en parametre la variable du nbm de fois où les joueurs sont tombés sur une case chance, la structure joueur.
{
    int i,id;
    id = joueur.identifiant;
    printf("Carte CHANCE\n\n");
    if(i == 0)
    {
        if(joueur.identifiant == id)
        {
            printf("Vous avez une bonne excuse pour sortir de la soiree, gardez cette carte, elle vous permet de sortir de la soiree.\n");
            t_joueur.sortieSoiree =+ 1;//Ajoute 1 au nombre de cartes permettant au joueur de sortir de la prison.
        }

    }
    else if(i == 1)
    {
        printf("Vous \x88tes malades, perdez 60 min.\n");//Verifier code ASCII.OK
        if(joueur.identifiant == id)
        {
            joueur.portefeuille = joueur.portefeuille - 60;
        }

    }

    else if(i == 2)
    {
        if(joueur.identifiant == id)
        {
            printf("Nous sommes Mardi, suivez la prochaine Masterclass, si un étudiant la possede d\x82j\x85, perdez le double sinon vous pouvez l’acheter.\n");
            if(structcase.proprietaire == '0')
            {
                //J'ai besoin de qqn pour coder si la propriété est déjà possédée par un joueur ou non.
                printf("Cette masterclass n'appartient \x85 personne, vous pouvez l'acheter.");
                //intégrer achat propriété.
            }
            else if(!(structcase.propietaire == '0'))
            {
                printf("La case appartient \x85 un autre joueur, perdez le double du temps normalement pr\x82vu.");
                //intégrer code pour payer le loyer et faire * 2
            }
        }
    }

    else if(i == 3)
    {
        printf("Vos amis vous aident \x85 r\x82viser, recevez 20min par joueurs pr\x82sent sur le plateau.\n");
        if(joueur.identifiant == id)
        {
            joueur.portefeuille = joueur.portefeuille + 20*nbJoueurs;//Verifier nbJoueurs et si ok, passer en parametre de la fonction.
        }
    }
    else if(i == 4)
    {
        printf("Vos prises de notes ne tiennent plus la route, vous devez les r\x82diger \x85 nouveau, perdez 25min par fiche et 40min par cahier.\n");
        if(joueur.identifiant == id)
            for(int j = 0, j</*Nombre de fiches du joueur*/, j++)
            {
                joueur.portefeuille = joueur.portefeuille - 25;
            }
        for(j = 0, j </*Nombre de cahiers qu'il possède*/, j++)             ///ATTENTION ICI RECTIFICATION A FAIRE
        {
            joueur.portefeuille = joueur.portefeuille - 40;
        }
    }
    else if(i == 5)
    {
        if(joueur.identifiant == id)
        {
            printf("Une session de soutien en physique vous est proposee, avancez jusqu’au Chapitre 1 de mecanique. Si vous passez par la case d\x82part, recevez 200min.\n");
            while(joueur.emplacement != /*Inserer coordonnées de la case*/)
            {
                joueur.emplacement =+ 1;//Demander programme pour deplacement pion d'une case.
                if(joueur.emplacement == /*Inserer coordonnees de la case*/)                ///ATTENTION ICI RECTIFICATION A FAIRE
                {
                    joueur.portefeuille = joueur.portefeuille + 200;
                }
            }
        }
    }
    else if(i == 6)
    {
        printf("Vos cahier ne tiennent plus la route, vous devez les r\x82diger à nouveau. Payez 40min par fiche et 115min par cahier.\n");
        if(joueur.identifiant == id)
        {
            for(int j = 0, j</*Nombre de fiches qu'il possède*/, j++)
            {
                joueur.portefeuille = joueur.portefeuille - 40;                     ///ATTENTION ICI RECTIFICATION A FAIRE, EN DESSOUS AUSSI
            }
            for(j = 0, j </*Nombre de cahiers qu'il possède*/, j++)
            {
                joueur.portefeuille = joueur.portefeuille - 115;
            }
        }

    }
    else if(i == 7)
    {
        if(joueur.identifiant == id)
        {
            printf("Un ami vous appelle et vous propose une soiree tout de suite, vous vous y rendez immediatement et vous ne passez pas par la case depart.\n");
            joueur.emplacement = //coordonnées de la prison.
        }
    }

    else if(i == 8)
    {
        if(joueur.identifiant == id)
        {
            printf("Une session de soutien en informatique vous est proposee, avancez jusqu’au Chapitre 2 algorithme et programmation, si vous passez par la case d\x82part vous obtiendrez 200min.\n");
            while(joueur.emplacement != /*Inserer coordonnées de la case*/)
            {
                joueur.emplacement =+ 1;//Demander programme pour deplacement pion d'une case.
                if(joueur.emplacement == /*Inserer coordonnees de la case*/)
                {
                    joueur.portefeuille = joueur.portefeuille + 200;                    ///RECTIFICATION A FAIRE
                }
            }
        }
    }

    else if(i == 9)
    {
        if(joueur.identifiant == id)
        {
            printf("Vous \x88tes exclu de cours pour non-port du masque, payez 100min.\n");
            joueur.portefeuille = joueur.portefeuille - 100;
        }
    }
    else if(i == 10)
    {
        if(joueur.identifiant == id)
        {
            printf("C'est l'anniversaire de votre meilleur ami, allez directement \x85 sa soiree sans passer par la case d\x82part.\n");
            joueur.emplacement = //coordonnées de la prison.
        }
    }
    else if(i == 11)
    {
        if(joueur.identifiant == id)
        {
            printf("C’est votre anniversaire, vous recevez un livre de physique, vous gagnez 150min. \n");
            joueur.portefeuille = joueur.portefeuille + 150;
        }
    }
}

void caisseDeCommunaute()//memes parametres que pour chance()
{
    int i;
    printf("Carte CAISSE DE COMMUNAUTE\n\n");
    if(i == 0)
    {
        if(joueur.identifiant == id)
        {
            printf("Vous avez oubli\x82 votre carte \x82tudiant, vous perdez 120min. \n");
            joueur.portefeuille = joueur.portefeuille - 120;
        }
    }
    else if(i == 1)
    {
        if(joueur.identifiant == id)
        {
            printf("Vous jouez \x85 la console au lieu de travailler, vous perdez 20 min.\n");//Verifier code ASCII.
            if(joueur.identifiant == /*Joueur sur la case*/)
            {
                joueur.portefeuille = joueur.portefeuille - 20;
            }
        }
    }
    else if(i == 2)
    {
        if(joueur.identifiant == id)
        {
            printf("Suivez la prochaine LV2, si un étudiant la possede d\x82j\x85, payez le double sinon vous pouvez l’acheter.\n");
            if(structcase.proprietaire == '0')
            {
                //J'ai besoin de qqn pour coder si la propriété est déjà possédée par un joueur ou non.
                printf("Cette LV2 n'appartient \x85 personne, vous pouvez l'acheter.");
                //intégrer achat propriété.
            }
            else if(!(structcase.propietaire == '0'))
            {
                printf("La case appartient \x85 un autre joueur, perdez le double du temps normalement pr\x82vu.");
                //intégrer code pour payer le loyer et faire * 2
            }
        }
    }
    else if(i == 3)
    {
        if(joueur.identifiant == id)
        {
            printf("Vous avez une bonne excuse pour sortir de la soiree, gardez cette carte, elle vous permet de sortir de la soiree.\n");
            joueur.sortieSoiree =+ 1;
        }
    }
    else if(i == 4)
    {
        if(joueur.identifiant == id)
        {
            printf("Vous avez oubli\x82 de pr\x82parer votre prochain cours de maths, perdez 50min.\n");
            joueur.portefeuille = joueur.portefeuille - 50;
        }
    }
    else if(i == 5)
    {
        if(joueur.identifiant == id)
        {
            printf("La semaine passe vite ! rendez-vous sur la case d\x82part.\n");
            joueur.emplacement = /*coordonnées case départ*/   //Il serait intéressant d'automatiser la case départ.
        }
    }
    else if(i == 6)
    {
        if(joueur.identifiant == id)
        {
            printf("Vous \x88tes surmotiv\x82 et travaillez tout votre week-end, recevez 100min.\n");
            joueur.portefeuille = joueur.portefeuille + 100;
        }
    }
    else if(i == 7)
    {
        if(joueur.identifiant == id)
        {
            printf("Un ami vous appelle et vous propose une soiree tout de suite, vous vous y rendez immediatement et vous ne passez pas par la case depart.\n");
            joueur.emplacement = //coordonnées de la prison.
        }
    }
    else if(i == 8)
    {
        if(joueur.identifiant == id)
        {
            printf("Votre professeur est malade, vous perdez de precieuses minutes de cours, perdez 90min.\n");
            joueur.portefeuille = joueur.portefeuille - 90;
        }
    }
    else if(i == 9)
    {
        if(joueur.identifiant == id)
        {
            printf("Vous trichez pour le rendu d'un dm. Tirez les d\x82s, si vous obtenez moins de 9, vous perdez 30min, si vous obtenez 9 ou plus, vous gagnez 60min.\n");
            int test = lancerdes();
            if(test<9)
            {
                joueur.portefeuille = joueur.portefeuille - 30;
            }
            else if(test >= 9)
            {
                joueur.portefeuille = joueur.portefeuille + 60;
            }
        }
    }
    else if(i == 10)
    {
        if(joueur.identifiant == id)
        {
            printf("Vous manquez de s\x82rieux pendant vos vacances et ne travaillez pas, perdez 150min.\n");
            joueur.portefeuille = joueur.portefeuille - 150;
        }
    }
    else if(i == 11)
    {
        if(joueur.identifiant == id)
        {
            printf("C'est la fin de semaine, vous avez suffisament avnc\x82 dans votre travail et profitez d'un repos bien m\x82rit\x82, vous gagnez 120min\n");
            joueur.portefeuille = joueur.portefeuille + 120;
        }
    }
}
int main()
{
    printf("Hello world!\n");
    return 0;
}
