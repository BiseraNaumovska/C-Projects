/* Program p07_08.c
   Rekurzivna funkcija za presmetuvanje na Fibonacci-eva niza
fibonacci(0)=0
fibonacci(1)=1
fibonacci(n)= fibonacci(n-1) + fibonacci(n-2)

*/

#include <stdio.h>

long fibonacci( long n ); /* funkciski prototip */

int main()
{
    long result; /* fibonacci-eva vrednost */
    long number; /* broj vnesen od korisnikot */

    /* zemi cel broj od korisnikot */
    printf( "Vnesi cel broj: " );
    scanf( "%ld", &number );

    /* presmetaj fibonacci-eva niza za vneseniot broj */
    result = fibonacci( number );

    /* ispechati rezultat */
    printf( "Fibonacci( %ld ) = %ld\n", number, result );

    return 0;
}

/* Rekurzivna definicija na funkcijata fibonacci */
long fibonacci( long n )
{
    /* osnoven sluchaj */
    if ( n == 0 || n == 1 ) {
        return n;
    } /* kraj if */
    else { /* rekurziven chekor */
        return fibonacci( n - 1 ) + fibonacci( n - 2 );
    } /* kraj else */

} /* kraj na funkciata fibonacci */

