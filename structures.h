#ifndef STRUCTURES_H_INCLUDED
#define STRUCTURES_H_INCLUDED

int lancerde();
void debutpartie();
void initialisation();

typedef struct{
    int proprietaire,prix0, prix20, prix1, prix2, prix3, prix4, prix5, prixFiche, vPro, vProap;
    /* Prix0 = prix de base sans maisons etc
       prix20 = prix quand on possède tous les cours d'une couleur
       prix1 = prix avec 1 fiche
       prix2 = prix avec 2 fiches
       prix3 = prix avec 3 fiches
       prix4 = prix avec 4 fiches
       prix5 = prix avec 1 cahier
       prixFiche = prix à payer pour chaque fiche
       vPro = hypothèque
       vProap = prix à payer pour lever l'hypothèque*/
    int coutDachat;//Prix à payer pour acheter un cours
    char* nomCase;// Tableau contenant le nom de la case
    int joueuremplacement;//Nombre de joueurs dans la case.
}structcase;//informations contenues dans chaque case.


typedef struct{
    int identifiant;
    char nom[10];//nom du joueur
    int portefeuille;//Temps que possède le joueur
    structcase connais[20];//tableau de structures contenant les cours de chaque joueur
    int emplacement[4][8];//Endroit du plateau ou se trouve le joueur.
    bool prison;
}joueur;//Informations de chaque joueur.


#endif // STRUCTURES_H_INCLUDED
