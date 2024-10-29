/*   Koristenje na strcat i strncat */
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[ 30 ] = "Srekjen "; /* inicijaliziraj niza od karakteri s1 */
    char s2[] = "Rodenden Marko ";  /* inicijaliziraj niza od karakteri s2 */
    char s3[ 60 ] = "";       /* inicijaliziraj niza od karakteri s3 da e prazna */

    printf( "s1 = %s\ns2 = %s\n", s1, s2 );
    /* dodadi s2 na s1 */
    printf( "strcat( s1, s2 ) = %s\n", strcat( s1, s2 ) );

    /* dodadi gi prvite 8 karakteri od s1 na s3. Dodava '\0'
      posle posledniot karakter */
    printf( "strncat( s3, s1, 8 ) = %s\n", strncat( s3, s1, 8 ) );

    /* dodadi s1 na s3 */
    printf( "strcat( s3, s1 ) = %s\n", strcat( s3, s1 ) );
    return 0; /* uspeshen kraj */
}
