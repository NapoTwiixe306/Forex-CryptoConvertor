#include <stdio.h>
#include "conversion.h"

int main() {
    welcomeMessage();
    char choix;
    printf("Choisissez une Devise :\n");
    printf("1. Eurro\n");
    printf("2. Dollars Américain\n");
    printf("Votre choix : ");
    scanf(" %c", &choix);
    display(choix);
    return 0;
}
