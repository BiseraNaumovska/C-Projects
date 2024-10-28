/*
2. Напиши програм кој вчитува два цели броја и
одредува дали се парни или непарни.
*/

#include <stdio.h>

int main()
{
    int b1, b2;
    printf("Vnesi dva celi broja \n");
    scanf("%d%d", &b1,&b2);

    if(b1 % 2 == 0){
        printf("Brojot %d e paren \n", b1);
    }
    if(b1 % 2 != 0){
        printf("Brojot %d e neparen \n", b1);
    }
    if(b2 % 2 == 0){
        printf("Brojot %d e paren \n", b2);
    }
    if(b2 % 2 != 0){
        printf("Brojot %d e neparen \n", b2);
    }

    return 0;
}
