/*
8. Напиши 4 начини за да ја зголемиш вредноста на
променливата x за 1.
*/

#include <stdio.h>

int main()
{
    int c;
    c = 5;

    c = c+1;
    printf("%d\n", c);

    c = 5;
    c++;
    printf("%d\n", c);

    c = 5;
    c+=1;
    printf("%d\n", c);

    c = 5;
    ++c;
    printf("%d\n", c);

    return 0;
}
