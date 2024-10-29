/* Program p12_07.c
   Reprezentiranje na karti so bitski polinja vo struktura */

#include <stdio.h>

/* definicija na strukturata bitskaKarta so bitski polinja */
struct bitskaKarta {
    unsigned brojka : 4;  /* 4 bita; 0-15 */
    unsigned bojaKarti : 2;  /* 2 bita; 0-3 */
    unsigned boja : 1; /* 1 bit; 0-1 */
}; /* kraj na strukturata bitskaKarta */

typedef struct bitskaKarta Karta; /* novo ime za strukturata bitskaKarta */

void fillDeck( Karta * const wDeck );   /* prototip */
void deli( const Karta * const wDeck ); /* prototip */

int main()
{
    Karta deck[ 52 ]; /* kreiraj niza od KArti */

    fillDeck( deck );
    deli( deck );

    return 0; /* uspeshen kraj */

} /* kraj main */

/* inicijaliziraj Karti */
void fillDeck( Karta * const wDeck )
{
    int i; /* brojach */

    /* pomini niz wDeck */
    for ( i = 0; i <= 51; i++ ) {
        wDeck[ i ].brojka = i % 13;
        wDeck[ i ].bojaKarti = i / 13;
        wDeck[ i ].boja = i / 26;
    } /* kraj for */
} /* kraj na funkcijata fillDeck */

/* ispechati gi kartite vo dvokolonski format; kartite od 0-25
   so indeksi k1 (kolona 1); kartite 26-51 so indeksi k2 (kolona 2) */
void deli( const Karta * const wDeck )
{
    int k1; /* indeksi 0-25 */
    int k2; /* indeksi 26-51 */

    /* pomini niz wDeck */
    for ( k1 = 0, k2 = k1 + 26; k1 <= 25; k1++, k2++ ) {
        printf( "Karta:%3d  Brojka:%2d  Boja:%2d   ",
               wDeck[ k1 ].brojka, wDeck[ k1 ].bojaKarti, wDeck[ k1 ].boja );
        printf( "Karta:%3d  Brojka:%2d  Boja:%2d\n",
               wDeck[ k2 ].brojka, wDeck[ k2 ].bojaKarti, wDeck[ k2 ].boja );
    } /* kraj for */
}
