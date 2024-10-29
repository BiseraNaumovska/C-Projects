/*Koristenje na strtod */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *string = "51.2% e rezultatot";
    double d;
    char *stringPtr;

    d = strtod( string, &stringPtr );

    printf( "Stringot \"%s\" konvertiran vo\n", string );
    printf( "double vrednost e %.2f i string \"%s\"\n", d, stringPtr );

    return 0; /* uspeshen kraj */
}
