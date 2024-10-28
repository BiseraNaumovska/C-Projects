/* Program: p04_01.c
   Demonstracija na case
   Dava broj na denovi vo mesec */

#include <stdio.h>

int main()
{
    int mesec;

    printf("Vnesi go mesecot so negoviot reden broj\n");
    scanf("%d", &mesec);

    switch(mesec){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Ima 31 den\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Ima 30 dena\n");
        break;
    case 2:
        printf("Vo prestapni godini ima 29, vo obichni ima 28 dena\n");
        break;
    default:
        printf("Greshen broj na mesec, ne postoi!\n");
    }

    return 0;
}
