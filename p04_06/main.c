/*
4.Напиши програма која ја пресметува сумата на броевите од 1 до десет.
*/

#include <stdio.h>

int main()
{
    int sum, counter;
    sum =0;
    counter = 10;

    while(counter > 0){
        sum = sum + counter;
        counter--;
    }
    printf("Sumata na broevite od 1 do 10 e = %d \n", sum);

    return 0;
}
