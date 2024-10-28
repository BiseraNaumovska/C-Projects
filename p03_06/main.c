/*
1. Напиши програм кој како влез зема два цели броја и ги
споредува. Потоа го испечатува поголемиот број проследен
со коментарот e pogolem od и го испечатува и помалиот број.
Ако броевите се еднакви, програмот треба да испечати
Broevite se ednakvi.
*/

#include <stdio.h>

int main()
{
    int int1, int2;

    printf("Vnesi prv cel broj \n");
    scanf("%d", &int1);

    printf("Vnesi vtor cel broj \n");
    scanf("%d", &int2);

    if(int1 > int2){
        printf("%d e pogolem od %d\n", int1, int2);
    }

    if(int2 > int1){
        printf("%d e pogolem od %d\n", int2, int1);
    }

    if(int1 == int2){
        printf("Broevite se ednakvi\n");
    }


    return 0;
}
