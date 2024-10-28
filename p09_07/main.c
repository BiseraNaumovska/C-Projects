/*
7.	Да се најдат природните броеви во интервалот [n1,n2],
кои се деливи со својот спротивен број( 123 -> 321).
*/
#include <stdio.h>

int sprotivenBroj(int n);

int main()
{
    int n1 = 5, n2 = 100;

    for(int i=n1;i<=n2;i++){
        int sprotiven = sprotivenBroj(i);
        if(i % sprotiven == 0){
            printf("Brojot %d e delliv so svojot sprotiven broj %d\n", i, sprotiven);
        }
    }

    return 0;
}

int sprotivenBroj(int n){
    int obraten = 0;
    int broj;
    while(n != 0){
        broj = n % 10;
        obraten = obraten * 10 + broj;
        n = n/10;
    }
    return obraten;

}
