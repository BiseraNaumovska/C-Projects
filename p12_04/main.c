/*
Следниот пример илустративно ја прикажува вредноста на unsigned int
вредност во битови групирани во групи од 8 бита.
*/
#include <stdio.h>

void prikaziBitovi( unsigned vrednost ); /* prototip */

int main()
{
    unsigned x; /* promenliva koja go chuva korisnichkiot vlez */

    printf( "Vnesi unsigned integer: " );
    scanf( "%u", &x );

    prikaziBitovi( x );

    return 0; /* uspeshen kraj */

} /* kraj na main */

/* ispechati gi bitovite na vrednost na unsigned integer */
void prikaziBitovi( unsigned vrednost )
{
    unsigned c; /* brojach */

    /* definiraj prikazhiMaska i shiftiraj ja vo levo za 31 bit */
    unsigned prikazhiMaska = 1 << 31;

    printf( "%10u = ", vrednost );

    /* pomini niz bitovite */
    for ( c = 1; c <= 32; c++ ) {
        putchar( vrednost & prikazhiMaska ? '1' : '0' );
        vrednost <<= 1; /* shiftiraj ja vrednosta vo levo za 1 */

        if ( c % 8 == 0 ) { /* ispechati prazno mesto posle 8 bita */
            putchar( ' ' );
        } /* kraj if */
    } /* kraj for */
    putchar( '\n' );
}
