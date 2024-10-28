/*   Koristenje na atoi */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    i = atoi( "2593" );

    printf( "%s%d\n%s%d\n",
           "Stringot \"2593\" konvertiran vo int e ", i,
           "KOnvertiranata vrednost minus 593 e ", i - 593 );

    return 0;
}
