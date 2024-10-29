/*   Koristenje na strrchr */
#include <stdio.h>
#include <string.h>

int main()
{
    /* iniciajliziraj pokazhuvach kon karakter */
    const char *string1 = "Vo zooloshka ima mnogu zhivotni megju koi i zebri";

    int c = 'z'; /* karakter koj go barame */

    printf( "%s\n%s'%c'%s\"%s\"\n",
           "Ostatokot od string1 koj pochnuva so",
           "poslednoto pojavuvanje na karakterot ", c,
           " e: ", strrchr( string1, c ) );

    return 0; /* uspeshen kraj */
}
