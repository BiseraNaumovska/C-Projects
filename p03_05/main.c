/* Program: p03_05.c
   Preinkrement i postinkrement */

#include <stdio.h>

int main()
{
    int c;
    c = 5;
    printf("%d\n", c);
    printf("%d\n", c++);
    printf("%d\n\n", c);

    c = 5;
    printf("%d\n", c);
    printf("%d\n", ++c);
    printf("%d\n\n", c);


    return 0;
}
