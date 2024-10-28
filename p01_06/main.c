/*
2. Напиши програм кој внесува 4 цели броја и ја испечатува
    нивната сума.
*/

#include <stdio.h>

int main()
{
    int integer1, integer2, integer3, integer4, sum;
    printf("Vnesi prv cel broj\n");
    scanf("%d", &integer1);
    printf("Vnesi vtor cel broj\n");
    scanf("%d", &integer2);
    printf("Vnesi tret cel broj\n");
    scanf("%d", &integer3);
    printf("Vnesi cetvrt cel broj\n");
    scanf("%d", &integer4);

    sum = integer1 + integer2 + integer3 + integer4;
    printf("Sumata na cetirite broja e: %d \n", sum);

    return 0;
}
