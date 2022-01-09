#include <stdio.h>
#include <stdlib.h>
#include "structures.h"

void achatcours(int j,int portj,structcase cases)
{
    int a;
    if(cases.coutDachat>portj)
    {
        printf("vous ne pouvez pas acheter cette matiere car vous n'avez pas assez de temps\n");
        printf("entrez 2 pour continuer votre tour\n");
        scanf("%d",&a);
        return;
    }
    else
    {
        do{
        printf("cette matiere n'appartient à personne voulez vous l'acheter ? \n");
        printf("elle vous couteras %d minutes",cases.coutDachat);
        printf("si oui entrez 1\n");
        printf("sinon entrez 0\n");
        scanf("%d",&a);
        }while(a<0 || a>1);
        if(a==1)
        {
            system("cls");
            portj=portj-cases.coutDachat;
            cases.proprietaire=j;
            printf("vous venez d'acheter la carte %s \n",cases.nomCase);
            printf("il vous reste %d minutes\n",portj);

        }
        if(a==0)
        {
            printf("vous ne voulez pas acheter cette case, vous allez donc pouvoir continuer votre tour\n");
            return;
        }
    }
}
