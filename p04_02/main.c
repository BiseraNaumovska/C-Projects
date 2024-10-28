/* Program p04_02.c
   Program koj presmetuva prosek na klas
   so povtoruvanje kontrolirano od brojach */

#include <stdio.h>

int main()
{
    int counter, grade, total, average;
    total = 0;
    counter = 1;
    while(counter<=10){
        printf("Vnesi ocena: ");
        scanf("%d", &grade);
        printf("\n");
        total +=grade;
        counter++;
    }
    average = total / 10;
    printf("Sredna vrednost na klasot e: %d \n", average);



    return 0;
}
