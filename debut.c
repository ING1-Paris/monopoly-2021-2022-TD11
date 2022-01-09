#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
//sousprogramme servant à remplir un tableau de cases lors de l'initialisation d'une partie
void initialisation(structcase cases[32])
{
    //variables servants lors des boucles de remplissage
    int a=2;
    int b=10;
    int c=50;
    int i;
    /*initialisation de toutes les données ne pouvant pas se faire par boucle
    car ne respectant pas une forme de suite ( tels que les noms ou les couts )*/
    cases[0].nomCase="debut";
    cases[0].prix0=0;
    cases[1].nomCase="\x82lectronique num\x82rique chap1";
    cases[1].coutDachat=60;
    cases[1].vPro=30;
    cases[1].prix2=30;
    cases[1].prix3=90;
    cases[1].prix4=160;
    cases[1].prix5=250;
    cases[2].nomCase="repas de famille";
    cases[3].nomCase="\x82lectronique num\x82rique chap2";
    cases[3].coutDachat=60;
    cases[3].vPro=30;
    cases[3].prix2=50;
    cases[3].prix3=180;
    cases[3].prix4=320;
    cases[3].prix5=450;
    cases[4].nomCase="masterclass 1";
    cases[4].coutDachat=200;
    cases[4].vPro=100;
    cases[5].nomCase="math\x82matiques chap1";
    cases[5].coutDachat=100;
    cases[5].vPro=50;
    cases[5].prix2=90;
    cases[5].prix3=270;
    cases[5].prix4=400;
    cases[5].prix5=550;
    cases[6].nomCase="chance";
    cases[7].nomCase="math\x82matiques chap2";
    cases[7].coutDachat=120;
    cases[7].vPro=60;
    cases[7].prix2=100;
    cases[7].prix3=300;
    cases[7].prix4=450;
    cases[7].prix5=600;
    cases[8].nomCase="grosse soiree";
    cases[9].nomCase="mecanique chap1";
    cases[9].coutDachat=140;
    cases[9].vPro=70;
    cases[9].prix2=150;
    cases[9].prix3=450;
    cases[9].prix4=625;
    cases[9].prix5=750;
    cases[10].nomCase="LV1";
    cases[10].coutDachat=150;
    cases[11].nomCase="mecanique chap2";
    cases[11].coutDachat=160;
    cases[11].vPro=80;
    cases[11].prix2=180;
    cases[11].prix3=500;
    cases[11].prix4=700;
    cases[11].prix5=900;
    cases[12].nomCase="masterclass 2";
    cases[12].coutDachat=200;
    cases[12].vPro=100;
    cases[13].nomCase="algo et prog chap1";
    cases[13].coutDachat=180;
    cases[13].vPro=90;
    cases[13].prix2=200;
    cases[13].prix3=550;
    cases[13].prix4=700;
    cases[13].prix5=950;
    cases[14].nomCase="caisse de communaut\x82";
    cases[15].nomCase="algo et prog chap2";
    cases[15].coutDachat=200;
    cases[15].vPro=100;
    cases[15].prix2=220;
    cases[15].prix3=600;
    cases[15].prix4=800;
    cases[15].prix5=1000;
    cases[16].nomCase="WeekEnd";
    cases[17].nomCase="\x82lectronique num\x82rique chap3";
    cases[17].coutDachat=220;
    cases[17].vPro=110;
    cases[17].prix2=250;
    cases[17].prix3=700;
    cases[17].prix4=875;
    cases[17].prix5=1050;
    cases[18].nomCase="chance";
    cases[19].nomCase="\x82lectronique num\x82rique chap4";
    cases[19].coutDachat=240;
    cases[19].vPro=120;
    cases[19].prix2=300;
    cases[19].prix3=750;
    cases[19].prix4=925;
    cases[19].prix5=1100;
    cases[20].nomCase="masterclass 3";
    cases[20].coutDachat=200;
    cases[20].vPro=100;
    cases[21].nomCase="math\x82matiques chap3";
    cases[21].coutDachat=260;
    cases[21].vPro=130;
    cases[21].prix2=330;
    cases[21].prix3=800;
    cases[21].prix4=975;
    cases[21].prix5=1150;
    cases[22].nomCase="LV2";
    cases[22].coutDachat=150;
    cases[23].nomCase="math\x82matiques chap4";
    cases[23].coutDachat=280;
    cases[23].vPro=140;
    cases[23].prix2=350;
    cases[23].prix3=850;
    cases[23].prix4=1025;
    cases[23].prix5=1200;
    cases[24].nomCase="allez en soiree";
    cases[25].nomCase="mecanique chap3";
    cases[25].coutDachat=300;
    cases[25].vPro=150;
    cases[25].prix2=390;
    cases[25].prix3=900;
    cases[25].prix4=1100;
    cases[25].prix5=1275;
    cases[26].nomCase="caisse de communaut\x82";
    cases[27].nomCase="mecanique chap4";
    cases[27].coutDachat=320;
    cases[27].vPro=160;
    cases[27].prix1=150;
    cases[27].prix2=450;
    cases[27].prix3=1000;
    cases[27].prix4=1200;
    cases[27].prix5=1400;
    cases[28].nomCase="masterclass 4";
    cases[28].coutDachat=200;
    cases[28].vPro=100;
    cases[29].nomCase="algo et prog chap3";
    cases[29].coutDachat=350;
    cases[29].vPro=175;
    cases[29].prix0=35;
    cases[29].prix1=175;
    cases[29].prix2=500;
    cases[29].prix3=1100;
    cases[29].prix4=1300;
    cases[29].prix5=1500;
    cases[30].nomCase="sieste inopinee";
    cases[31].nomCase="algo et prog chap4 POINTEURS";
    cases[31].coutDachat=400;
    cases[31].vPro=200;
    cases[31].prix0=50;
    cases[31].prix1=200;
    cases[31].prix2=600;
    cases[31].prix3=1400;
    cases[31].prix4=1700;
    cases[31].prix5=2000;
    //les prix sans maison et sans doublon vont de 2 en 2 ( sauf les 2 dernières cases )
    for(i=1; i<29; i=i+2)
    {
        cases[i].prix0=a;
        a=a+2;
    }
    //les prix sans maison avec doublons sont le double des prix0
    for(i=1; i<32; i=i+2)
    {
        cases[i].prix20=cases[i].prix0*2;
    }
    //les prix avec une maison vont de 10 en 10 ( sauf pour les 2 dernières cases )
    for(i=1; i<27; i=i+2)
    {
        cases[i].prix1=b;
        b=b+10;
    }

    //les prix des maisons vont de 50 en 50 entre les 4 lignes (50 pour la 1ere ligne, 100 pour la deuxième, etc)
    for(i=1; i<32; i=i+8)
    {
        cases[i].prixFiche=c;
        cases[i+2].prixFiche=c;
        cases[i+4].prixFiche=c;
        cases[i+6].prixFiche=c;
        c=c+50;
    }
    // les prix pour déhypothèquer sont de 10% supèrieurs à la valeure d'hypothèque
    for(i=1; i<32; i=i+2)
    {
        cases[i].vProap=cases[i].vPro*1.1;
    }
    for(i=0;i<32;i++)
    {
        cases[i].casesutil=0;
    }
    for(i=1;i<32;i++)
    {
        cases[i].proprietaire=0;
    }
}


