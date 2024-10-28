/* Program p08_09.c
   Static nizite se inicijaliziraat na nula
Следниот пример илустрира користење на статични и автоматски локални низи.
*/

#include <stdio.h>
void staticArrayInit( void );    /* funkciski prototip */
void automaticArrayInit( void ); /* funkcisski prototip */

int main()
{
    printf( "Prv povik do sekoja od funkciite:\n" );
    staticArrayInit();
    automaticArrayInit();

    printf( "\n\nVtor povik do sekoja od funkciite:\n" );
    staticArrayInit();
    automaticArrayInit();

    return 0; /* uspeshen kraj */
} /* kraj main */

/* funkcija koja demonstrita static lokalna niza */
void staticArrayInit( void )
{
    /* inicijalizira elementi na 0 prviot pat koga se povikuva funkcijata */
    static int array1[ 3 ];
    int i; /* brojach */

    printf( "\nVrednosti pri vleguvanje vo staticArrayInit:\n" );

    /* ispechati sodrzhina na array1 */
    for ( i = 0; i <= 2; i++ ) {
        printf( "array1[ %d ] = %d  ", i, array1[ i ] );
    } /* kraj for */

    printf( "\nVrednosti na izleguvanje of staticArrayInit:\n" );

    /* modificiraj ja i ispechati ja sodrzhinata na array1 */
    for ( i = 0; i <= 2; i++ ) {
        printf( "array1[ %d ] = %d  ", i, array1[ i ] += 5 );
    } /* kraj for */

} /* kraj na funkcijata staticArrayInit */

/* funkcija koja demonstrira avtomatska lokalna niza */
void automaticArrayInit( void )
{
    /* inicijalizira elementi sekojpat koga se povikuva funkcijata */
    int array2[ 3 ] = { 1, 2, 3 };
    int i; /* brojach */

    printf( "\n\nVrednosti pri vleguvanje vo automaticArrayInit:\n" );

    /* ispechati sodrzhina na array2 */
    for ( i = 0; i <= 2; i++ ) {
        printf("array2[ %d ] = %d  ", i, array2[ i ] );
    } /* kraj for */

    printf( "\nVrednosti pri izleguvanje od automaticArrayInit:\n" );

    /* modificiraj ja i ispechati ja sodrzhinata na array2 */
    for ( i = 0; i <= 2; i++ ) {
        printf( "array2[ %d ] = %d  ", i, array2[ i ] += 5 );
    } /* kraj for */

} /* kraj na funkcijata automaticArrayInit */

