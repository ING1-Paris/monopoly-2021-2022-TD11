#include <stdio.h>
#include <stdlib.h>
#include "structures.h"

void arrivcase(int j,int tab[9][5],int pionj1,structcase cases[32],joueur tableauj[4])
{
    int i;
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
    if(cases[0].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case d\x82part, vous recevez 200 minutes\n");
        tableauj[j].portefeuille=tableauj[j].portefeuille+200;
        printf("vous avez donc %d minutes\n",tableauj[j].portefeuille);
    }
    if(cases[1].casesutil==1)
    {
        ////system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s \n",cases[i].nomCase);
        if(cases[i].proprietaire!=0)
        {
            printf("cette case appartient \x85 %s \n",tableauj[cases[1].proprietaire].nom);
            if(cases[i].nbfiches==0)
            {
                if(cases[i].proprietaire==cases[i+2].proprietaire)
                {
                    printf("vous devez lui payer %d\n",cases[i].prix20);
                    if(tableauj[j].portefeuille>cases[i].prix20)
                    {
                        tableauj[j].portefeuille=tableauj[j].portefeuille-cases[i].prix20;
                        printf("vous avez de quoi payer, il vous reste donc %d minutes apres le payement\n",tableauj[j].portefeuille);
                    }
                    else
                    {
                        printf("vous n'avez pas de quoi payer ce loyer, que voulez vous faire ?\n");

                    }
                }
                else
                {
                    printf("vous devez lui payer %d\n",cases[i].prix0);
                    if(tableauj[j].portefeuille>cases[i].prix0)
                    {
                        tableauj[j].portefeuille=tableauj[j].portefeuille-cases[i].prix0;
                        printf("vous avez de quoi payer, il vous reste donc %d minutes apres le payement\n",tableauj[j].portefeuille);
                    }
                    else
                    {
                        printf("vous n'avez pas de quoi payer ce loyer, que voulez vous faire ?\n");

                    }
                }
            }

            if(cases[i].nbfiches==1)
            {
                printf("vous devez lui payer %d\n",cases[1].prix1);
                if(tableauj[j].portefeuille>cases[i].prix1)
                {
                    tableauj[j].portefeuille=tableauj[j].portefeuille-cases[i].prix1;
                    printf("vous avez de quoi payer, il vous reste donc %d minutes apres le payement\n",tableauj[j].portefeuille);
                }
                else
                {
                    printf("vous n'avez pas de quoi payer ce loyer, que voulez vous faire ?\n");
                }
            }
             if(cases[i].nbfiches==2)
            {
                payerloyer(tableauj[j].portefeuille,cases[i].prix2);
            }
        }
    }
    /*
    if(cases[2].casesutil==1)
    {
        ////system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[3].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[4].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[5].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[6].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[7].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[8].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[9].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[10].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[11].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[12].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[13].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[14].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[15].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[16].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[17].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[18].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[19].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[20].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[21].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[22].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[23].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[24].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[25].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[26].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[27].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[28].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[29].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[30].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }
    if(cases[31].casesutil==1)
    {
        //system("cls");
        printf("vous \x88tes tomb\x82 sur la case %s",cases[i].nomCase);
    }*/
}
