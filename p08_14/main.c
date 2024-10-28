/* Program p08_14.c
   Sortiranje na niza vo rastechki redosled

Овде ќе претставиме еден наједноставен пример за сортирање на низа,
користејќи го методот на меурче (bubble sort). Се состои од поминување
низ низата неколку пати. При секое поминување низ низата, се
споредуваат соседните елементи. Ако двата елементи се меѓусебно
поставени во растечки редослед или се еднакви по големина, не се
превзема ништо. Во спротивно, се заменуваат нивните вредности.

*/

#include <stdio.h>

#define SIZE 10

int main()
{
    int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int pass; /* brojach za pominuvanja niz nizata*/
    int i;    /* brojach za sporedba */
    int hold; /* privremena lokacija za smena na elementite */

    printf( "Podatocite vo originalen redosled se\n" );

    /* ispechati ja originalnata niza */
    for ( i = 0; i < SIZE; i++ ) {
        printf( "%4d", a[ i ] );
    } /* kraj for */

    /* bubble sort */
    /* ciklus za kontroliranje na brojot na pominuvanja vo nizata */
    for ( pass = 1; pass < SIZE; pass++ ) {
        /* ciklus za kontroliranje na brojоt na promeni pri sekoe pominuvanje na nizata */
        for ( i = 0; i < SIZE - 1; i++ ) {
            /* sporedi gi sosednite elementi i promeni gi ako
         prviot element e pogolem od vtoriot */
            if ( a[ i ] > a[ i + 1 ] ) {
                hold = a[ i ];
                a[ i ] = a[ i + 1 ];
                a[ i + 1 ] = hold;
            } /* kraj if */
        } /* kraj na vnatreshnoto for */
    } /* kraj na nadvoreshnoto for */

    printf( "\nPodatocite vo rastechki redosled se\n" );

    /* ispechati sortirana niza */
    for ( i = 0; i < SIZE; i++ ) {
        printf( "%4d", a[ i ] );
    } /* kraj for */
    printf( "\n" );

    return 0;
}
