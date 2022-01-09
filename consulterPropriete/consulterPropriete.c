#include "maBiblio.h"

void consulterPropriete(joueur tableauj[4],int nbjoueurs)
{
    int i,id;
    char choix;
    printf("Entrez p pour pouvoir consulter les propri\x82t\x82s des diff\x82rents joueurs.\n\n");
    fflush(stdin);
    scanf("%c", &choix);
    if(choix == 'p')
    {
        printf("Entrez l'ID du joueur dont vous souhaitez consulter les propri\x82t\x82s.\n");
        for(i=1; i<nbjoueurs+1; i++)
        {
            printf("ID %d = %s\n", i, tableauj[i].nom);

        }
            do
            {
                printf("Entrer ID :\n");
                fflush(stdin);
                scanf("%d", &id);
            }while(id<1 || id>nbjoueurs);
            if(id == 1)
            {
                for(i = 0; i<22; i++)
                {
                    printf("%d = %s\n", i, tableauj[id].connais[i]);
                }
            }
            if(id == 2)
            {
                for(i = 0; i<22; i++)
                {
                    printf("%d = %s\n", i, tableauj[id].connais[i]);
                }
            }
            if(id == 3)
            {
                for(i = 0; i<22; i++)
                {
                    printf("%d = %s\n", i, tableauj[id].connais[i]);
                }
            }
            if(id == 4)
            {
                for(i = 0; i<22; i++)
                {
                    printf("%d = %s\n", i, tableauj[id].connais[i]);
                }
            }
    }
}
