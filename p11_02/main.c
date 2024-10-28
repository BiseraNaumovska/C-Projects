/* Program p11_02.c
   Koristenje na funkciite islower, isupper, tolower, toupper */
#include <stdio.h>
#include <ctype.h>

int main()
{
    printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
           "Spored islower:",
           islower( 'p' ) ? "p e " : "p ne e ",
           "mala bukva",
           islower( 'P' ) ? "P e " : "P ne e ",
           "mala bukva",
           islower( '5' ) ? "5 e " : "5 ne e ",
           "mala bukva",
           islower( '!' ) ? "! e " : "! ne e ",
           "mala bukva" );

    printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
           "Spored isupper:",
           isupper( 'D' ) ? "D e " : "D ne e ",
           "golema bukva",
           isupper( 'd' ) ? "d e " : "d ne e ",
           "golema bukva",
           isupper( '8' ) ? "8 e " : "8 ne e ",
           "golema bukva",
           isupper( '$' ) ? "$ e " : "$ ne e ",
           "golema bukva" );

    printf( "%s%c\n%s%c\n%s%c\n%s%c\n",
           "u pretvorena vo golema bukva e ", toupper( 'u' ),
           "7 pretvorena vo golema bukva e ", toupper( '7' ),
           "$ pretvorena vo golema bukva e ", toupper( '$' ),
           "L pretvorena vo mala bukva e ", tolower( 'L' ) );

    return 0; /* uspeshen kraj */

}
