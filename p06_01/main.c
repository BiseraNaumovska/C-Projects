/* Program p06_01.c */
/* Konverziski specifikatori za celi broevi so printf */

#include <stdio.h>

int main()
{
    printf( "%d\n", 455 );
    printf( "%i\n", 455 );  /* i e isto kako d vo printf */
    printf( "%d\n", +455 );
    printf( "%d\n", -455 );
    printf( "%hd\n", 32000 );
    printf( "%ld\n", 2000000000 );
    printf( "%o\n", 455 );
    printf( "%u\n", 455 );
    printf( "%u\n", -455 );
    printf( "%x\n", 455 );
    printf( "%X\n", 455 );

    return 0;
}
