/**
3. Напиши програм кој ги печати броевите од 1 до 4 на иста линија, при тоа можеш да користиш:
    а) една prinf наредба, без спецификатори за конверзија
    б) една prinf наредба, со 4 спецификатори за конверзија
    в) 4 printf наредби.
 */

#include <stdio.h>

int main()
{
    // a)
    printf("1\t2\t3\t4\n");

    // b)
    int a,b,c,d;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    printf("%d\t%d\t%d\t%d\n", a,b,c,d);

    // v)
    printf("1\t");
    printf("2\t");
    printf("3\t");
    printf("4\n");
    return 0;
}
