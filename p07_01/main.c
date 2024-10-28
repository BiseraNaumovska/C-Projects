/* Program 07_01.c
   sozdavanje na programerski definirana funkcija */

#include <stdio.h>

int square( int y ); /* funkciski prototip */

int main()
{
    int x; /* brojach */

    /* povtori 10 pati i presmetaj ja vrednosta na x sekoj pat */
    for ( x = 1; x <= 10; x++ ) {
        printf( "%d  ", square( x ) ); /* funkciski povik */
    } /* kraj for */

    printf( "\n" );

    return 0;
}

/* definicija na funkcijata square vrakja kvadrat na parametarot */
int square( int y ) /* y e kopija na argumentot vo funkcijata */
{
    return y * y; /* vrakja square na y kako cel broj */

} /* kraj na funkcijata square */
