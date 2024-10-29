/* Program p11_08.c
   KOristenje na tip enumeracija */
#include <stdio.h>

/* enumeraciski konstanti koi gi prezentiraat mesecite vo godinata */
enum meseci {
    JAN = 1, FEV, MAR, APR, MAJ, JUN, JUL, AVG, SEP, OKT, NOE, DEK };

int main()
{
    enum meseci mesec; /* moze da sordzi nekoj od 12 meseci */

    /* inicijaliziraj niza od pokazhuvachi */
    const char *imeMesec[] = { "", "Januari", "Fevruari", "Mart",
                              "April", "Maj", "Juni", "Juli", "Avgust", "Septemvri", "Oktomvri",
                              "Noemvri", "Dekemvri" };

    /* pomini niz meseci */
    for ( mesec = JAN; mesec <= DEK; mesec++ ) {
        printf( "%2d%11s\n", mesec, imeMesec[ mesec ] );
    } /* kraj for */

    return 0; /* uspeshen kraj */
}
