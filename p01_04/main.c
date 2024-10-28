/*
Program 1.4: p01_04.c
Sobiranje
*/
#include <stdio.h>

int main()
{
    // integer promenlivi = lokacija vo memorija kade moze da se zachuva nekoja vrednost
    int integer1;
    int integer2;
    int sum;

    printf("Vnesi prv cel broj\n"); //prompt
    scanf("%d", &integer1); //prochitaj cel broj od tastatura

    printf("Vnesi vtor cel broj\n"); // prompt
    scanf("%d", &integer2); // prochitaj cel broj od tastatura

    sum = integer1 + integer2; // dodeli go vkupniot rezultat na sum

    printf("Sumata na dvata broja shto gi vnese e %d\n", sum); // pechati sum

    return 0;
}
