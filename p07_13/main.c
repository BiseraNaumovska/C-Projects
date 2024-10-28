/*
5.Напиши итеративна верзија на функцијата за фибоначиеви броеви.
*/
#include <stdio.h>

long fibonacci( long n ); /* funkciski prototip */

int main()
{
    long number; /* broj vnesen od korisnikot */

    /* zemi cel broj od korisnikot */
    printf( "Vnesi cel broj: " );
    scanf( "%ld", &number );

    /* presmetaj fibonacci-eva niza za vneseniot broj */


    /* ispechati rezultat */
    printf( "Fibonacci( %ld ) = %ld\n", number, fibonacci( number ) );

    return 0;
}

long fibonacci( long n )
{
    int prv = 0, vtor = 1, sleden, i;
    if(n ==0){
        return prv;
    }
    if(n ==1 ){
        return vtor;
    }
    for(i=2;i<=n;i++){
        sleden = prv + vtor;
        prv = vtor;
        vtor = sleden;
    }
    return vtor;

} /* kraj na funkciata fibonacci */
