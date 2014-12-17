#include "pourleger.h"
#include <iostream>
#include <fstream>
#include <string>
#include <stdint.h>

#include <iostream>
using namespace std;
#include <stdlib.h>
#include <stdio.h>

#include <dirent.h>
#define total 256
#define josiane1 "abadie.adn"


int monmixleger(int piste)
{  /*1*/
        	system("rm *.jo");
        	        	system("rm 1.wav");

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

	uint8_t abadie = 0;
    int assemble = 0;

    // Nom du fichier piste
    
        FILE* ouvrepiste = NULL;
    ouvrepiste = fopen(josiane1, "rb");
    
    if (ouvrepiste == NULL)
{/*2*/


      perror("Error in opening file");
      return(-1);
   }
   while(1)
   {/*3*/



abadie = fgetc(ouvrepiste); /* abadie vient chercher tout ce qui bouge*/
      if( feof(ouvrepiste) )
      { 
          break ;
      }


assemble++;

            switch (assemble)
            {/*3*/
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
                switch (quelpiano)
                 {/*4*/

                case 1 :
                    genereFichierJo(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 2 :
                    genereFichierJo1(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 3 :
                    genereFichierJo2(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 4 :
                    genereFichierJo3(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 5 :
                    genereFichierJo4(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 6 :
                    genereFichierJo5(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 7 :
                    genereFichierJo6(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 8 :
                    genereFichierJo7(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;

                case 9 :
                    genereFichierJo8(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 10 :
                    genereFichierJo9(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 11 :
                    genereFichierJo10(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 12 :
                    genereFichierJo11(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 13 :
                    genereFichierJo12(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 14 :
                    genereFichierJo13(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 15 :
                    genereFichierJo14(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 16 :
                    genereFichierJo15(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 17 :
                    genereFichierJo16(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 18 :
                    genereFichierJo17(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 19 :
                    genereFichierJo18(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 20 :
                    genereFichierJo19(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 21 :
                    genereFichierJo20(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 22 :
                    genereFichierJo21(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 23 :
                    genereFichierJo22(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 24 :
                    genereFichierJo23(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 25 :
                    genereFichierJo24(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 26 :
                    genereFichierJo25(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 27 :
                    genereFichierJo26(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 28 :
                    genereFichierJo27(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 29 :
                    genereFichierJo28(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 30 :
                    genereFichierJo29(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 31 :
                    genereFichierJo30(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;

                case 32 :
                    genereFichierJo31(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 33 :
                    genereFichierJo32(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 34 :
                    genereFichierJo33(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 35 :
                    genereFichierJo34(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 36 :
                    genereFichierJo35(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 37 :
                    genereFichierJo36(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 38 :
                    genereFichierJo37(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 39 :
                    genereFichierJo38(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 40 :
                    genereFichierJo39(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 41 :
                    genereFichierJo40(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;
                case 42 :
                    genereFichierJo41(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                    break;


                default:
                    genereFichierJo(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
                   
                    
                }/*4*/

            }/*3*/

            }/*2*/

        fclose(ouvrepiste);
 
}/*1*/
