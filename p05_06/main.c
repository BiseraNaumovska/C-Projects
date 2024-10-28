/* Program p05_06.c
   Koristenje na naredbta continue vo naredbata for */

#include <stdio.h>

int main()
{
    int x;
    for(x=0 ; x<=10;x++){
        if(x==5){
            printf("skokam ");
            continue;
        }
        printf("%d ", x);
    }
    printf("\nKoristev naredba continue za da go preskoknam pechatenjeto na vrednosta 5\n");
    return 0;
}
