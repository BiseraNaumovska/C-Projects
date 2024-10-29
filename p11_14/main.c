/*   KOristenje na strcpy i strncpy */
#include <stdio.h>
#include <string.h>

int main()
{
    char x[] = "Srekjen Rodenden Marko"; /* inicijaliziraj niza od karakteri x */
    char y[ 25 ]; /* kreiraj niza od karakteri y */
    char z[ 15 ]; /* kreiraj niza od karakteri z */

    /* kopiraj ja sodrzhinata od x vo y */
    printf( "%s%s\n%s%s\n",
           "Stringot vo nizata x e: ", x,
           "Stringot vo nizata y e: ", strcpy( y, x ) );

    /* kopiraj gi prvite 14 karakteri od x vo z. Ne go kopira null
      karakterot */
    strncpy( z, x, 14 );
    z[ 14 ] = '\0'; /* zavrshi go stringot vo z */
    printf( "Stringot vo nizata z e: %s\n", z );

    return 0; /* uspeshen kraj */
}
