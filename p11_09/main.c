/*   Koristenje na strtoul */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *string = "1234567abc"; /* inicijaliziraj string pokazhuvach */
    unsigned long x;    /* promenliva koja ja sodrzhi konvertiranata sekvenca */
    char *remainderPtr; /* kreiraj char pokazhuvach */

    x = strtoul( string, &remainderPtr, 0 );

    printf( "%s\"%s\"\n%s%lu\n%s\"%s\"\n%s%lu\n",
           "Originalniot string e ", string,
           "Konvertiranata vrednost e ", x,
           "Ostatokot od originalniot string e ",
           remainderPtr,
           "Konvertiranata vrednost minus 567 e ", x - 567 );

    return 0; /* uspeshen kraj */
}
