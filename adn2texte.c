/* Imaginer et creer par Abadie joris andre*/
/* en utilisant un concept de Andre pierre jocelyn*/
/*Cette oeuvre est protégée et n'est divulguée que pour utilisation sous linux et FreeBSD dans les conditions Creative common ci-dessous*/
/* Cette oeuvre est mise à disposition selon les termes de la Licence Creative Commons Paternité - Pas d'Utilisation Commerciale - Partage des Conditions Initiales à l'Identique 2.0 France. */
/*Aucune garantie n'est donner sur les effets de cet executable*/
/**c'est la force du concept du siècle des lumières en opposition à l'algèbre et autres croyances imposées***/
/**nous créons ici un état d'équilibre dans un phénomène à l'aide de plusieurs autres phénomènes possédant chacun son propre système mathématique aux lois d'associations différentes**/
/***nous sommes ici dans un système qui ouvre l'esprit, d'un événement nous en ouvrons plusieurs à l'opposé des concepts à la wikipedia qui ferment l'esprit, cette application convertit le fichier abadie.adn en piste1.txt pour être compatible avec SequenBaul **/
/**pour compiler gcc adn2texte.c -o adn2texte -Wall***/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>

#define cecci111 "piste1.txt"
#define josiane1 "abadie.adn"

/***bin a ascii mono*****/

int ouaitu;
int amplitude = 0;
int assemble = 0;
int nbdepoints;
uint8_t force1;
int compte = 1;
int quelpiano;
int quelpiano1;
int quelpiano2;
int quelpiano3;
int quelpiano4;
int quelpiano5;
int quelpiano6;
int quelpiano7;
int quelpiano8;
int quelpiano9;
int quelpiano10;
int quelpiano11;
int quelpiano12;
int quelpiano13;
int quelpiano14;
int quelpiano15;

int main (int argc, char *argv[])
{/*1*/



/*j ouvre mon fichier de donner et mon fichier de sortie*/
FILE* fichierjoa1 = NULL;
FILE* fichierjo1 = NULL;
fichierjoa1 = fopen(cecci111, "w");
fichierjo1 = fopen(josiane1, "rb");


uint8_t abadie = 0;

if (fichierjoa1 != NULL)
{/*2*/

if(fichierjo1 == NULL) 
   {
      perror("Error in opening file");
      return(-1);
   }
   while(1)
   {/*3*/



abadie = fgetc(fichierjo1); /* abadie vient chercher tout ce qui bouge*/
      if( feof(fichierjo1) )
      { 
          break ;
      }


assemble++;
force1 = abadie;
switch (assemble)
{/*4*/
case 1 :
quelpiano = (int)(abadie);
break;
case 2 :
quelpiano1 = (int)(abadie);
break;
case 3 :
quelpiano2 = (int)(abadie);
break;
case 4 :
quelpiano3 = (int)(abadie);
break;
case 5 :
quelpiano4 = (int)(abadie);
break;
case 6 :
quelpiano5 = (int)(abadie);
break;
case 7 :
quelpiano6 = (int)(abadie);
break;
case 8 :
quelpiano7 = (int)(abadie);
break;
case 9 :
quelpiano8 = (int)(abadie);
break;
case 10 :
quelpiano9 = (int)(abadie);
break;
case 11 :
quelpiano10 = (int)(abadie);
break;
case 12 :
quelpiano11 = (int)(abadie);
break;
case 13 :
quelpiano12 = (int)(abadie);
break;
case 14 :
quelpiano13 = (int)(abadie);
break;
case 15 :
quelpiano14 = (int)(abadie);
break;

default:
quelpiano15 = (int)(abadie);

/****fin traitement bin******/
fprintf(fichierjoa1, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", quelpiano , quelpiano1, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
assemble = 0;
}/***fin du switch***//*4*/

}/**fin de la boucle while***//*3*/


fclose(fichierjoa1), fichierjoa1 = NULL;;
}/*2*/
fclose(fichierjo1), fichierjo1 = NULL;;

return 0;
}/*1*/
/***fin bin a ascii mono**********/
