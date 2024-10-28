/*
   Program 2.1: p02_01.c
   Koristenje na if naredbi, relacioni
   i operatori za ednakvost
*/

#include <stdio.h>

int main()
{
    int num1;
    int num2;

    printf("Vnesi dva celi broja \n");
    scanf("%d%d", &num1, &num2);

    if(num1 == num2){
        printf("%d = %d\n", num1, num2);
    }

    if(num1 != num2){
        printf("%d != %d\n", num1, num2);
    }

    if(num1 > num2){
        printf("%d > %d\n", num1, num2);
    }

    if(num1 < num2){
        printf("%d < %d\n", num1, num2);
    }

    if(num1 >= num2){
        printf("%d >= %d\n", num1, num2);
    }

    if(num1 <= num2){
        printf("%d <= %d\n", num1, num2);
    }


    return 0;
}


/*
auto        double      int         struct
break       else        long        switch
case        enum        register	typedef
char        extern      return      union
const       float       short       unsigned
continue	for         signed      void
default     goto        sizeof      volatile
do          if          static      while
*/



