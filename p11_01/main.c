/* Program p11_01.c
   Koristenje na funkciite isdigit, isalpha, isalnum, i isxdigit */
#include <stdio.h>
#include <ctype.h>

int main()
{
    printf( "%s\n%s%s\n%s%s\n\n", "Spored isdigit: ",
           isdigit( '8' ) ? "8 e " : "8 ne e ", "broj",
           isdigit( '#' ) ? "# e " : "# ne e ", "broj" );

    printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
           "Spored isalpha:",
           isalpha( 'A' ) ? "A e " : "A ne e ", "bukva",
           isalpha( 'b' ) ? "b e " : "b ne e ", "bukva",
           isalpha( '&' ) ? "& e " : "& ne e ", "bukva",
           isalpha( '4' ) ? "4 e " : "4 ne e ", "bukva" );

    printf( "%s\n%s%s\n%s%s\n%s%s\n\n",
           "Spored isalnum:",
           isalnum( 'A' ) ? "A e " : "A ne e ",
           "broj ili bukva",
           isalnum( '8' ) ? "8 e " : "8 ne e ",
           "broj ili bukva",
           isalnum( '#' ) ? "# e " : "# ne e ",
           "broj ili bukva" );

    printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n",
           "Spored isxdigit:",
           isxdigit( 'F' ) ? "F e " : "F ne e ",
           "heksadekaden broj",
           isxdigit( 'J' ) ? "J e " : "J ne e ",
           "heksadekaden broj",
           isxdigit( '7' ) ? "7 e " : "7 ne e ",
           "heksadekaden broj",
           isxdigit( '$' ) ? "$ e " : "$ ne e ",
           "heksadekaden broj",
           isxdigit( 'f' ) ? "f e " : "f ne e ",
           "heksadekaden broj" );

    return 0; /* uspeshen kraj */

} /* kraj na main */
