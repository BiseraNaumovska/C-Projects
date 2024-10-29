/*Следниот пример се базира на примерот за мешање и делење на крати.
 * Оваа верзија го претсавува шпилот карти како низа од структури.
 * Овој програм користи многу пооптимални алгоритми за делење и
 * мешање.

   Program za delenje i meshane karti so koristenje na
   strukturi
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* definicija na struktura karta */
struct karta {
    const char *brojka; /* definiraj pokazhuvach brojka */
    const char *boja; /* definiraj pokazhuvach boja */
}; /* kraj na strukturata karta */

typedef struct karta Karta; /* novo ime za strukturata karta */

/* prototipovi */
void fillDeck( Karta * const wDeck, const char * wFace[], const char * wSuit[] );
void meshaj( Karta * const wDeck );
void deli( const Karta * const wDeck );

int main()
{
    Karta spil[ 52 ]; /* definiraj niza od Karti */

    /* inicijaliziraj niza od pokazhuvachi */
    const char *brojka[] = { "As", "Dva", "Tri", "Cetiri", "Pet",
                            "Sest", "Sedum", "Osum", "Devet", "Deset",
                            "Dzhandar", "Dama", "Pop"};

    /* inicijaliziraj niza od pokazhuvachi */
    const char *boja[] = { "Srce", "Karo", "List", "Detelina"};

    srand( time( NULL ) ); /* randomiziraj */

    fillDeck( spil, brojka, boja ); /* napolni go spilot so Karti */
    meshaj( spil ); /* stavi gi KArtite vo sluchaen redosled */
    deli( spil ); /* podeli gi site 52 KArti */

    return 0; /* uspeshen kraj */

} /* kraj na main */

/* postavi gi stringovite vo strukturite Karta */
void fillDeck( Karta * const wDeck, const char * wFace[],
              const char * wSuit[] )
{
    int i; /* brojach */

    /* pomini niz wDeck */
    for ( i = 0; i <= 51; i++ ) {
        wDeck[ i ].brojka = wFace[ i % 13 ];
        wDeck[ i ].boja = wSuit[ i / 13 ];
    } /* kraj for */

} /* kraj na funkcijata fillDeck */

/* meshaj karti */
void meshaj( Karta * const wDeck )
{
    int i;     /* brojach */
    int j;     /* promenliva koja ima sluchajna vrednost megju 0 - 51 */
    Karta temp; /* definiraj privremena struktura za zamena na Karti */

    /* pomini niz wDeck so menuvanje na KArtite */
    for ( i = 0; i <= 51; i++ ) {
        j = rand() % 52;
        temp = wDeck[ i ];
        wDeck[ i ] = wDeck[ j ];
        wDeck[ j ] = temp;
    } /* kraj for */

} /* kraj na funkcijata meshaj */

/* deli karti */
void deli( const Karta * const wDeck )
{
    int i; /* brojach */

    /* pomini niz wDeck */
    for ( i = 0; i <= 51; i++ ) {
        printf( "%7s %-10s%c", wDeck[ i ].brojka, wDeck[ i ].boja,
               ( i + 1 ) % 2 ? '\t' : '\n' );
    } /* kraj for */
}
