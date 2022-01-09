#include <stdio.h>
#include <stdlib.h>
#include "structures.h"

void arrivcase(int j,int tab[9][5],int pionj1,structcase cases[32],joueur tableauj[4],int de)
{
    int i;//variable stockant le numero de la case sur laquelle se trouve le joueur
    int gare=0;//variable stockant le nombre de gares que le propriétaire de la gare sur laquelle est le joueur, possède
    int pgare=25;//prix pour une seul gare possédée
    int comppay;//prix que le joueur payera sur une langue vivante(compagnies d'elec et d'eau)
    //code servant à recupérer le numero de la case en fonction de l'emplacement du pion sur le plateau
    for(int b=1; b<=4; b++)
    {
        for(int a=1; a<=8; a++)
        {
            if(tab[a][b]==pionj1)
            {
                i=((b-1)*8)+(a-1);
                printf("%d\n",i);
                printf("vous \x88tes sur la case %s\n ",cases[i].nomCase);
                cases[i].casesutil=1;
            }
        }
    }
    //mise en place des actions possible et à faire pour chaque case sur laquelle le joueur tombe
    if(cases[0].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case d\x82part, vous recevez 200 minutes\n");
        tableauj[j].portefeuille=tableauj[j].portefeuille+200;//gain de minutes à chaque arret sur la case départ (doubler si le joueur est arreter precisement decu)
        printf("vous avez donc %d minutes d\x82sormais\n",tableauj[j].portefeuille);
    }
    if(cases[1].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s \n",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)// en cas de propriétaire pour la case payement su loyer
        {
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[i].nbfiches==0)//sans fiches
            {
                if(cases[i].proprietaire==cases[i+2].proprietaire)//doublé si le propriétaire possède les deux de la même couleur
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix20);
                }
                else
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix0);
                }
            }

            if(cases[i].nbfiches==1)//pour une fiche
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix1);
            }
            if(cases[i].nbfiches==2)//pour deux fiches
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix2);
            }
            if(cases[i].nbfiches==3)//pour trois fiches
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix3);
            }
            if(cases[i].nbfiches==4)//pour 4 fiches
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix4);
            }
            if(cases[i].nbfiches==5)//pour 5 fiches
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix5);
            }
        }
    }

    if(cases[2].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s \n",cases[i].nomCase);
        printf("le repas de famille vous prends 100 minutes");
        if(tableauj[j].portefeuille>100)//si le joueur peut payer
        {
            tableauj[j].portefeuille=tableauj[j].portefeuille-100;//on lui retire automatiquement l'argent
            printf("vous avez de quoi payer, il vous reste donc %d minutes apres le payement",tableauj[j].portefeuille);
        }
        else//sinon on lui propose les solutions pour eviter la faillite
        {
            printf("vous n'avez pas de quoi payer ce loyer, que voulez vous faire ?\n");

        }
    }
    if(cases[3].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s \n",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[i].nbfiches==0)
            {
                if(cases[i].proprietaire==cases[i-2].proprietaire)
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix20);
                }
                else
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix0);
                }
            }

            if(cases[i].nbfiches==1)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix1);
            }
            if(cases[i].nbfiches==2)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix2);
            }
            if(cases[i].nbfiches==3)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix3);
            }
            if(cases[i].nbfiches==4)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix4);
            }
            if(cases[i].nbfiches==5)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix5);
            }
        }
    }
    if(cases[4].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            gare=1;
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
//calcul du nombre de gares possédées par le propriétaire
            if(cases[i].proprietaire==cases[12].proprietaire)
            {
                gare=gare+1;
            }
            if(cases[i].proprietaire==cases[20].proprietaire)
            {
                gare=gare+1;
            }
            if(cases[i].proprietaire==cases[28].proprietaire)
            {
                gare=gare+1;
            }
            for(int y=1; y<=gare; y++)
            {
                pgare=pgare*2;//calcul du prix à payer en fonction du nombre de gare
            }
            printf("%s ayant %d masterclasses vous devez lui payer %d \n",tableauj[cases[i].proprietaire].nom,gare,pgare);

            if(tableauj[j].portefeuille>pgare)//si le joueur peut payer il paie
            {
                tableauj[j].portefeuille=tableauj[j].portefeuille-pgare;
                printf("vous avez de quoi payer, il vous reste donc %d minutes apres le payement",tableauj[j].portefeuille);
            }
            else//sinon on lui propose des solutions pour pouvoir payer
            {
                printf("vous n'avez pas de quoi payer ce loyer, que voulez vous faire ?\n");

            }

        }
    }
    if(cases[5].casesutil==1)//comme pour les autres cases propriétées
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s \n",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[i].nbfiches==0)
            {
                if(cases[i].proprietaire==cases[i+2].proprietaire)
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix20);
                }
                else
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix0);
                }
            }

            if(cases[i].nbfiches==1)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix1);
            }
            if(cases[i].nbfiches==2)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix2);
            }
            if(cases[i].nbfiches==3)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix3);
            }
            if(cases[i].nbfiches==4)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix4);
            }
            if(cases[i].nbfiches==5)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix5);
            }
        }
    }
    if(cases[6].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
        //piochercarte chance;
    }
    if(cases[7].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s \n",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[i].nbfiches==0)
            {
                if(cases[i].proprietaire==cases[i-2].proprietaire)
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix20);
                }
                else
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix0);
                }
            }

            if(cases[i].nbfiches==1)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix1);
            }
            if(cases[i].nbfiches==2)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix2);
            }
            if(cases[i].nbfiches==3)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix3);
            }
            if(cases[i].nbfiches==4)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix4);
            }
            if(cases[i].nbfiches==5)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix5);
            }
        }
    }
    if(cases[8].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s , mais en simple passage\n",cases[i].nomCase);
    }
    if(cases[9].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s \n",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[i].nbfiches==0)
            {
                if(cases[i].proprietaire==cases[i+2].proprietaire)
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix20);
                }
                else
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix0);
                }
            }

            if(cases[i].nbfiches==1)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix1);
            }
            if(cases[i].nbfiches==2)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix2);
            }
            if(cases[i].nbfiches==3)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix3);
            }
            if(cases[i].nbfiches==4)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix4);
            }
            if(cases[i].nbfiches==5)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix5);
            }
        }
    }
    if(cases[10].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[10].proprietaire==cases[22].proprietaire)
            {
                    comppay=10*de;
                    printf("%s possedant les deux Langues vivantes vous devez payer %d",tableauj[cases[i].proprietaire].nom,comppay);
            }
            else
            {
                comppay=4*de;
                printf("%s ne possedant qu une Langue vivante vous devez payer %d",tableauj[cases[i].proprietaire].nom,comppay);
            }
            if(tableauj[j].portefeuille>comppay)
            {
                tableauj[j].portefeuille=tableauj[j].portefeuille-comppay;
                printf("vous avez de quoi payer, il vous reste donc %d minutes apres le payement",tableauj[j].portefeuille);
            }
            else
            {
                printf("vous n'avez pas de quoi payer ce loyer, que voulez vous faire ?\n");

            }
        }
    }
    if(cases[11].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s \n",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[i].nbfiches==0)
            {
                if(cases[i].proprietaire==cases[i-2].proprietaire)
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix20);
                }
                else
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix0);
                }
            }

            if(cases[i].nbfiches==1)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix1);
            }
            if(cases[i].nbfiches==2)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix2);
            }
            if(cases[i].nbfiches==3)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix3);
            }
            if(cases[i].nbfiches==4)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix4);
            }
            if(cases[i].nbfiches==5)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix5);
            }
        }
    }
    if(cases[12].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            gare=1;
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[i].proprietaire==cases[4].proprietaire)
            {
                gare=gare+1;
            }
            if(cases[i].proprietaire==cases[20].proprietaire)
            {
                gare=gare+1;
            }
            if(cases[i].proprietaire==cases[28].proprietaire)
            {
                gare=gare+1;
            }
            for(int y=1; y<=gare; y++)
            {
                pgare=pgare*2;
            }
            printf("%s ayant %d masterclasses vous devez lui payer %d \n",tableauj[cases[i].proprietaire].nom,gare,pgare);

            if(tableauj[j].portefeuille>pgare)
            {
                tableauj[j].portefeuille=tableauj[j].portefeuille-pgare;
                printf("vous avez de quoi payer, il vous reste donc %d minutes apres le payement",tableauj[j].portefeuille);
            }
            else
            {
                printf("vous n'avez pas de quoi payer ce loyer, que voulez vous faire ?\n");

            }

        }
    }
    if(cases[13].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s \n",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[i].nbfiches==0)
            {
                if(cases[i].proprietaire==cases[i+2].proprietaire)
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix20);
                }
                else
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix0);
                }
            }

            if(cases[i].nbfiches==1)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix1);
            }
            if(cases[i].nbfiches==2)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix2);
            }
            if(cases[i].nbfiches==3)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix3);
            }
            if(cases[i].nbfiches==4)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix4);
            }
            if(cases[i].nbfiches==5)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix5);
            }
        }
    }
    if(cases[14].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
        //piocher carte communauté
    }
    if(cases[15].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s \n",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[i].nbfiches==0)
            {
                if(cases[i].proprietaire==cases[i-2].proprietaire)
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix20);
                }
                else
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix0);
                }
            }

            if(cases[i].nbfiches==1)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix1);
            }
            if(cases[i].nbfiches==2)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix2);
            }
            if(cases[i].nbfiches==3)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix3);
            }
            if(cases[i].nbfiches==4)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix4);
            }
            if(cases[i].nbfiches==5)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix5);
            }
        }
    }
    if(cases[16].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[17].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s \n",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[i].nbfiches==0)
            {
                if(cases[i].proprietaire==cases[i+2].proprietaire)
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix20);
                }
                else
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix0);
                }
            }

            if(cases[i].nbfiches==1)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix1);
            }
            if(cases[i].nbfiches==2)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix2);
            }
            if(cases[i].nbfiches==3)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix3);
            }
            if(cases[i].nbfiches==4)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix4);
            }
            if(cases[i].nbfiches==5)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix5);
            }
        }
    }
    if(cases[18].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
        //piochercete chance
    }
    if(cases[19].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s \n",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[i].nbfiches==0)
            {
                if(cases[i].proprietaire==cases[i-2].proprietaire)
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix20);
                }
                else
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix0);
                }
            }

            if(cases[i].nbfiches==1)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix1);
            }
            if(cases[i].nbfiches==2)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix2);
            }
            if(cases[i].nbfiches==3)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix3);
            }
            if(cases[i].nbfiches==4)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix4);
            }
            if(cases[i].nbfiches==5)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix5);
            }
        }
    }
    if(cases[20].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            gare=1;
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[i].proprietaire==cases[12].proprietaire)
            {
                gare=gare+1;
            }
            if(cases[i].proprietaire==cases[4].proprietaire)
            {
                gare=gare+1;
            }
            if(cases[i].proprietaire==cases[28].proprietaire)
            {
                gare=gare+1;
            }
            for(int y=1; y<=gare; y++)
            {
                pgare=pgare*2;
            }
            printf("%s ayant %d masterclasses vous devez lui payer %d \n",tableauj[cases[i].proprietaire].nom,gare,pgare);

            if(tableauj[j].portefeuille>pgare)
            {
                tableauj[j].portefeuille=tableauj[j].portefeuille-pgare;
                printf("vous avez de quoi payer, il vous reste donc %d minutes apres le payement",tableauj[j].portefeuille);
            }
            else
            {
                printf("vous n'avez pas de quoi payer ce loyer, que voulez vous faire ?\n");

            }

        }
    }
    if(cases[21].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s \n",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[i].nbfiches==0)
            {
                if(cases[i].proprietaire==cases[i+2].proprietaire)
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix20);
                }
                else
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix0);
                }
            }

            if(cases[i].nbfiches==1)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix1);
            }
            if(cases[i].nbfiches==2)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix2);
            }
            if(cases[i].nbfiches==3)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix3);
            }
            if(cases[i].nbfiches==4)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix4);
            }
            if(cases[i].nbfiches==5)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix5);
            }
        }
    }
    if(cases[22].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[10].proprietaire==cases[22].proprietaire)
            {
                    comppay=10*de;
                    printf("%s possedant les deux Langues vivantes vous devez payer %d",tableauj[cases[i].proprietaire].nom,comppay);
            }
            else
            {
                comppay=4*de;
                printf("%s ne possedant qu une Langue vivante vous devez payer %d",tableauj[cases[i].proprietaire].nom,comppay);
            }
            if(tableauj[j].portefeuille>comppay)
            {
                tableauj[j].portefeuille=tableauj[j].portefeuille-comppay;
                printf("vous avez de quoi payer, il vous reste donc %d minutes apres le payement",tableauj[j].portefeuille);
            }
            else
            {
                printf("vous n'avez pas de quoi payer ce loyer, que voulez vous faire ?\n");

            }
        }
    }
    if(cases[23].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s \n",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[i].nbfiches==0)
            {
                if(cases[i].proprietaire==cases[i-2].proprietaire)
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix20);
                }
                else
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix0);
                }
            }

            if(cases[i].nbfiches==1)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix1);
            }
            if(cases[i].nbfiches==2)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix2);
            }
            if(cases[i].nbfiches==3)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix3);
            }
            if(cases[i].nbfiches==4)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix4);
            }
            if(cases[i].nbfiches==5)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix5);
            }
        }
    }
    if(cases[24].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
        printf("un ami vous a alpagu\x82 et vous \x88tes oblig\x82 d'aller en soir\x82 directement \n");
        printf("vous ne passez pas par la case départ");
    }
    if(cases[25].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s \n",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[i].nbfiches==0)
            {
                if(cases[i].proprietaire==cases[i+2].proprietaire)
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix20);
                }
                else
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix0);
                }
            }

            if(cases[i].nbfiches==1)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix1);
            }
            if(cases[i].nbfiches==2)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix2);
            }
            if(cases[i].nbfiches==3)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix3);
            }
            if(cases[i].nbfiches==4)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix4);
            }
            if(cases[i].nbfiches==5)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix5);
            }
        }
    }
    if(cases[26].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
        //piochercarte caisse de communauté
    }
    if(cases[27].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s \n",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[i].nbfiches==0)
            {
                if(cases[i].proprietaire==cases[i-2].proprietaire)
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix20);
                }
                else
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix0);
                }
            }

            if(cases[i].nbfiches==1)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix1);
            }
            if(cases[i].nbfiches==2)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix2);
            }
            if(cases[i].nbfiches==3)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix3);
            }
            if(cases[i].nbfiches==4)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix4);
            }
            if(cases[i].nbfiches==5)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix5);
            }
        }
    }
    if(cases[28].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            gare=1;
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[i].proprietaire==cases[12].proprietaire)
            {
                gare=gare+1;
            }
            if(cases[i].proprietaire==cases[20].proprietaire)
            {
                gare=gare+1;
            }
            if(cases[i].proprietaire==cases[4].proprietaire)
            {
                gare=gare+1;
            }
            for(int y=1; y<=gare; y++)
            {
                pgare=pgare*2;
            }
            printf("%s ayant %d masterclasses vous devez lui payer %d \n",tableauj[cases[i].proprietaire].nom,gare,pgare);

            if(tableauj[j].portefeuille>pgare)
            {
                tableauj[j].portefeuille=tableauj[j].portefeuille-pgare;
                printf("vous avez de quoi payer, il vous reste donc %d minutes apres le payement",tableauj[j].portefeuille);
            }
            else
            {
                printf("vous n'avez pas de quoi payer ce loyer, que voulez vous faire ?\n");

            }

        }
    }
    if(cases[29].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s \n",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[i].nbfiches==0)
            {
                if(cases[i].proprietaire==cases[i+2].proprietaire)
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix20);
                }
                else
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix0);
                }
            }

            if(cases[i].nbfiches==1)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix1);
            }
            if(cases[i].nbfiches==2)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix2);
            }
            if(cases[i].nbfiches==3)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix3);
            }
            if(cases[i].nbfiches==4)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix4);
            }
            if(cases[i].nbfiches==5)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix5);
            }
        }
    }
    if(cases[30].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
        printf("votre sieste inopin\x82e vous permet certe de recuperer d'une trop courte nuit");
        printf("mais elle vous aura fait perdre 200 minutes");
        if(tableauj[j].portefeuille>200)//si le joueur peut payer
        {
            tableauj[j].portefeuille=tableauj[j].portefeuille-200;//on lui retire automatiquement l'argent
            printf("vous avez de quoi payer, il vous reste donc %d minutes apres le payement",tableauj[j].portefeuille);
        }
        else//sinon on lui propose les solutions pour eviter la faillite
        {
            printf("vous n'avez pas de quoi payer cette sieste, que voulez vous faire ?\n");

        }
    }
    if(cases[31].casesutil==1)
    {
        system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s \n",cases[i].nomCase);
        if(cases[i].proprietaire==0)//si il n'y a pas de propriétaire à la case
        {
            achatcours(j,tableauj[j].portefeuille,cases[i]);
        }
        if(cases[i].proprietaire!=0)
        {
            printf("cette case appartient \x85 %s \n",tableauj[cases[i].proprietaire].nom);
            if(cases[i].nbfiches==0)
            {
                if(cases[i].proprietaire==cases[i-2].proprietaire)
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix20);
                }
                else
                {
                    payerloyer(tableauj[j].portefeuille,cases[i].prix0);
                }
            }

            if(cases[i].nbfiches==1)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix1);
            }
            if(cases[i].nbfiches==2)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix2);
            }
            if(cases[i].nbfiches==3)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix3);
            }
            if(cases[i].nbfiches==4)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix4);
            }
            if(cases[i].nbfiches==5)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix5);
            }
        }
    }
}
