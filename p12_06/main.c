/*Следниот пример ги демонстрира можностите на операторите за
 * шифтирање во лево (<<) и за шифтирање во десно (>>)*/


#include <stdio.h>

void pechatiBitovi( unsigned value ); /* prototip */

int main()
{
    unsigned number1 = 960; /* inicijaliziraj number1 */

    /* demonstracija na shiftiranje vo levo */
    printf( "\nRezultatot od shiftiranje vo levo na\n" );
    pechatiBitovi( number1 );
    printf( "8 bit pozicii koristejki go  " );
    printf( "operatorot za levo shiftiranje << e\n" );
    pechatiBitovi( number1 << 8 );

    /* demonstracija na shiftiranje vo desno */
    printf( "\nRezulatatot od shiftiranje vo desno na\n" );
    pechatiBitovi( number1 );
    printf( "8 bit pozicii koristejki go " );
    printf( "operatorot za shiftiranje vo desno >> e\n" );
    pechatiBitovi( number1 >> 8 );

    return 0; /* uspeshen kraj */
} /* kraj na main */

/* prikazhi gi bitovite na unsigned integer vrednost */
void pechatiBitovi( unsigned value )
{
    unsigned c; /* counter */

    /* deklariraj pechatiMaska i shiftiraj ja vo levo za 31 bit */
    unsigned pechatiMaska = 1 << 31;

    printf( "%7u = ", value );

    /* pomini niz bitovite */
    for ( c = 1; c <= 32; c++ ) {
        putchar( value & pechatiMaska ? '1' : '0' );
        value <<= 1; /* shiftiraj ja vrednosta vo levo za 1 */

        if ( c % 8 == 0 ) { /* ispechati prazno mesto posle 8 bita */
            putchar( ' ' );
        } /* kraj if */
    } /* kraj for */
    putchar( '\n' );
}
