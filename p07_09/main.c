/*1.      Напиши програма која внесува 10 цели броеви и и ги
 * доделува на функцијата paren која враќа 1 ако бројот е парен
 * и 0 ако бројот не е парен.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int paren(int broj);

int main()
{
    int broj;
    srand(time(NULL));
    for(int i=0;i<10;i++){
        broj = 1 + (rand()%100);
        if(paren(broj) == 1){
            printf("Brojot %d e paren \n", broj);
        }else{
            printf("Brojot %d e neparen \n", broj);
        }
    }
    return 0;
}

int paren (int broj){
    if( broj%2 == 0){
        return 1;
    }else{
        return 0;
    }
}
