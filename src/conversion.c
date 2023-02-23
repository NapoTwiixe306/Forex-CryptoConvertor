#include <stdio.h>
#include <string.h>
#include "currencies.h"
#include "conversion.h"

#define BUFFER_SIZE 1024

double convert_currency(char* from_currency, char* to_currency, double amount) {
    // Check if currencies are the same
    if (strcmp(from_currency, to_currency) == 0) {
        return amount;
    }

    // Find exchange rates for currencies
    double from_rate = 0.0;
    double to_rate = 0.0;

    for (int i = 0; i < NUM_CURRENCIES; i++) {
        if (strcmp(from_currency, CURRENCIES[i].name) == 0) {
            from_rate = CURRENCIES[i].rate;
        }

        if (strcmp(to_currency, CURRENCIES[i].name) == 0) {
            to_rate = CURRENCIES[i].rate;
        }
    }

    // Convert the currency
    double result = (amount / from_rate) * to_rate;

    return result;
}

void print_hello() {
    printf("Hello, world!\n");
}


