///structure modifiée le tableau connaissance empêche la compilation
///important il faut sauvegarder avant de charger ; la sauvegarde permet d'avoir les infos qu'on vient de saisir dans le fichier ET la charge et permet d'afficher le fichier text sur le bureau

typedef struct
{
    int identifiant;
    char nom[10];            //nom du joueur
    int portefeuille;        //Temps que possède le joueur
    struct connaissance[20]; //tableau de structures contenant les cours de chaque joueur; ///JE SAIS PAS COMMENT DECLARER UN TABLEAU DE STRCUT????
    int emplacement[4][8];   //Endroit du plateau ou se trouve le joueur.
} joueur;                    //Informations de chaque joueur.

#endif // STRUCTURES_H_INCLUDED

void charger_une_ancienne_partie()
{
    int partie;
    FILE *fichier = NULL;
    char c = 0;
    do
    {
        printf("Quelle partie souhaitez-vous reprendre ? La partie 1, 2 ou 3 : \n");
        scanf("%d", &partie);

    } while ((c = getchar() != '\n' && c != EOF) && (&partie < 1 || &partie > 3)); ///Pourquoi les deux conditions ne fonctionnent pas ensemble ????
    printf("Votre fichier est entrain de s'ouvrir...");
    if (partie == 1)
    {
        ///CHARGEMENT DE LA PARTIE 1
        FILE *fichier = fopen("C:\\Users\\Eleonore\\Desktop\\sauvegarde1.txt", "r"); //charge un fichier text qui n'existe pas avant et l'affiche sur le  bureau
        fscanf(fichier, "%d\n", nbJoueurs);
        for (int i = 0; i < *nbJoueurs; i++)
        {
            fscanf(fichier, "%s %f %f %f %f\n", joueur[i].identifiant, joueur[i].nom, joueur[i].portefeuille, joueur[i].connais,
                   joueur[i].emplacement);
        }
        fclose(fichier);
        fichier = NULL;
    }
    if (partie == 2)
    {
        ///CHARGEMENT DE LA PARTIE 2
        FILE *fichier = fopen("C:\\Users\\Eleonore\\Desktop\\sauvegarde2.txt", "r");
        fscanf(fichier, "%d\n", nbJoueurs);
        for (int i = 0; i < *nbJoueurs; i++)
        {
            fscanf(fichier, "%s %f %f %f %f\n", joueur[i].identifiant, joueur[i].nom, joueur[i].portefeuille, joueur[i].connais,
                   joueur[i].emplacement);
        }
        fclose(fichier);
        fichier = NULL;
    }
    if (partie == 3)
    {
        ///CHARGEMENT DE LA PARTIE 3
        FILE *fichier = fopen("C:\\Users\\Eleonore\\Desktop\\sauvegarde3.txt", "r");
        fscanf(fichier, "%d\n", nbJoueurs);
        for (int i = 0; i < *nbJoueurs; i++)
        {
            fscanf(fichier, "%s %f %f %f %f\n", joueur[i].identifiant, joueur[i].nom, joueur[i].portefeuille, joueur[i].connais,
                   joueur[i].emplacement);
        }
        fclose(fichier);
        fichier = NULL;
    }
    return 0;
}

void demande_sauvegarde() //demande si oui ou non on veut sauvegarder la partie
{
    int choix, choix_;
    printf("Voulez-vous sauvegarder votre partie ? Tapez 1 si oui tapez 0 si non !\n");
    scanf("%d", &choix);

    if (choix == 1)
    {
        printf("Vous avez choisi de sauvegarger votre partie ! \n");
        printf("*********************************************");
        printf("Voulez-vous sauvegarder la partie 1, 2 ou 3 ? \n");
        scanf("%d", &choix_);
        if (choix_ == 1)
        {
            ///SAUVEGARDE PARTIE 1
            FILE *fichier = fopen("C:\\Users\\Eleonore\\Desktop\\sauvegarde1.txt", "w");
            if (fichier != NULL) // on devrait toujours vérifier que le fichier est bien ouvert
            {
                fprintf(fichier, "%d\n", nbJoueurs);
                for (int i = 0; i < nbJoueurs; i++)
                {
                    fprintf(fichier, "%d %c %d connais %d \n", joueur[i].identifiant, joueur[i].nom, joueur[i].portefeuille, joueur[i].connais,
                            joueur[i].emplacement);
                }
                fclose(fichier);
                fichier = NULL;
            }

            else
            {
                printf("Erreur.");
            }
        }
        if (choix_ == 2)
        {
            ///SAUVEGARDE PARTIE 2
            FILE *fichier = fopen("C:\\Users\\Eleonore\\Desktop\\sauvegarde2.txt", "w");
            if (fichier != NULL) // on devrait toujours vérifier que le fichier est bien ouvert
            {
                fprintf(fichier, "%d\n", nbJoueurs);
                for (int i = 0; i < nbJoueurs; i++)
                {
                    fprintf(fichier, "%d %c %d connais %d \n", joueur[i].identifiant, joueur[i].nom, joueur[i].portefeuille, joueur[i].connais,
                            joueur[i].emplacement);
                }
                fclose(fichier);
                fichier = NULL;
            }
            else
            {
                printf("Erreur.");
            }
        }

        if (choix_ == 3)
        {
            ///SAUVEGARDE PARTIE 3
            FILE *fichier = fopen("C:\\Users\\Eleonore\\Desktop\\sauvegarde3.txt", "w");
            if (fichier != NULL) // on devrait toujours vérifier que le fichier est bien ouvert
            {
                fprintf(fichier, "%d\n", nbJoueurs);
                for (int i = 0; i < nbJoueurs; i++)
                {
                    fprintf(fichier, "%d %c %d connais %d \n", joueur[i].identifiant, joueur[i].nom, joueur[i].portefeuille, joueur[i].connais,
                            joueur[i].emplacement);
                }
                fclose(fichier);
                fichier = NULL;
            }
            else
            {
                printf("Erreur.");
            }
        }
        else if (choix == 0) ///Comme une fermeture de partie simple
        {
            printf("Vous avez supprimé votre partie !");
        }
        return 0;
    }
