/*
4.Напиши програма која за внесен цел број кој може
да е најмногу  четири цифрен го испечатува неговиот
еквивалент во римски броеви.
*/
#include <stdio.h>

int main()
{
    int broj;
    int rimski;

    printf("Vnesi broj maksimum 9999 \n");
    scanf("%d", &broj);

    if(broj>=1 && broj <= 9999){
        printf("Rimski broj: ");

        if(broj >= 1000){
            int thousands = broj / 1000;
            for(int i=0 ; i<thousands ; i++){
                printf("M");
            }
            broj = broj%1000;
        }

        if(broj >= 100){
            int hundreds = broj / 100;
            switch (hundreds) {
            case 1:
                printf("C");
                break;
            case 2:
                printf("CC");
                break;
            case 3:
                printf("CCC");
                break;
            case 4:
                printf("CD");
                break;
            case 5:
                printf("D");
                break;
            case 6:
                printf("DC");
                break;
            case 7:
                printf("DCC");
                break;
            case 8:
                printf("DCCC");
                break;
            case 9:
                printf("CM");
                break;
            }
            broj = broj % 100;
        }

        if(broj >= 10){
            int tens = broj / 10;
            switch (tens) {
            case 1:
                printf("X");
                break;
            case 2:
                printf("XX");
                break;
            case 3:
                printf("XXX");
                break;
            case 4:
                printf("XL");
                break;
            case 5:
                printf("L");
                break;
            case 6:
                printf("LX");
                break;
            case 7:
                printf("LXX");
                break;
            case 8:
                printf("LXXX");
                break;
            case 9:
                printf("XC");
                break;
            }
            broj = broj % 10;
        }

        if(broj > 0){
            switch (broj) {
            case 1:
                printf("I");
                break;
            case 2:
                printf("II");
                break;
            case 3:
                printf("III");
                break;
            case 4:
                printf("IV");
                break;
            case 5:
                printf("V");
                break;
            case 6:
                printf("VI");
                break;
            case 7:
                printf("VII");
                break;
            case 8:
                printf("VIII");
                break;
            case 9:
                printf("IX");
                break;
            }
        }
    }else{
        printf("Pogreshen broj \n");
    }




    return 0;
}
