/*Koristenje na strcspn */
#include <stdio.h>
#include <string.h>

int main()
{
    /* inicijaliziraj dva pokazhuvachi kon karakter */
    const char *string1 = "Vrednosta e 3.14159";
    const char *string2 = "1234567890";

    printf( "%s%s\n%s%s\n\n%s\n%s%u\n",
           "string1 = ", string1, "string2 = ", string2,
           "Dolzhinata na inicijalniot segment na string1",
           "koj ne sodrzhi karakterti od string2 = ",
           strcspn( string1, string2 ) );

    return 0; /* uspeshen kraj */
}
