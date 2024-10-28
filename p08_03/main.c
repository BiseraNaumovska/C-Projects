/* Program p08_03.c
   Inicijaliziraj elementi na nizata s na
   parni celi broevi od 2 do 20 */
#include <stdio.h>

#define SIZE 10


int main()
{
    /* simbolichkata konstanata SIZE ja koristime za odreduvanje na goleminata na nizata */
    int s[ SIZE ]; /* nizata s ima 10 elementi */
    int j; /* brojach */

    for ( j = 0; j < SIZE; j++ ) { /* postavi gi vrednostite */
        s[ j ] = 2 + 2 * j;
    } /* kraj for */

    printf( "%s%13s\n", "Element", "Vrednost" );

    /* ispechati ja sodrzhinata na nizata s vo tabularen format */
    for ( j = 0; j < SIZE; j++ ) {
        printf( "%7d%13d\n", j, s[ j ] );
    } /* kraj for */

    return 0;

}
