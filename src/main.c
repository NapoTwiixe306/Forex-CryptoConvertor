#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../includes/conversion.h"
#include "../includes/currencies.h"

#define BUFFER_SIZE 1024

int main() {
    // Display available currencies
    display_currencies();
    printf("Please enter the currency you want to convert from: ");


    // Get input from user
    char from_currency[BUFFER_SIZE];
    scanf("%s", from_currency);

    printf("Please enter the amount of %s you want to convert: ", from_currency);

    // Get input from user
    double amount;
    scanf("%lf", &amount);

    // Display available currencies
    display_currencies();
    printf("Please enter the currency you want to convert to: ");


    // Get input from user
    char to_currency[BUFFER_SIZE];
    scanf("%s", to_currency);

    // Convert the currency and display the result
    double result = convert_currency(from_currency, to_currency, amount);
    printf("%.2f %s is equal to %.2f %s.", amount, from_currency, result, to_currency);

    return 0;
}