void debutpartie(int nbjoueurs,joueur tableauj[nbjoueurs])
{
    int i,a;
    FILE* fichier=NULL;

    //ici le but est de créer une sauvegarde uniquement si elle n'éxiste pas déjà, afin de s'y retrouver plus facilement
    fichier=fopen("sauvegarde1.txt","r");//ouvre un fichier en lecture seule pour ne pas en créer un
    if(fichier == NULL)                      // si le fichier n'existe pas
    {
        fichier=fopen("sauvegarde1.txt","w");//on le crée en écriture seule
    }
    else if(fichier != NULL)  //si le fichier sauvegarde1 existe déjà, on tente avec le fichier sauvegarde2
    {
        FILE* fichier=NULL;
        fichier=fopen("sauvegarde2.txt","r");//on repète la manip du fichier sauvegarde1 avec sauvegarde2
        if(fichier==NULL)
        {
            fichier=fopen("sauvegarde2.txt","w");
        }
    }
    else if(fichier != NULL) //si le fichier sauvegarde2 existe déjà, on tente avec le fichier sauvegarde3
    {
        FILE* fichier=NULL;
        fichier=fopen("sauvegarde3.txt","r");// on répète la manip du fichier sauvegarde1 avec sauvegarde3
        if(fichier==NULL)
        {
            fichier=fopen("sauvegarde3.txt","w");
        }
    }
    else if(fichier != NULL) // si les 3 fichier on déjà étés crées on conseil de suprimer ou terminer une partie
    {
        printf("tous les emplacements de sauvegarde sont pris, supprimez une sauvegarde ou terminez une partie en cours \n");
        return;
    }
// sinon on continue sur le premier fichier non existant et on commence la partie en demandanat les informations sur les joueurs
    for(i=1; i<=nbjoueurs; i++) //récupération des informations de chaque joueur
    {
        tableauj[i].identifiant=i;
        printf("entrez les information du joueur n\xF8 %d \n",i);
        printf("entrez le nom du joueur (max 10 charactere)\n");
        fflush(stdin);
        gets(tableauj[i].nom);
        tableauj[i].portefeuille=1500;
        printf("Bonjour %s ,vous \x88tes le joueur %d, vous commencez avec 1500 minutes, faites en bon usage!\n",tableauj[i].nom,i);
        printf("entrez 1 pour continuer avec le joueur %d",i+1);
        scanf("%d",&a);
        system("cls");
    }
    fclose(fichier);
};
