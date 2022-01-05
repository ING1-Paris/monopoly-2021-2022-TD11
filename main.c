#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "structures.h"
#include <windows.h>



int main()
{
  structcase cases[32];
  initialisation(cases[32]);
  for(int i=0;i<32;i++){
    printf("%s\n",cases[i].nomCase);
    printf("%d\n",cases[i].vProap);
  }

}

