/* Program p08_07.c
   Svrti kocka 6000 pati

Свртување на коцка 6000 пати и сумирање на резултатите во низа
*/

#include <stdio.h>

#include <stdlib.h>
#include <time.h>
#define SIZE 7


int main()
{
    int face; /* sluchajna vrednost na kockata 1 - 6 */
    int roll; /* brojach na svrtuanja na kockata */
    int frequency[ SIZE ] = { 0 }; /* inicjaliziraj ja nizata */

    srand( time( NULL ) ); /* random generator na broevi */

    /* svrti kocka 6000 pati */
    for ( roll = 1; roll <= 6000; roll++ ) {
        face = 1 + rand() % 6;
        ++frequency[ face ]; /* zgolemi ja frekvencijata na brojkata koja se padnala na kockata */
    } /* kraj for */

    printf( "%s%17s\n", "Broj", "Frekvencija" );

    /* ispechati gi frekvenciite od 1-6 vo tabularen format */
    for ( face = 1; face < SIZE; face++ ) {
        printf( "%4d%17d\n", face, frequency[ face ] );
    }

    return 0;
}
