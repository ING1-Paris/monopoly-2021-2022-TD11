#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "structures.h"
#include <windows.h>



int main()
{
    int nbjoueurs;
    do
    {
        printf("nombre de joueurs? (maximum 4 joueurs)\n");
        scanf("%d",&nbjoueurs);
    }
    while(nbjoueurs>4 || nbjoueurs<2); //blindage pour ne pas dépasser 6 joueurs
    joueur tableauj[nbjoueurs+1]; // création d'un tableau de joueurs de la taille du nombre de joueurs plus un
    debutpartie(nbjoueurs,tableauj);
    int tab[9][5];
    structcase cases[32];
    initialisation(cases);

    cases[31].proprietaire=2;
    cases[31].nbfiches=4;

    tab[8][4]=6;
    arrivcase(2,tab,6,cases,tableauj);

}





