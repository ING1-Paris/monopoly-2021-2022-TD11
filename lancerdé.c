#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "structures.h"
int lancerde(){

int a;
int b;
int dee;
a = 1+rand()%6;
b = 1+rand()%6;
dee = a+b;
printf("le total est %d", a);
printf("+ %d ",b);
printf("donc : %d\n",dee);
}
