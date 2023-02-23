#include "conversion.h"
#include "currencies.h"
#include <stdio.h>


void welcomeMessage(void){
  printf("Bonjour\n");
}

const struct Currency CURRENCIES[NUM_CURRENCIES] = {
  {"USD", 1.0},
  {"EUR", 0.8824},
  {"GBP", 0.7284}
};

void display_currencies(){

  for (int i = 0; i < NUM_CURRENCIES; i++){
    printf("%s\n", CURRENCIES[i].name);
  }
}