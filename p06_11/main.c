/* Program p06_11.c */
/* Chitanje na broevi so podvizhna zapirka */

#include <stdio.h>

int main()
{
    double a;
    double b;
    double c;

    printf( "Vnesi 3 broevi so podvizhna zapirka: \n" );
    scanf( "%le%lf%lg", &a, &b, &c );

    printf( "Eve gi trite broevi napishani so\n" );
    printf( "obichna notacija na decimalni broevi:\n" );
    printf( "%f\n%f\n%f\n", a, b, c );

    return 0;
}
