/* Program p08_16.c
   Binarno prebaruvanje na niza

Следниот пример ја претставува итеративната верзија на бинарното
пребарување. Средниот елемент на секоја подниза се означува со
ѕвездичка (*), за подобро визуелно претставување на бинарното
пребарување.
*/

#include <stdio.h>
#define SIZE 15

/* funkciski prototipovi */
int binarySearch( const int b[], int searchKey, int low, int high );
void printHeader( void );
void printRow( const int b[], int low, int mid, int high );

/* pochetok na izvrshuvanjeto */
int main()
{
    int a[ SIZE ]; /* sozdadi niza a */
    int i; /* brojach za inicijalizacija na elementite 0-14 od a */
    int key; /* vrednost koja treba da se pronajde vo nizata a */
    int result; /* promenliva koja ja drzhi lokacijata na kluchot ili -1 */

    /* sozdadi niza */
    for ( i = 0; i < SIZE; i++ ) {
        a[ i ] = 2 * i;
    } /* kraj for */

    printf( "Vnesi broj megju 0 i 28: " );
    scanf( "%d", &key );

    printHeader();

    /* baraj go kluchot vo nizata a */
    result = binarySearch( a, key, 0, SIZE - 1 );

    /* ispechati rezulatati */
    if ( result != -1 ) {
        printf( "\n%d e najden vo elementot %d\n", key, result );
    } /* kraj if */
    else {
        printf( "\n%d ne e najden\n", key );
    } /* kraj else */

    return 0; /* uspeshen kraj */

} /* kraj na main */

/* funkcija koja binarno prebaruva vo niza */
int binarySearch( const int b[], int searchKey, int low, int high )
{
    int middle; /* promenliva koja go sodrzhi sredniot element na nizata */

    /* povtorivaj dodeka pomaliot indeks ne e pogolem od pogolemiot indeks */
    while ( low <= high ) {

        /* odredi go sredniot element na podnizata koja momentalno se prebaruva */
        middle = ( low + high ) / 2;

        /* ispechati ja podnizata koja se koristi vo ovaa iteracija */
        printRow( b, low, middle, high );

        /* ako searchKey == so sredniot element, vrati middle */
        if ( searchKey == b[ middle ] ) {
            return middle;
        } /* kraj if */

        /* ako searchKey<sredniot element, postavi nov pogolem indeks */
        else if ( searchKey < b[ middle ] ) {
            high = middle - 1; /* prebaraj go leviot del od nizata */
        } /* kraj else if */

        /* ako searchKey > sredniot element, postavi nov pomal indeks */
        else {
            low = middle + 1; /* prebaraj go desniot kraj na nizata */
        } /* kraj else */

    } /* kraj while */

    return -1;   /* searchKey none e najden */

} /* kraj na funkcijata binarySearch */

/* Ispechati zaglavie za izlezot */
void printHeader( void )
{
    int i; /* brojach */

    printf( "\nIndeksi:\n" );

    /* ispechati zaglavie na kolonite */
    for ( i = 0; i < SIZE; i++ ) {
        printf( "%3d ", i );
    } /* kraj for */

    printf( "\n" ); /* nova linija za izlezot */

    /* ispechati linija napravena od karakterot - */
    for ( i = 1; i <= 4 * SIZE; i++ ) {
        printf( "-" );
    } /* kraj for */

    printf( "\n" ); /* nova linija za izlezot */
} /* kraj na funkcijata printHeader */

/* Ispechati eden red od izlezot prikazhuvajki go tekovniot
   del od nizata koj se obrabotuva. */
void printRow( const int b[], int low, int mid, int high )
{
    int i; /* brojach niz nizata b */

    /* pomini niz celata niza */
    for ( i = 0; i < SIZE; i++ ) {

        /* ispechati prazni mesta ako sme nadvor od goleminata na podnizata */
        if ( i < low || i > high ) {
            printf( "    " );
        } /* kraj if */
        else if ( i == mid ) { /* ispechati go sredniot element */
            printf( "%3d*", b[ i ] ); /* markiraj ja srednata vrednost */
        } /* kraj else if */
        else { /* ispechati gi drugite vrednosti vo podnizata */
            printf( "%3d ", b[ i ] );
        } /* kraj else */

    } /* kraj for */

    printf( "\n" ); /* nova linija za izlezot */
} /* kraj na funkcijata printRow */
