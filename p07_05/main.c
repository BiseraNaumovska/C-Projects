/* Programp07_05.c
   Igrata Craps

Играчот фрла две коцки. Победува од прва ако збирот
на коцките е 7 или 11. Ако сумата е 2, 3 или 12 губи од прва. Ако
збирот е било кој друг број: 4, 5, 6, 8, 9 или 10, тогаш таа сума
постанува точка која играчот треба да ја постигне. Значи тој треба
да фрли збир колку што му е точката. Меѓутоа, ако пред да ја
достигне точката фрли збир 7, играчот губи.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};
int rollDice(void);


int main()
{
    int sum;
    int myPoint;

    enum Status gameStatus;
    srand(time(NULL));

    sum = rollDice(); // prvo svrtuvanje na kockata

    switch(sum){
    case 7:
    case 11:
        gameStatus = WON;
        break;
    // izgubil na prvo vrtenje ako dobie 2 3 ili 12
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
    default:
        gameStatus = CONTINUE;
        myPoint = sum;
        printf("Poenite se %d\n", myPoint);
        break;
    }

    //dodeka ne dojde kraj na igrata
    while(gameStatus == CONTINUE){
        sum = rollDice();
        if(sum == myPoint){
            gameStatus = WON;
        }else{
            if(sum == 7){
                gameStatus = LOST;
            }
        }
    }

    //pechatenje poraka
    if(gameStatus == WON){
        printf("POBEDA! \n");
    }else{
        printf("GUBITNIK! \n");
    }


    return 0;
}


// funkcijata za da se svrtat kocki, da se presmeta suma i da se prikaze rezultat

int rollDice(void){
    int die1, die2, workSum;

    die1 = 1+(rand()%6);
    die2 = 1+(rand()%6);
    workSum = die1 + die2;

    printf("Igrachot svrti %d + %d = %d\n", die1, die2, workSum);
    return workSum;
}
