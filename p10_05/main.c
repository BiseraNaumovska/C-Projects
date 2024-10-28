/*Pechatenje na string karakter po karakter koristejki
   nekonstanten pokazhuvach kon konstantni podatoci */

#include <stdio.h>

void printCharacters( const char *sPtr );

int main()
{
    /* inicijaliziraj niza od karakteri */
    char string[] = "pechati karakteri na string";

    printf( "Stringot e:\n" );
    printCharacters( string );
    printf( "\n" );

    return 0; /* uspeshen kraj */
} /* kraj na main */

/* sPtr ne mozhe da gi modificira karakterite kon koi pokazhuva,
   t.e., sPtr e "read-only" pokazhuvach */
void printCharacters( const char *sPtr )
{
    /* pomini niz celiot string */
    for ( ; *sPtr != '\0'; sPtr++ ) {   /* nema reinicijalizacija */
        printf( "%c", *sPtr );
    } /* kraj for */
} /* kraj na funkcijata printCharacters */


