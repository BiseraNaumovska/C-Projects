/*   Obid da se promenat konstantni podatoci
   preku nekonstanten pokazhuvach. */
#include <stdio.h>

void f( const int *xPtr ); /* prototip */

int main()
{
    int y;       /* definiraj y */

    f( &y );     /* f saka da napravi nelegalna promena */

    return 0;    /* uspeshen kraj */
} /* kraj main */

/* xPtr ne mozhe da se koristi za da ja promeni
   vrednosta na promenlivata na koja pokazhuva */
void f( const int *xPtr )
{
    *xPtr = 100;  /* grashka: ne mozhesh da promenish const objekt */
} /* kraj na funkcijata f */


