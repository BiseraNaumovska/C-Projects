/*   Koristenje na memmove */
#include <stdio.h>
#include <string.h>

int main()
{
    char x[] = "Dome Slatki Dome"; /* inicijaliziraj char niza x */

    printf( "%s%s\n", "Stringot vo nizata x pred memmove e: ", x );
    printf( "%s%s\n", "Stringot vo nizata x po memmove e: ",
           memmove( x, &x[ 5 ], 11 ) );

    return 0; /* uspeshen kraj */
}
