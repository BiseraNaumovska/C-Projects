/*Program p09_14.c
   Program za delenje karti */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* prototipovi */
void meshaj( int wDeck[][ 13 ] );
void deli( const int wDeck[][ 13 ], const char *wFace[],
          const char *wSuit[] );

int main()
{
    /* inicijaliziraj ja nizata na boi */
    const char *boja[ 4 ] = { "Srce", "Karo", "List", "Detelina" };

    /* inicijaliziraj ja nizata na brojki */
    const char *brojka[ 13 ] =
        { "As", "Dva", "Tri", "Chetiri",
         "Pet", "Shest", "Sedum", "Osum",
         "Devet", "Deset", "Dzandar", "Dama", "Pop" };

    /* inicijaliziraj niza na spil */
    int spil[ 4 ][ 13 ] = { 0 };

    srand( time( 0 ) ); /* generator na sluchajni broevi */

    meshaj( spil );
    deli( spil, brojka, boja );

    return 0; /* uspeshen kraj */

} /* kraj main */

/* meshaj gi kartite vo shpilot */
void meshaj( int wDeck[][ 13 ] )
{
    int row;    /* broj na red */
    int column; /* broj na kolona */
    int card;   /* brojach */

    /* za sekoja od 52-te karti,
   odberi sluchajno mesto vo shpilot */
    for ( card = 1; card <= 52; card++ ) {

        /* biraj nova sluchajna lokacija dodeka ne najdesh
      slobodno mesto */
        do {
            row = rand() % 4;
            column = rand() % 13;
        } while( wDeck[ row ][ column ] != 0 ); /* kraj do...while */

        /* pojtavi ja kartata na izbranoto mesto vo spilot */
        wDeck[ row ][ column ] = card;
    } /* kraj for */
} /* kraj na funkcijata meshaj */

/* deli gi kartite vo shpilot */
void deli( const int wDeck[][ 13 ], const char *wFace[],
          const char *wSuit[] )
{
    int card;   /* brojach na karti */
    int row;    /* brojach na redovi */
    int column; /* brojach na koloni */

    /* podeli ja sekoja od 52-te karti */
    for ( card = 1; card <= 52; card++ ) {

        /* pomini niz redovite na wDeck */
        for ( row = 0; row <= 3; row++ ) {

            /* pomini niz kolonite na wDeck za tekovniot red */
            for ( column = 0; column <= 12; column++ ) {

                /* ako mestoto ja sodrzhi tekovnata karta, prikazhi ja kartata */
                if ( wDeck[ row ][ column ] == card ) {
                    printf( "%8s %-8s%c", wFace[ column ], wSuit[ row ],
                           card % 2 == 0 ? '\n' : '\t' );
                } /* kraj if */
            } /* kraj for */
        } /* kraj for */
    } /* kraj for */
} /* kraj na funkcijata deli */
