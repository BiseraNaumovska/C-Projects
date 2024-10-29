/*Следниот пример ја прикажува употребата на битските оператори И,
 * ИЛИ исклучуво ИЛИ и операторот за комплементирање на битови.*/

#include <stdio.h>

void prikazhiBitovi( unsigned vrednost ); /* prototip */

int main()
{
    unsigned number1; /* definiraj number1 */
    unsigned number2; /* definiraj number2 */
    unsigned mask;    /* definiraj mask */
    unsigned postaviBitovi; /* definiraj postaviBitovi */

    /* demonstracija na bitsko I (&) */
    number1 = 65535;
    mask = 1;
    printf( "Rezultatot od kombiniranje na\n" );
    prikazhiBitovi( number1 );
    prikazhiBitovi( mask );
    printf( "so koristenje na bitskiot I operator & e\n" );
    prikazhiBitovi( number1 & mask );

    /* demonstracija na bitsko ILI (|) */
    number1 = 15;
    postaviBitovi = 241;
    printf( "\nRezultatot od kombiniranje na\n" );
    prikazhiBitovi( number1 );
    prikazhiBitovi( postaviBitovi );
    printf( "so koristenje na bitskiot ILI operator | e\n" );
    prikazhiBitovi( number1 | postaviBitovi );

    /* demonstracija na bitsko iskluchivi ILI (^) */
    number1 = 139;
    number2 = 199;
    printf( "\nRezultatot od kombiniranje na\n" );
    prikazhiBitovi( number1 );
    prikazhiBitovi( number2 );
    printf( "so koristenje na bitskiot iskluchivo ILI operator ^ e\n" );
    prikazhiBitovi( number1 ^ number2 );

    /* demonstracija na bitski komplement (~) */
    number1 = 21845;
    printf( "\nKomplementot na\n" );
    prikazhiBitovi( number1 );
    printf( "e\n" );
    prikazhiBitovi( ~number1 );

    return 0; /* uspeshen kraj */
} /* kraj na main */

/* prikazhi gi bitovite na unsigned integer vrednost */
void prikazhiBitovi( unsigned vrednost )
{
    unsigned c; /* brojach */

    /* deklariraj pechatiMaska i shiftiraj ja vo levo za 31 bit */
    unsigned pechatiMaska = 1 << 31;

    printf( "%10u = ", vrednost );

    /* pomini niz bitovite */
    for ( c = 1; c <= 32; c++ ) {
        putchar( vrednost & pechatiMaska ? '1' : '0' );
        vrednost <<= 1; /* shiftiraj vo levo za 1 */

        if ( c % 8 == 0 ) { /* ispechati prazno mesto posle 8 bita */
            putchar( ' ' );
        } /* kraj if */
    } /* kraj for */
    putchar( '\n' );
}
