/*Koristenje na atol */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long l;
    l = atol( "1000000" );

    printf( "%s%ld\n%s%ld\n",
           "Stringot \"1000000\" konvertiran vo long int e ", l,
           "Konvertiranata vrednost podelena so 2 e ", l / 2 );

    return 0;
}
