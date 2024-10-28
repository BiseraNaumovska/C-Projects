/* Program p08_04.c
   Presmetaj suma na elementite vo niza */

#include <stdio.h>
#define SIZE 12


int main()
{
    /* koristi inicijalizatorska lista za inicijaliziranje na nizata */
    int a[ SIZE ] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };
    int i; /* brojach */
    int total = 0; /* suma na nizata */

    /* presmetka na sumata na nizata a */
    for ( i = 0; i < SIZE; i++ ) {
        total += a[ i ];
    } /* kraj for */

    printf( "Sumata na vrednostite na elementite e %d\n", total );

    return 0;
}
