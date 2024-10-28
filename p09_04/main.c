/*
4.	Да се најдат совршените броеви помали од природниот број n.

Совршен број е природен број кој е еднаков на збирот на
сите негови делители (освен на самиот себе). На пример,
бројот 6 е совршен број затоа што неговите делители
(1, 2, и 3) збирно даваат 6.

*/

#include <stdio.h>

void sovrsheni(int n);

int main()
{
    int n;
    //printf("Vnesi vrednost za n!\n");
    n = 50;

    printf("Sovrsheni broevi pomali od %d se: \n", n);
    sovrsheni(n);

    return 0;
}

void sovrsheni(int n){
    for(int i=2;i<n;i++){
        int suma = 0;
        for(int j=1;j<i;j++){
            if(i%j == 0){
                suma = suma + j;
            }
        }
        if (suma == i){
            printf("%d e sovrshen \n", i);
        }
    }
}
