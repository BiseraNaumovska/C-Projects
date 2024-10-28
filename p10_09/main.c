/*   Programot stava vrednosti vo niza,ja sortira nizata vo
   rastechki redosled, ja pechati rezultirachkata niza. */
#include <stdio.h>
#define SIZE 10

void bubbleSort( int * const array, const int size ); /* prototip */

int main()
{
    /* inicijaliziraj niza a */
    int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    int i; /* brojach */

    printf( "Podatocite vo originalniot redosled se:\n" );

    /* pomini niz nizata a */
    for ( i = 0; i < SIZE; i++ ) {
        printf( "%4d", a[ i ] );
    } /* kraj for */

    bubbleSort( a, SIZE ); /* sortiraj ja nizata */

    printf( "\nPodatocite vo rastechki redosled se:\n" );

    /* pomini niz nizata a a */
    for ( i = 0; i < SIZE; i++ ) {
        printf( "%4d", a[ i ] );
    } /* kraj for */

    printf( "\n" );

    return 0; /* uspeshen kraj */

} /* kraj main */

/* sortiraj ja nizata od celi broevi
   so pomosh na bubble sort algoritmot */
void bubbleSort( int * const array, const int size )
{
    void swap( int *element1Ptr, int *element2Ptr ); /* prototip */
    int pass; /* brojach na pomini niz nizata */
    int j;    /* sporedbi */

    /* ciklus koj gi kontrolira pominite niz nizata */
    for ( pass = 0; pass < size - 1; pass++ ) {

        /* cikus koj gi kontrolira sporedbite vo edno pominuvanje */
        for ( j = 0; j < size - 1; j++ ) {

            /* smeni gi sosednite elementi ako ne se dobro podredeni */
            if ( array[ j ] > array[ j + 1 ] ) {
                swap( &array[ j ], &array[ j + 1 ] );
            } /* kraj if */
        } /* kraj na vnatreshnoto for */
    } /* kraj na nadvoreshnoto for */
} /* kraj na funkcijata bubbleSort */

/* smeni gi vrednostite na onie memoriski lokacii
   na koi pokazhuvaat element1Ptr i element2Ptr */
void swap( int *element1Ptr, int *element2Ptr )
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
} /* kraj na funkcijata swap */
