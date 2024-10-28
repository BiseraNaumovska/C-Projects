/* Program p08_01.c
   Inicijaliziranje na niza */

#include <stdio.h>

int main()
{
    int n[10]; /* n e niza od 10 celi broja */
    int i; /* brojach */

    /* inicijaliziraj gi elementite na nizata n na 0 */
    for ( i = 0; i < 10; i++ ) {
        n[ i ] = 0; /* postavi go elementot na lokacija i na 0 */
    } /* kraj for */

    printf( "%s%13s\n", "Element", "Vrednost" );

    /* ispechati ja sodrzhinata na nizata n vo tabularen format */
    for ( i = 0; i < 10; i++ ) {
        printf( "%7d%13d\n", i, n[ i ] );
    } /* kraj for */

    return 0;
}
