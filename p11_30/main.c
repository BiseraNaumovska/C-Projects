/*   Koristenje na strlen */
#include <stdio.h>
#include <string.h>

int main()
{
    /* inicijaliziraj 3 pokazhuvachi kon karakterti */
    const char *string1 = "abcdefghijklmnopqrstuvwxyz";
    const char *string2 = "tri";
    const char *string3 = "Skopje";

    printf("%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n",
           "Dolzhinata na ", string1, " e ", strlen( string1 ),
           "Dolzhinata na ", string2, " e ", strlen( string2 ),
           "Dolzhinata na ", string3, " e ", strlen( string3 ) );

    return 0; /* uspeshen kraj */
}
