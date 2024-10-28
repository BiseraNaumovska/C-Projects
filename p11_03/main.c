/* Program p11_03.c
  Koristenje na funkciite isspace, iscntrl, ispunct, isprint, isgraph */
#include <stdio.h>
#include <ctype.h>

int main()
{
    printf( "%s\n%s%s%s\n%s%s%s\n%s%s\n\n",
           "Spored isspace:",
           "Newline", isspace( '\n' ) ? " e " : " ne e ",
           "karakter koj oznacuva prazno", "horizontalen tab",
           isspace( '\t' ) ? " e " : " ne e ",
           "karakter koj oznachuva prazno",
           isspace( '%' ) ? "% e " : "% ne e ",
           "karakter koj oznachuva prazno" );

    printf( "%s\n%s%s%s\n%s%s\n\n", "Spored iscntrl:",
           "Nova linija", iscntrl( '\n' ) ? " e " : " ne e ",
           "kontrolen karakter", iscntrl( '$' ) ? "$ e " :
               "$ ne e ", "kontrolen karakter" );

    printf( "%s\n%s%s\n%s%s\n%s%s\n\n",
           "Spored ispunct:",
           ispunct( ';' ) ? "; e " : "; ne e ",
           "interpunkciski karakter",
           ispunct( 'Y' ) ? "Y e " : "Y ne e ",
           "interpunkciski karakter",
           ispunct( '#' ) ? "# e " : "# ne e ",
           "interpunkciski karakter" );

    printf( "%s\n%s%s\n%s%s%s\n\n", "Spored isprint:",
           isprint( '$' ) ? "$ e " : "$ ne e ",
           "pechatachki karakter",
           "Alert", isprint( '\a' ) ? " e " : " ne e ",
           "pechatachki karakter" );

    printf( "%s\n%s%s\n%s%s%s\n",  "Spored isgraph:",
           isgraph( 'Q' ) ? "Q e " : "Q ne e ",
           "pechatachki karakter razlichen od prazno mesto",
           "Space", isgraph( ' ' ) ? " e " : " ne e ",
           "pechatachki karakter razlichen od prazno mesto" );

    return 0; /* uspeshen kraj */

}
