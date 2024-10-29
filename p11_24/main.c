/*   Koristenje na memcpy */
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[ 20 ];                   /* kreiraj char niza s1 */
    char s2[]  = "Kopiraj go stringot"; /* inicijaliziraj char niza s2 */

    memcpy( s1, s2, 20 );
    printf( "%s\n%s\"%s\"\n",
           "Otkako s2 e kopiran vo s1 so memcpy,",
           "s1 sodrzhi ", s1 );

    return 0; /* uspeshen kraj */
}
