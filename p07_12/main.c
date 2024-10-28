/*4.Напиши програма во која дефинираш функција nzd за
 * пресметување на најголемиот заеднички делител на два броја.*/
#include <stdio.h>

void nzd (int b1, int b2);

int main()
{
    int broj1,broj2;
    printf("Vnesi dva broja za koi ke presmetash NZD vo forma bb,bb!\n");
    scanf("%d%*c%d", &broj1, &broj2);
    nzd(broj1,broj2);
    return 0;
}

void nzd(int b1, int b2){
    while(b2 != 0){
        int temp = b2;
        b2 = b1 % b2;
        b1 = temp;
    }
    printf("NZD = %d \n", b1);
}
