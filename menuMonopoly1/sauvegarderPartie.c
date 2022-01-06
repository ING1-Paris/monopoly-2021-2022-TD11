#include "maBiblio.h"

void sauvegarderPartie(joueur Joueur[], int nbJoueurs)
{
    FILE* fichier = fopen("../sauvegarde.txt", "w");       /// sauvegarde une partie en général comment la rendre selective pour la 1,2 et 3??
    if(fichier != NULL)   // on devrait toujours vérifier que le fichier est bien ouvert
    {
        fprintf(fichier, "%d\n", nbJoueurs);
        for (int i = 0; i < nbJoueurs; i++)
        {
            fprintf(fichier, "%d %s %d /*manque le % du tableau de struct*/ %d \n", &Joueur[i].identifiant, &Joueur[i].nom, &Joueur[i].portefeuille, &Joueur[i].connais, &Joueur[i].emplacement);
            fflush(stdin);
        }
        fclose(fichier);
        fichier = NULL;
    }
    else
    {
        printf("Erreur.");
    }
}
