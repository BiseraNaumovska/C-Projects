/*Koristenje na strpbrk */
#include <stdio.h>
#include <string.h>

int main()
{
    const char *string1 = "Ova e test"; /* inicijaliziraj pokazhuvach kon karakter */
    const char *string2 = "zdravo";         /* inicijaliziraj pokazhuvach kon karakter */

    printf( "%s\"%s\"\n'%c'%s\n\"%s\"\n",
           "Od karakterite koi se vo ", string2,
           *strpbrk( string1, string2 ),
           " se pojavuva najrano vo ", string1 );

    return 0; /* uspeshen kraj */
}
