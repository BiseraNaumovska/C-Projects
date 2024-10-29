/*Koristenje na gets i putchar */

#include <stdio.h>

void reverse( const char * const sPtr );


int main()
{
    char sentence[ 80 ]; /* niza od karakteri */

    printf( "Vnesi linija tekst:\n" );

    gets( sentence );

    printf( "\nLinijata ispechatena nanazad e:\n" );
    reverse( sentence );
    printf("\n");

    return 0;

}


void reverse( const char * const sPtr )
{
    /* ako e kraj na stringot */
    if ( sPtr[ 0 ] == '\0' ) {
        return;
    }
    else { /* ako ne e kraj na stringot */
        reverse( &sPtr[ 1 ] ); /* rekurziven chekor */

        putchar( sPtr[ 0 ] ); /* iskoristi putchar za ispechatuvanje na karakter */
    }
}
