#include "maBiblio.h"
void charger_une_ancienne_partie(joueur Joueur[], int* nbJoueurs)
{
    int partie;
    FILE* fichier = NULL;
    char c = 0;
    do
    {
        printf("Quelle partie souhaitez-vous reprendre ? La partie 1, 2 ou 3 : \n");
        scanf("%d",&partie);

    }
    while(partie<1 || partie>3);       ///Pourquoi les deux conditions ne fonctionnent pas ensemble ????---> Pourquoi y a t'il des & ?
    printf("Votre fichier est entrain de s'ouvrir...");
    if (partie == 1 )
    {
        ///CHARGEMENT DE LA PARTIE 1
        FILE* fichier = fopen("C:\\Users\\Eleonore\\Desktop\\sauvegarde1.txt", "r");//charge un fichier text qui n'existe pas avant et l'affiche sur le  bureau
        fscanf(fichier, "%d\n", &nbJoueurs);///Demander ce qu'on veut modifier ici
        for (int i = 0; i < *nbJoueurs; i++)
        {
            fscanf(fichier, "%d %s %d %d \n", &Joueur[i].identifiant, &Joueur[i].nom, &Joueur[i].portefeuille, &Joueur[i].connais, &Joueur[i].emplacement);///manque le % du tableau de struct dans le fscanf
            fflush(stdin);
        }
        fclose(fichier);
        fichier = NULL;

    }
    if (partie == 2 )
    {
        ///CHARGEMENT DE LA PARTIE 2
        FILE* fichier = fopen("C:\\Users\\Eleonore\\Desktop\\sauvegarde2.txt", "r");
        fscanf(fichier, "%d\n", nbJoueurs);
        for (int i = 0; i < *nbJoueurs; i++)
        {
            fscanf(fichier, "%d %s %d /*manque le % du tableau de struct*/ %d \n", &Joueur[i].identifiant, &Joueur[i].nom, &Joueur[i].portefeuille, &Joueur[i].connais, &Joueur[i].emplacement);
        }
        fclose(fichier);
        fichier = NULL;

    }
    if (partie == 3)
    {
        ///CHARGEMENT DE LA PARTIE 3
        FILE* fichier = fopen("C:\\Users\\Eleonore\\Desktop\\sauvegarde3.txt", "r");
        fscanf(fichier, "%d\n", nbJoueurs);
        for (int i = 0; i < *nbJoueurs; i++)
        {
            fscanf(fichier, "%d %s %d /*manque le % du tableau de struct*/ %d \n", &Joueur[i].identifiant, &Joueur[i].nom, &Joueur[i].portefeuille, &Joueur[i].connais, &Joueur[i].emplacement);
        }
        fclose(fichier);
        fichier = NULL;
    }
    return 0;
}
