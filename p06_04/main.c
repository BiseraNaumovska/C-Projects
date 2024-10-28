/* Program p06_04.c */
/* koristenje preciznost pri pechatenje na celi broevi,
   decimalni broevi i stringovi */

#include <stdio.h>

int main()
{
    int i = 873;
    double f=123.94536;


    printf("Koristenje preciznost na celi broevi\n");
    printf( "\t%.4d\n\t%.9d\n\n", i, i );

    printf( "Koristenje preciznost kaj decimalni broevi\n" );
    printf( "\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f );

    printf( "Koristenje preciznost kaj stringovi\n" );
    printf( "\t%.11s\n\n", "Srekjen rodenden" );


    return 0;
}
