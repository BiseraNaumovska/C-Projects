/* Program p05_02.c
   Sumiranje so for */

#include <stdio.h>

int main()
{
  /*  int sum = 0;
    int number;
    for(number = 2; number <= 100 ; number+=2){
        sum = sum + number;
    }*/

    int sum = 0;
    for ( int number = 2; number <= 100; sum+=number, number += 2 );


    printf("Suma = %d \n", sum);
    return 0;
}
