/*Konvertiranje na mali vo golemi bukvi koristejki nekonstanten
   pokazhuvach kon nekonstantni podatoci */

#include <stdio.h>
#include <ctype.h>

void convertToUppercase( char *sPtr ); /* prototip */

int main()
{
    char string[] = "karakteri i $32.98"; /* inicijaliziraj niza od karakteri */

    printf( "Stringot pred konverzijata e: %s", string );
    convertToUppercase( string );
    printf( "\nStringot po konverzijata e: %s\n", string );

    return 0; /* uspeshen kraj */

} /* kraj na main */

/* konvertiraj string vo golemi bukvi */
void convertToUppercase( char *sPtr )
{
    while ( *sPtr != '\0' ) { /* tekovniot karakter ne e '\0' */
        if ( islower( *sPtr ) ) {    /* ako karakterot e mala bukva, */
            *sPtr = toupper( *sPtr ); /*konvertiraj ja vo golema bukva */
        } /* kraj if */

        ++sPtr;  /* premesti go sPtr na sledniot karakter */
    } /* kraj while */
} /* kraj na funkcijata convertToUppercase */

