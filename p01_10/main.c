/*
6. Напиши програм кој внесува петцифрен број, ги распределува
сите цифри на бројот во посебни променливи и ги печати секоја
од цифрите со растојание една од дуга од три празни места.

Прмер. Нека корисникот внел 42139.
Програмот треба даиспечати:
4   2   1   3   9

*/

#include <stdio.h>

int main()
{
    int promenliva;
    int int1, int2, int3, int4, int5;

    printf("Vnesi petcifren broj \n");
    scanf("%d", &promenliva);
    int1 = promenliva % 10;
    int2 = (promenliva/10)%10;
    int3 = (promenliva/100)%10;
    int4 = (promenliva/1000)%10;
    int5 = (promenliva/10000)%10;

    printf("%d\t%d\t%d\t%d\t%d\n", int5, int4, int3, int2, int1);

    return 0;
}
