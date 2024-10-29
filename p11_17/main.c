/*   Koristenje na strchr */
#include <stdio.h>
#include <string.h>

int main()
{
    const char *string = "Ova e test"; /* inicijaliziraj pokazhuvach kon karakter */
    char character1 = 'a'; /* inicijaliziraj character1 */
    char character2 = 'z'; /* inicijaliziraj character2 */

    /* ako character1 e pronajden vo stringot */
    if ( strchr( string, character1 ) != NULL ) {
        printf( "\'%c\' e pronajden vo \"%s\".\n",
               character1, string );
    } /* kraj if */
    else { /* ako character1 ne e pronajden */
        printf( "\'%c\' ne e pronajden vo \"%s\".\n",
               character1, string );
    } /* kraj else */

    /* ako character2 e pronajden vo stringot */
    if ( strchr( string, character2 ) != NULL ) {
        printf( "\'%c\' e pronajden vo \"%s\".\n",
               character2, string );
    } /* kraj if */
    else { /* ako character2 ne e pronajden */
        printf( "\'%c\' ne e pronajden vo \"%s\".\n",
               character2, string );
    } /* kraj else */

    return 0; /* uspeshen kraj */
}
