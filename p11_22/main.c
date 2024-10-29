/*Koristenje na strstr */
#include <stdio.h>
#include <string.h>

int main()
{
    const char *string1 = "abcdefabcdef"; /* string vo koj barame */
    const char *string2 = "def"; /* string koj go barame */

    printf( "%s%s\n%s%s\n\n%s\n%s%s\n",
           "string1 = ", string1, "string2 = ", string2,
           "Ostatokot od string1 koj pochnuva so",
           "prvoto pojavuvanje na string2 e: ",
           strstr( string1, string2 ) );

    return 0; /* uspeshen kraj */
}
