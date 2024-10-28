/* Program p08_02.c
   Inicijaliziranje na niza so inicijatorska lista */

#include <stdio.h>

int main()
{
    int n[ 10 ] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
    int i; /* brojach */

    printf( "%s%13s\n", "Element", "Vrednost" );

    /* ispechati ja sodrzhinata na nizata vo tabularen format */
    for ( i = 0; i < 10; i++ ) {
        printf( "%7d%13d\n", i, n[ i ] );
    }

    return 0;
}
