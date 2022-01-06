#include "maBiblio.h"

void demande_sauvegarde(joueur Joueur[], int nbJoueurs)       //demande si oui ou non on veut sauvegarder la partie
{
    int choix, choix_;
    printf("Voulez-vous sauvegarder votre partie ? Tapez 1 si oui tapez 0 si non !\n");
    scanf("%d",&choix);

    if (choix == 1 )
    {
        printf("Vous avez choisi de sauvegarger votre partie ! \n");
        printf("*********************************************");
        printf("Voulez-vous sauvegarder la partie 1, 2 ou 3 ? \n");
        scanf("%d",&choix_);
        if (choix_ == 1 )
        {
            ///SAUVEGARDE PARTIE 1
            FILE* fichier = fopen("C:\\Users\\Eleonore\\Desktop\\sauvegarde1.txt", "w");
            if(fichier != NULL)   // on devrait toujours vérifier que le fichier est bien ouvert
            {
                fprintf(fichier, "%d\n", nbJoueurs);
                for (int i = 0; i < nbJoueurs; i++)
                {
                    fprintf(fichier, "%d %c %d connais %d \n", &Joueur[i].identifiant, &Joueur[i].nom, &Joueur[i].portefeuille, &Joueur[i].connais, &Joueur[i].emplacement);
                }
                fclose(fichier);
                fichier = NULL;
            }

            else
            {
                printf("Erreur.");
            }
        }
        if (choix_ == 2 )
            {
                ///SAUVEGARDE PARTIE 2
                FILE* fichier = fopen("C:\\Users\\Eleonore\\Desktop\\sauvegarde2.txt", "w");
                if(fichier != NULL)   // on devrait toujours vérifier que le fichier est bien ouvert
                {
                    fprintf(fichier, "%d\n", nbJoueurs);
                    for (int i = 0; i < nbJoueurs; i++)
                    {
                        fprintf(fichier, "%d %c %d connais %d \n", &Joueur[i].identifiant, &Joueur[i].nom, &Joueur[i].portefeuille, &Joueur[i].connais, &Joueur[i].emplacement);
                    }
                    fclose(fichier);
                    fichier = NULL;
                }
                else
                {
                    printf("Erreur.");
                }
            }

        if (choix_ == 3 )
            {
                ///SAUVEGARDE PARTIE 3
                FILE* fichier = fopen("C:\\Users\\Eleonore\\Desktop\\sauvegarde3.txt", "w");
                if(fichier != NULL)   // on devrait toujours vérifier que le fichier est bien ouvert
                {
                    fprintf(fichier, "%d\n", nbJoueurs);
                    for (int i = 0; i < nbJoueurs; i++)
                    {
                        fprintf(fichier, "%d %c %d connais %d \n", &Joueur[i].identifiant, &Joueur[i].nom, &Joueur[i].portefeuille, &Joueur[i].connais, &Joueur[i].emplacement);
                    }
                    fclose(fichier);
                    fichier = NULL;
                }
                else
                {
                    printf("Erreur.");
                }
            }
    else if (choix == 0)    ///Comme une fermeture de partie simple
            {
                printf("Vous avez supprimé votre partie !");
            }
    }
}

