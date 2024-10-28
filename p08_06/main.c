/* Program p08_06.c
   Program za pechatenje histogram
Во следниот пример се читаат вредностите на елементи на низа и
се претставуваат во форма на хистограм.
*/
#include <stdio.h>

#define SIZE 10


int main()
{

    int n[ SIZE ] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
    int i; /* nadvoreshen brojach za elementite na nizata */
    int j; /* vnatreshen brojach za broenje na * vo sekoj red na histogramot */

    printf( "%s%13s%17s\n", "Element", "Vrednost", "Histogram" );

    /* za sekoj element vo nizata n, ispechati red od histogramot */
    for ( i = 0; i < SIZE; i++ ) {
        printf( "%7d%13d        ", i, n[ i ]) ;

        for ( j = 1; j <= n[ i ]; j++ ) {   /* ispechati eden red */
            printf( "%c", '*' );
        } /* kraj za vnatreshnoto for */

        printf( "\n" ); /* kraj za red od histogramot */
    } /* kraj za nadvoreshnoto for */

    return 0;
}
