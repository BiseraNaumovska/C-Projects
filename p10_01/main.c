/*   Koristenje na  & i * operatorite */
#include <stdio.h>

int main()
{
    int a;        /* a e cel broj */
    int *aPtr;    /* aPtr e pokazhuvach kon cel broj */

    a = 7;
    aPtr = &a;    /* aPtr pokazhuva na adresata na a */

    printf( "Adresata na a e %p"
           "\nVrednosta na aPtr e %p", &a, aPtr );

    printf( "\n\nVrednosta na a e %d"
           "\nVrednosta na *aPtr e %d", a, *aPtr );

    printf( "\n\nPokazhuvame deka * i & se komplementarni "
           "eden na drug\n&*aPtr = %p"
           "\n*&aPtr = %p\n", &*aPtr, *&aPtr );

    return 0;
}
