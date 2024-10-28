/* Program p08_08.c
   Nizi od karakteri kako stringovi */

#include <stdio.h>

int main()
{
    char string1[ 20 ]; /* rezervira mesto za 20 karakteri */
    char string2[] = "string literal"; /* rezervira 15 karakteri */
    int i; /* brojach */

    /* chitaj string od korisnikot vo nizata string1 */
    printf("vnesi string: ");
    scanf( "%s", string1 ); /* vlezot se zavrshuva so prviot karakter blanko */

    /* ispechati stringovi */
    printf( "string1 e: %s\nstring2 e: %s\n"
           "string1 so blanko megju karakterite e:\n",
           string1, string2 );

    /* ispechati karakteri dodeka ne go najdesh null-tiot karakter */
    for ( i = 0; string1[ i ] != '\0'; i++ ) {
        printf( "%c ", string1[ i ] );
    } /* kraj for */

    printf( "\n" );

    return 0;
}
