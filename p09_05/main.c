/*
5.	Да се претстави природниот број n како производ
од прости множители. (n=p1k1p2k2...prkr , каде што
p1, p2, ..., pr се прости броеви, а k1, k2, . . . , kr
се природни броеви.)

*/
#include <stdio.h>

void prostiMnoziteli(int n);

int main()
{
    int n = 24;
    printf("Prvichno razlozuvanje na %d e: \n", n);

    prostiMnoziteli(n);
    return 0;
}

void prostiMnoziteli(int n){
    int p=2;

    while(n > 1){
        int count = 0;
        while(n%p == 0){
            n = n/p;
            count++;
        }
        if(count > 0){
            printf("%d^%d ", p,count);
            if(n>1){
                printf("* ");
            }
        }
        p++;
    }

}
