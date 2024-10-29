/*   Koristenje na sprintf */
#include <stdio.h>

int main()
{
    char s[ 80 ]; /* niza od karakteri */
    int x;        /* x e vrednost koja kje ja vneseme */
    double y;     /* y e vrednost koja kje ja vneseme */

    printf( "Vnesi cel i realen broj:\n" );
    scanf( "%d%lf", &x, &y );

    sprintf( s, "cel broj:%6d\nrealen broj:%8.2f", x, y );

    printf( "%s\n%s\n",
           "Formatiraniot izlez smesten vo nizata s e:", s );

    return 0; /* uspeshen kraj */
}
