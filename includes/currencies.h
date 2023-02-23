#ifndef CURRENCIES_H
#define CURRENCIES_H

#define NUM_CURRENCIES 4

struct Currency {
    char name[4];
    double rate;
};

extern const struct Currency CURRENCIES[NUM_CURRENCIES];

void display_currencies(void);

#endif /* CURRENCIES_H */
