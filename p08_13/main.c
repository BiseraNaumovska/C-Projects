/* Program p08_13.c
   Inicijaliziranje na povekjedimenzionalni nizi */
#include <stdio.h>

void printArray( const int a[][ 3 ] ); /* funkciski prototip */

/* pochetok na izvrshuvanjeto */
int main()
{
    /* inicijaliziraj gi array1, array2, array3 */
    int array1[ 2 ][ 3 ] = { { 1, 2, 3 }, { 4, 5, 6 } };
    int array2[ 2 ][ 3 ] = { 1, 2, 3, 4, 5 };
    int array3[ 2 ][ 3 ] = { { 1, 2 }, { 4 } };

    printf( "Vrednostite vo array1 po redovi se:\n" );
    printArray( array1 );

    printf( "Vrednostite vo array2 po redovi se:\n" );
    printArray( array2 );

    printf( "Vrednostite vo array3 po redovi se:\n" );
    printArray( array3 );

    return 0; /* uspeshen kraj */

} /* kraj na main */

/* funkcija koja pechati niza so dva reda i tri koloni */
void printArray( const int a[][ 3 ] )
{
    int i; /* brojach na redovi */
    int j; /* brojach na koloni */

    /* pomini niz redovite */
    for ( i = 0; i <= 1; i++ ) {
        /* ispechati gi vrednostite na kolonite */
        for ( j = 0; j <= 2; j++ ) {
            printf( "%d ", a[ i ][ j ] );
        } /* kraj za vnatreshnoto for */
        printf( "\n" ); /* nova linija na izlezot */
    } /* kraj na nadvoreshnoto for */
} /* kraj na funkcijata printArray */
