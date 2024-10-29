/*   KOristenje na memchr */
#include <stdio.h>
#include <string.h>

int main()
{
    const char *s = "Ova e string"; /* inicijaliziraj pokazhuvach kon karakter */

    printf( "%s\'%c\'%s\"%s\"\n",
           "Ostatokot od s po naogjanjeto na karakterot ", 'r',
           " e ", memchr( s, 'r', 16 ) );

    return 0; /* uspeshen kraj */
}
