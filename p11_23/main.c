/*   Koristenje na strtok */
#include <stdio.h>
#include <string.h>

int main()
{
    /* inicijaliziraj niza string */
    char string[] = "Ova e rechenica so 6 dela";
    char *tokenPtr; /* krairaj char pokazhuvach */

    printf( "%s\n%s\n\n%s\n",
           "Stringot koj treba da se podeli e:", string,
           "Delovite se:" );

    tokenPtr = strtok( string, " " ); /* pochni so delenje na rechenicata */

    /* prodolzhi so delenje dodeka tokenPtr stane NULL */
    while ( tokenPtr != NULL ) {
        printf( "%s\n", tokenPtr );
        tokenPtr = strtok( NULL, " " ); /* zemi go sledniot del */
    } /* kraj while */

    return 0; /* uspeshen kraj */
}
