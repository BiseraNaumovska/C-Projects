/*
6.Напиши рекурзивна верзија на функцијата за пресметување
    најголем заеднички делител.
*/
#include <stdio.h>

int nzd (int b1, int b2);

int main()
{
    int broj1,broj2;
    printf("Vnesi dva broja za koi ke presmetash NZD vo forma bb,bb!\n");
    //scanf("%d%*c%d", &broj1, &broj2);
    //int NZD = nzd(broj1,broj2);
    int NZD = nzd(15,50);
    printf("NZD = %d\n", NZD);
    return 0;
}

int nzd(int b1, int b2){
    if (b2 == 0){
        return b1;
    }
    return nzd(b2, b1%b2);
}
