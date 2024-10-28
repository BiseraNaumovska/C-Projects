
/* Program p07_07.c
   Rekurzivna funkcija za presmetka na faktoriel
n!=n*(n-1)!
*/

#include <stdio.h>

long factorial(long number);

int main()
{
    int i; /* brojach */

    /* povtori 11 pati; pri sekoja iteracija presmetaj
      factorial( i ) i ispechati go rezultatot */
    for ( i = 0; i <= 10; i++ ) {
        printf( "%2d! = %ld\n", i, factorial( i ) );
    } /* kraj for */

    return 0;
}

/* rekurzivna definicija na funkcijata factorial */
long factorial( long number )
{
    /* osnoven sluchaj */
    if ( number <= 1 ) {
        return 1;
    } /* kraj if */
    else { /* rekurziven chekor */
        return ( number * factorial( number - 1 ) );
    } /* kraj else */

} /* kraj na funkcijata factorial */
