/* program p08_10.c
   Imeto na nizata array e isto kako i &array[ 0 ] */

#include <stdio.h>

int main()
{
    char array[ 5 ]; /* definiraj niza so golemina 5 */

    printf( "    array = %p\n&array[0] = %p\n"
           "   &array = %p\n",
           array, &array[ 0 ], &array );

    return 0;
}
