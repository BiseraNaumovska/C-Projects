/*   Koristenje na chlenovi na strukturi i
   operacii so pokazhuvachi kon strukturi */
#include <stdio.h>

/* definicija na struktura karta */
struct karta {
    char *brojka; /* pokazhuvach brojka */
    char *boja; /* pokazhuvach boja */
}; /* kraj na strukturata karta */

int main()
{
    struct karta aCard; /* promenliva od strukturata karta */
    struct karta *cardPtr; /* pokazhuvach do strukturata karta */

    /* vmetni gi stringovite vo aCard */
    aCard.brojka = "As";
    aCard.boja = "Detelina";

    cardPtr = &aCard; /* dodeli i adresa na aCard na cardPtr */

    printf( "%s%s%s\n%s%s%s\n%s%s%s\n", aCard.brojka, " ", aCard.boja,
           cardPtr->brojka, " ", cardPtr->boja,
           ( *cardPtr ).brojka, " ", ( *cardPtr ).boja );

    return 0; /* uspeshen kraj */

}
