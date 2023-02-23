#ifndef CURRENCY_H
#define CURRENCY_H

typedef struct {
    char name[4]; // Code ISO de la devise (USD, EUR, JPY, etc.)
    char symbol[4]; // Symbole de la devise ($, €, ¥, etc.)
    double rate; // Taux de change par rapport à USD
} Currency;

Currency USD = {"USD", "$", 1.0};
Currency EUR = {"EUR", "€", 1.2124};
Currency JPY = {"JPY", "¥", 0.0096};

void display_currency(Currency c);

#endif