/*
6. Напиши програма која пресметува сума на внесени
броеви од тастатура се додека не се внесе -1.
*/

#include <stdio.h>

int main()
{
    int sum = 0, broj;

    printf("Vnesi broj:");
    scanf("%d", &broj);

    while(broj != -1){
        sum = sum + broj;
        printf("Vnesi broj:");
        scanf("%d", &broj);
    }

    if(sum == 0){
        printf("Nema vneseno broevi za sobiranje \n");
    }else{
        printf("Sumata na broevite e = %d ", sum);
    }


    return 0;
}
