/* Program p05_05.c
   Koristenje na naredbata break vo naredbata for */

#include <stdio.h>

int main()
{
    int x;
    for(x = 1 ; x <= 10 ; x++ ){
        if(x == 5){
            break;
        }
        printf("%d ", x);
    }


    printf("\nGo prekinav ciklusot za %d \n", x);
    return 0;
}
