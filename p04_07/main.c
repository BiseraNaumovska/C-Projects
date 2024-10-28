/*
5.Напиши програма која за внесени десет броја,
го пресметува нивниот производ.
*/

#include <stdio.h>

int main()
{
    int broj, proizvod = 1;
    int count = 0;

    while(count < 10){
        printf("Vnesi broj!\n");
        scanf("%d", &broj);
        proizvod = proizvod * broj;
        count++;
    }
    printf("Proizvod = %d \n", proizvod);

    return 0;
}
