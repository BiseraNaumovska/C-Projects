
/* Program p08_11.c
   Predavanje na nizi i na individualni elementi na nizi na funkcii */

#include <stdio.h>

#define SIZE 5

/* funkciski prototipovi */
void modifyArray( int b[], int size );
void modifyElement( int e );

/* pochetok na izvrshuvanjeto */
int main()
{
    int a[ SIZE ] = { 0, 1, 2, 3, 4 }; /* inicijaliziraj ja a */
    int i; /* brojach */

    printf( "Efekt od predavanje na cela niza preku referenca:\n\n"
           "Vrednostite na originalnata niza se:\n" );

    /* ispechati ja originalnata niza */
    for ( i = 0; i < SIZE; i++ ) {
        printf( "%3d", a[ i ] );
    } /* kraj for */

    printf( "\n" );

    /* predaj ja nizata a na modifyArray preku referenca */
    modifyArray( a, SIZE );

    printf( "Vrednostite na modificiranata niza se:\n" );

    /* ispechati ja modificiranata niza */
    for ( i = 0; i < SIZE; i++ ) {
        printf( "%3d", a[ i ] );
    } /* kraj for */

    /* ispechati ja vrednosta na a[ 3 ] */
    printf( "\n\n\nEfekti od predavanje na element na niza "
           "preku vrednost:\n\nVrednosta na a[3] e %d\n", a[ 3 ] );

    modifyElement( a[ 3 ] ); /* predaj go elementot na nizata a[ 3 ] kako vrednost */

    /* ispechati ja vrednosta na a[ 3 ] */
    printf( "Vrednosta na a[ 3 ] e %d\n", a[ 3 ] );

    return 0; /* uspeshen kraj */

} /* kraj main */

/* Vo funkcijata modifyArray, "b" pokazhuva na originalnata niza "a"
   vo memorijata */
void modifyArray( int b[], int size )
{
    int j; /* brojach */
    /* mnozhi go sekoj element od nizata so 2 */
    for ( j = 0; j < size; j++ ) {
        b[ j ] *= 2;
    } /* kraj for */
} /* kraj na funkcijata modifyArray */

/* Vo funkcijata modifyElement, "e" e lokalna kopija na elementot na nizata
   a[ 3 ] predaden od main */
void modifyElement( int e )
{
    /* mnozhi go parametarot so 2 */
    printf( "Vrednosta vo modifyElement e %d\n", e *= 2 );
} /* kraj na funkcijata modifyElement */

