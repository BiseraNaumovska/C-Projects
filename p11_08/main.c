/*Koristenje na strtol */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *string = "-1234567abc";

    char *remainderPtr;
    long x;

    x = strtol( string, &remainderPtr, 0 );

    printf( "%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
           "Originalniot string e ", string,
           "Konvertiranata vrednost e ", x,
           "Ostatokot od originalniot string e ",
           remainderPtr,
           "Konvertiranata vrednost plus 567 e ", x + 567 );

    return 0;
}
