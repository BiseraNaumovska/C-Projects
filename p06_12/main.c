/* Program p06_12.c */
/* Chitanje karakteri i stringovi */

#include <stdio.h>

int main()
{
    char x;
    char y[ 9 ];

    printf( "Vnesi string: " );
    scanf( "%c%s", &x, y );

    printf( "Vlezot beshe:\n" );
    printf( "karakterot \"%c\" ", x );
    printf( "i ostatokot od stringot \"%s\"\n", y );

    return 0;
}
