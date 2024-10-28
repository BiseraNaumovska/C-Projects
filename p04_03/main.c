/* Program p04_03.c
   Prosek na klas. Regulacija so kontrola na vlezot */

#include <stdio.h>

int main()
{
    int counter, grade, total;
    float average;

    total = 0;
    counter = 0;

    printf("Vnesi ocena, a -1 za kraj:");
    scanf("%d", &grade);

    while(grade != -1){
        total = total + grade;
        counter++;
        printf("Vnesi ocena, -1 za kraj: ");
        scanf("%d", &grade);
    }

    if(counter != 0 ){
        average = (float)total/counter;
        printf("Sredna vrednost na klasot e %.2f \n", average);
    }else{
        printf("Ne e vnesena nitu edna ocena za kraj \n");
    }


    return 0;
}
