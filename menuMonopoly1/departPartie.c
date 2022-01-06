#include "maBiblio.h"

void debutpartie(){
    int nbjoueurs;
    int i;
    FILE* fichier=NULL;

    //ici le but est de créer une sauvegarde uniquement si elle n'éxiste pas déjà, afin de s'y retrouver plus facilement
    fichier=fopen("sauvegarde1.txt","r");//ouvre un fichier en lecture seule pour ne pas en créer un
    if(fichier == NULL){                     // si le fichier n'existe pas
        fichier=fopen("sauvegarde1.txt","w");//on le crée en écriture seule
    }
    else if(fichier != NULL){ //si le fichier sauvegarde1 existe déjà, on tente avec le fichier sauvegarde2
        FILE* fichier=NULL;
        fichier=fopen("sauvegarde2.txt","r");//on repète la manip du fichier sauvegarde1 avec sauvegarde2
        if(fichier=NULL){
            fichier=fopen("sauvegarde2.txt","w");
        }
    }
     else if(fichier != NULL){//si le fichier sauvegarde2 existe déjà, on tente avec le fichier sauvegarde3
        FILE* fichier=NULL;
        fichier=fopen("sauvegarde3.txt","r");// on répète la manip du fichier sauvegarde1 avec sauvegarde3
        if(fichier=NULL){
            fichier=fopen("sauvegarde3.txt","w");
        }
    }
    else if(fichier != NULL){// si les 3 fichier on déjà étés crées on conseil de suprimer ou terminer une partie
        printf("tous les emplacements de sauvegarde sont pris, supprimez une sauvegarde ou terminez une partie en cours \n");
        return;
    }

    do{// sinon on continue sur le premier fichier non existant et on commence la partie en demandanat les informations sur les joueurs
    printf("nombre de joueurs? (maximum 6 joueurs)\n");
    scanf("%d",&nbjoueurs);
    }while(nbjoueurs>6);//blindage pour ne pas dépasser 6 joueurs
    joueur tableauj[nbjoueurs];// création d'un tableau de joueurs de la taille du nombre de joueurs
    for(i=1;i<=nbjoueurs+1;i++){//récupération des informations de chaque joueur
        tableauj[i].identifiant=i;
        printf("entrez les information du joueur n\xF8 %d \n",i);
        printf("entrez le nom du joueur (max 10 charactere)\n");
        fflush(stdin);
        gets(tableauj[i].nom);
        tableauj[i].emplacement[1][1];
        tableauj[i].portefeuille=1500;
        printf("Bonjour %s ,vous \x88tes le joueur %d, vous commencez avec 1500 minutes, faites en bon usage!\n",tableauj[i].nom,i);

    }
fclose(fichier);
};
