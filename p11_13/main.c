/*   Koristenje na sscanf */
#include <stdio.h>

int main()
{
    char s[] = "31298 87.375"; /* inicijaliziraj niza s */
    int x;    /* x e vrednost koja kje ja vneseme */
    double y; /* y e vrednost koja kje ja vneseme */

    sscanf( s, "%d%lf", &x, &y );

    printf( "%s\n%s%6d\n%s%8.3f\n",
           "Vrednostite smesteni vo nizata od karakteri s se:",
           "cel broj:", x, "realen broj:", y );

    return 0;
}
