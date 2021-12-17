#include <stdio.h>
#include <stdlib.h>
#include "structures.h"

void debutpartie(){
    int nbjoueurs;
    int i;
    FILE* fichier=NULL;
    structcase cases[32];
    cases[0].nomCase['debut'];


    //ici le but est de créer une sauvegarde uniquement si elle n'éxiste pas déjà, afin de s'y retrouver plus facilement
    fichier=fopen("sauvegarde1.partie","r");//ouvre un fichier en lecture seule pour ne pas en créer un
    if(fichier = NULL){                  //si le fichier n'existe pas
        fichier=fopen("sauvegarde1.partie","w");//on le crée en écriture seule
    }
    else if(fichier != NULL){ //si le fichier sauvegarde1 existe déjà, on tente avec le fichier sauvegarde2
        FILE* fichier=NULL;
        fichier=fopen("sauvegarde2.partie","r");//on repète la manip du fichier sauvegarde1 avec sauvegarde2
        if(fichier=NULL){
            fichier=fopen("sauvegarde2.partie","w");
        }
    }
     else if(fichier != NULL){
        FILE* fichier=NULL;
        fichier=fopen("sauvegarde3.partie","r");
        if(fichier=NULL){
            fichier=fopen("sauvegarde3.partie","w");
        }
    }
    else if(fichier != NULL){
        printf("tous les emplacements de sauvegarde sont pris, supprimer une sauvegarde ou terminez une partie en cours \n");
        return;
    }

    do{
    printf("nombre de joueurs? (maximum 6 joueurs)");
    scanf("%d",&nbjoueurs);
    }while(nbjoueurs>6);
    joueur tableauj[nbjoueurs];
    for(i=1;i<=nbjoueurs;i++){
        tableauj[i].identifiant=i;
        printf("entrez les information du joueur n°%d",i);
        printf("entrez le nom du joueur (max 10 charactere)");
        fflush(stdin);
        gets(tableauj[i].nom);
        tableauj[i].emplacement[1][1];
        tableauj[i].portefeuille=1500;
        printf("Bonjour %s ,vous commencez avec 1500 minutes, faites en bon usage!",tableauj[i].nom);

    }
fclose(fichier);
};
