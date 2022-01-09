#include <stdio.h>
#include <stdlib.h>
#include "structures.h"

void payerloyer(int portj,int prix)
{
    printf("vous devez lui payer %d\n",prix);
    if(portj>prix)
    {
        portj=portj-prix;
        printf("vous avez de quoi payer, il vous reste donc %d minutes apres le payement",portj);
    }
    else
    {
        printf("vous n'avez pas de quoi payer ce loyer, que voulez vous faire ?\n");

    }
}
