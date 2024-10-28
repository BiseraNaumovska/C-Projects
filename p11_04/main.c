/* Program p11_4.c
   Koristenje na atof */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double d;

    d = atof( "99.0" );

    printf( "%s%.3f\n%s%.3f\n",
           "Stringot \"99.0\" konvertiran vo double e ", d,
           "Konvertiranata vrednost podelena so 2 e ",
           d / 2.0 );

    return 0;

}
