/* Program p06_14.c */
/* Chitanje i otfrlanje na nepotrebni karakteri */
#include <stdio.h>

int main()
{
    int mesec1; /* definiraj mesec1 */
    int den1;   /* definiraj den1 */
    int godina1;  /* definiraj godina1 */
    int mesec2; /* definiraj mesec2 */
    int den2;   /* definiraj den2 */
    int godina2;  /* definiraj godina2 */

    printf( "Vnesi data vo oblik dd-mm-yyyy: " );
    scanf( "%d%*c%d%*c%d", &den1, &mesec1, &godina1 );

    printf( "denot = %d  mesecot = %d  godinata = %d\n\n", den1, mesec1, godina1 );

    printf( "Vnesi data vo oblik dd/mm/yyyy: " );
    scanf( "%d%*c%d%*c%d", &den2, &mesec2, &godina2 );

    printf( "denot = %d  mesecot = %d  godinata = %d\n", den2, mesec2, godina2 );

    return 0;
}
