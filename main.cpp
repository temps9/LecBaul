//Utilisation limité sous linux car l'application utilise un format audio propriétaire abadie.jo
// dépendance apt-get install sox

// pour compiler g++ main.cpp monmix.cpp pourleger.cpp convertisseur.cpp AdnForme.cpp AdnForme1.cpp AdnForme2.cpp AdnForme3.cpp AdnForme4.cpp AdnForme5.cpp AdnForme6.cpp AdnForme7.cpp AdnForme8.cpp AdnForme9.cpp AdnForme10.cpp AdnForme11.cpp AdnForme12.cpp AdnForme13.cpp AdnForme14.cpp AdnForme15.cpp AdnForme16.cpp AdnForme17.cpp AdnForme18.cpp AdnForme19.cpp AdnForme20.cpp AdnForme21.cpp AdnForme22.cpp AdnForme23.cpp AdnForme24.cpp AdnForme25.cpp AdnForme26.cpp AdnForme27.cpp AdnForme28.cpp AdnForme29.cpp AdnForme30.cpp AdnForme31.cpp AdnForme32.cpp AdnForme33.cpp AdnForme34.cpp AdnForme35.cpp AdnForme36.cpp AdnForme37.cpp AdnForme38.cpp AdnForme39.cpp AdnForme40.cpp AdnForme41.cpp -w -o lecbaul


#include <stdio.h>
#include <iostream>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include "monmix.h"
#include "convertisseur.h"
#include "pourleger.h"
#include "AdnForme.h"





int main( int argc, char* args[] )
{
int piste =1;
		monmixleger(piste); 
		                    conversionJoWav (piste);
		system("play 1.wav");


	return 0;
}
