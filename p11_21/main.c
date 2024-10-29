/*   Koristenje na strspn */
#include <stdio.h>
#include <string.h>

int main()
{
    /* inicijaliziraj dva pokazhuvachi kon karakter */
    const char *string1 = "Vrednosta e 3.14159";
    const char *string2 = "aeds roVnt";

    printf( "%s%s\n%s%s\n\n%s\n%s%u\n",
           "string1 = ", string1, "string2 = ", string2,
           "Dolzhinata na inicijalniot segment na string1",
           "koj sodrzhi samo karakteri od string2 = ",
           strspn( string1, string2 ) );

    return 0; /* uspeshen kraj */
}
