#include "maBiblio.h"

void regles()//Les \x82 correspondent au é, \x85 au à, \x8A au è, \x88 au ê, \x93 au ô. Il manque des accents à certains endroits car les lettres qui suivent empêche que cela fonctionne correctement.
{
    printf("Voici les r\x8Agles du jeu :\n");
    printf("L'objectif de ce jeu est d'obtenir la meilleure note possible a l'issue de votre premi\x8Are annee \x85 l'ECE.\nPour ce faire, vous devez choisir dans quels cours vous souhaitez investir votre temps.\n");
    printf("Le jeu se compose de 16 cartes chances, 16 cartes cdc, 32 fiches de cours, et 12 cahiers.\n");
    printf("Chaque joueur recoit un temps initial de 1500min lui permettant de travailler sur les diff\x82rents chapitres de chaque\nmati\x8Are. Une fois un groupe de chapitres acquis, il est possible d'investir dans des fiches de cours sur celui-ci, et\nau bout de 4 fiches achetees, de faire un cahier. Chaque groupe de couleur doit \x88tre rempli de mani\x8Are homog\x8Ane.\n");
    printf("Il existe 3 types de cours diff\x82rents : Les cours de math\x82matiques, de mecanique, d'informatique et d'\x82lectronique.\nCe sont sur ces cases qu'il est possible de faire des fiches et de faire ensuite des cahiers. Il existe aussi les\nmasterclass et les LV1 et LV2, sur lesquels on ne peut pas constuire.\nRef\x82rez vous aux cartes correspondantes pour plus de precisions.\n");
    printf("D'autres cases composent \x82galement le plateau :\n- La case d\x82part. Lorsque le joueur passe ou s'arr\x88te sur cette case, il gagne 200min.\n");
    printf("- Invitation \x85 la soiree. Si vous vous arr\x88tez sur cette case, vous devez vous rendre \x85 la soiree. Vous ne passez pas\n    par la case d\x82part et vous ne gagnez donc pas de min. Votre tour est termin\x82 d\x8As que vous \x88tes dans la soiree.\n");
    printf("- La soiree : Vous y \x88tes si vous tirez une carte qui vous indique de vous y rendre, si vous faites 3 doubles d'affilee.Pour en sortir, soit vous perdez 50min en vous eclipsant et vous pouvez lancer les d\x82s et jouer normalement. Vous pouvezaussi utiliser votre carte Bonne excuse, qui vous permet de vous en sortir sans perdre de temps et de jouer normalement.Vous pouvez essayer de vous lib\x82rer en tentant d'obtenir un double. Si vous en faites un, vous \x88tes lib\x82r\x82 et vous\npouvez relancer les d\x82s pour avancer. Si au bout de 3 tours, vous n'\x88tes toujours pas sorti, vous perdez 50min et vous  pouvez jouer normalement.\n");
    printf("- Les masterclass : Le temps \x85 payer sur ces cases d\x82pend du nombre de masterclass que vous possedez. Ce prix est doubl\x82\x85 chaque gare en plus\nUne masterclass coutera 25, 2 couteront 50, 3 couteront 100 et 4 couteront 200\n");
    printf("- Les langues vivantes : Le temps \x85 payer correspond au lanc\x82 de d\x82s. Si la personne possede une seule langue, on\nmultiplie par 4 le r\x82sultat obtenu par les d\x82s. Si la personne possede les 2 langues vivantes, on le multiplie par 10");
    printf("- Les cartes chance et ... : vous recevez une carte aleatoirement et vous devez suivre les instructions de celle-ci.");
}
