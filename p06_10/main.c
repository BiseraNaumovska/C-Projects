/* Program p06_10.c */
/* Chitanje celi broevi */

#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;

    printf( "Vnesi sedum celi broevi: " );
    scanf( "%d%i%i%i%o%u%x", &a, &b, &c, &d, &e, &f, &g );

    printf( "Vnesenite broevi ispechateni kako celi broevi se:\n" );
    printf( "%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g );

    return 0;
}
