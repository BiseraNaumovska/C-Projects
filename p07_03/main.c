/* Program p07_03.c
   Shiftirani, skalirani celi broevi dobieni so 1 + rand() % 6 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i; /* brojach */

    /* povtori 20 pati */
    for ( i = 1; i <= 20; i++ ) {

        /* izberi sluchaen broj od 1 do 6 i ispechati go */
        printf( "%10d", 1 + ( rand() % 6 ) );

        /* ako counter e deliv so 5, pochni nov red vo pechatenjeto */
        if ( i % 5 == 0 ) {
            printf( "\n" );
        } /* kraj if */
    } /* kraj for */

    return 0;
}
