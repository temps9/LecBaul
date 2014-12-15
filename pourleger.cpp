#include "pourleger.h"
#include <iostream>
#include <fstream>
#include <string>

#include <iostream>
using namespace std;
#include <stdlib.h>
#include <stdio.h>

#include <dirent.h>
#define total 256
#define josiane1 "abadie.adn"


void monmixleger(int piste)
{
        	system("rm *.jo");
        	        	system("rm 1.wav");
  /*1*/
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

    int ouaitu;
    int assemble = 0;
    int force1;

    // Nom du fichier piste

    FILE* ouvrepiste = NULL;
    ouvrepiste = fopen(josiane1, "rb");
    if (ouvrepiste != NULL)
    {/*2*/
        int abadie = 0;

        unsigned char tab1[total] = {0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2A,0x2B,0x2C,0x2D,0x2E,0x2F,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3A,0x3B,0x3C,0x3D,0x3E,0x3F,0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,0x4B,0x4C,0x4D,0x4E,0x4F,0x50,0x51,0x52,0x53,0x54,0x55,0x56,0x57,0x58,0x59,0x5A,0x5B,0x5C,0x5D,0x5E,0x5F,0x60,0x61,0x62,0x63,0x64,0x65,0x66,0x67,0x68,0x69,0x6A,0x6B,0x6C,0x6D,0x6E,0x6F,0x70,0x71,0x72,0x73,0x74,0x75,0x76,0x77,0x78,0x79,0x7A,0x7B,0x7C,0x7D,0x7E,0x7F,0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,0x90,0x91,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x9A,0x9B,0x9C,0x9D,0x9E,0x9F,0xA0,0xA1,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0xAD,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0xBF,0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,
                                     0xC7,0xC8,0xC9,0xCA,0xCB,
                                     0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF,0xE0,0xE1,0xE2,0xE3,0xE4,0xE5,0xE6,0xE7,0xE8,0xE9,0xEA,0xEB,0xEC,0xED,0xEE,0xEF,0xF0,0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,0xF8,0xF9,0xFA,0xFB,0xFC,0xFD,0xFE,0xFF
                                    };

        abadie = fgetc(ouvrepiste); /* abadie vient chercher tout ce qui bouge*/
        while (abadie != EOF)
        {/*3*/


            for (ouaitu=0; ouaitu<255; ouaitu++)
            {
                if ( abadie == tab1[ouaitu])
                {
                    force1 = ouaitu;
                    assemble++;
                }
            }
            /***debut assemble***/

            switch (assemble)
            {/*4*/
            case 1 :
                quelpiano = (int)(force1);
                break;
            case 2 :
                quelpiano1 = (int)(force1);
                break;
            case 3 :
                quelpiano2 = (int)(force1);
                break;
            case 4 :
                quelpiano3 = (int)(force1);
                break;
            case 5 :
                quelpiano4 = (int)(force1);
                break;
            case 6 :
                quelpiano5 = (int)(force1);
                break;
            case 7 :
                quelpiano6 = (int)(force1);
                break;
            case 8 :
                quelpiano7 = (int)(force1);
                break;
            case 9 :
                quelpiano8 = (int)(force1);
                break;
            case 10 :
                quelpiano9 = (int)(force1);
                break;
            case 11 :
                quelpiano10 = (int)(force1);
                break;
            case 12 :
                quelpiano11 = (int)(force1);
                break;
            case 13 :
                quelpiano12 = (int)(force1);
                break;
            case 14 :
                quelpiano13 = (int)(force1);
                break;
            case 15 :
                quelpiano14 = (int)(force1);
                break;

            default:
                quelpiano15 = (int)(force1);

                /****fin traitement bin******/
                switch (quelpiano)
                 {/*5*/

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
                   
                    
                }/*5*/



            }/*4*/
abadie = fgetc(ouvrepiste); /* abadie va chercher la suivante*/
}/**fin de la boucle while***//*3*/
        fclose(ouvrepiste);
    }/*2*/
 
}/*1*/
