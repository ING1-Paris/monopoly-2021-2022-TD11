#include "maBiblio.h"


///Ce qu'il faudra implanter dans le main.

int main()
{
    char sortiep = 'r';
        int c = menu();//Appelle la fonction menu tout en stockant son return dans la variable c.
        int test = affchoix(c);//Appelle la proc�dure affchoix tout en passant en param�tre c qui contient le return de menu.
        if(test == 0)
        {
            return 0;
        }
        if(test == 1)
        {
            menu();
            int test = affchoix(c);
        }
}
