/*KOristenje na memcmp */
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "ABCDEFG"; /* inicijaliziraj niza od karakteri s1 */
    char s2[] = "ABCDXYZ"; /* inicijaliziraj niza od karakteri s2 */

    printf( "%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n",
           "s1 = ", s1, "s2 = ", s2,
           "memcmp( s1, s2, 4 ) = ", memcmp( s1, s2, 4 ),
           "memcmp( s1, s2, 7 ) = ", memcmp( s1, s2, 7 ),
           "memcmp( s2, s1, 7 ) = ", memcmp( s2, s1, 7 ) );

    return 0; /* uspeshen kraj */
}
