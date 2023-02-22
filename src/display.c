#include "conversion.h"
#include <stdio.h>


void welcomeMessage(void){
  printf("Bonjour\n");
}

//fonction de teste, a modifier
void display(char choix) 
{
    switch (choix) {
    case '1':
      printf("vous avez choisi EURO !\n");
      break;
    case '2':
      printf("vous avez choisi le Dollars Américain \n");
      break;
    default:
      printf("Choix invalide. Veuillez réessayer.\n");
      break;
  }
}

//add dans display, dans header, et dans main

void forexChoice(char choix){

    //faire ma fonciton et add des switch case
}

void cryptoChoice(char choix){

    //faire ma fonction et add des switch case
}