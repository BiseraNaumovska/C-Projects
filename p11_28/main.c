/*   KOristenje na memset */
#include <stdio.h>
#include <string.h>

int main()
{
    char string1[ 15 ] = "BBBBBBBBBBBBBB"; /* inicijaliziraj string1 */

    printf( "string1 = %s\n", string1 );
    printf( "string1 posle memset = %s\n", memset( string1, 'b', 7 ) );

    return 0; /* uspeshen kraj */
}
