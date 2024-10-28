/* Program p07_04.c
   Zvrti kocka 6000 pati */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int frequency1 = 0; /* brojach deka e svrteno 1 */
    int frequency2 = 0; /* brojach deka e svrteno 2 */
    int frequency3 = 0; /* brojach deka e svrteno 3 */
    int frequency4 = 0; /* brojach deka e svrteno 4 */
    int frequency5 = 0; /* brojach deka e svrteno 5 */
    int frequency6 = 0; /* brojach deka e svrteno 6 */

    int roll; /* brojac na frlanja, vrednost 1 do 6000 */
    int face; /* oznacuva brojka na kockata pri edno frlanje, vrednost 1 do 6 */

    /* povtori 6000 pati i sumiraj gi rezultatite */
    for ( roll = 1; roll <= 6000; roll++ ) {
        face = 1 + rand() % 6; /* sluchaen broj od 1 do 6 */

        /* odredi go brojot shto se padnal i zgolemi go soodvetniot brojach */
        switch ( face ) {

        case 1: /* svrtena 1 */
            ++frequency1;
            break;

        case 2: /* svrtena 2 */
            ++frequency2;
            break;

        case 3: /* svrtena 3 */
            ++frequency3;
            break;

        case 4: /* svrtena 4 */
            ++frequency4;
            break;

        case 5: /* svrtena 5 */
            ++frequency5;
            break;

        case 6: /* rolsvrtenaled 6 */
            ++frequency6;
            break; /* ovoj break ne e potreben */
        } /* kraj switch */

    } /* kraj for */

    /* pechati gi rezultatite tabelarno */
    printf( "%s%13s\n", "Se padnalo", "frekvencija" );
    printf( "   1%13d\n", frequency1 );
    printf( "   2%13d\n", frequency2 );
    printf( "   3%13d\n", frequency3 );
    printf( "   4%13d\n", frequency4 );
    printf( "   5%13d\n", frequency5 );
    printf( "   6%13d\n", frequency6 );

    return 0;
}
