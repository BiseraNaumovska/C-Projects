/* Program p06_08.c */
/* Koristewe na znamenceto # so specifikatorite za konverzija
   o, x, X i bilo koj specifikator za konverzija na decimalni broevi */

#include <stdio.h>

int main()
{

    int c = 1427;      /* inicijaliziraj c */
    double p = 1427.0; /* inicijaliziraj p */

    printf( "%#o\n", c );
    printf( "%#x\n", c );
    printf( "%#X\n", c );
    printf( "\n%g\n", p );
    printf( "%#g\n", p );

    return 0;
}
