/*
1. Напиши програм кој внесува телефонски број како стринг во облик
(333) 333-3333. Програмот треба со користење на наредбата strtok
да го извлече кодот на државата како едно делче, а потоа да го
спои целиот телефонски број во друг стринг без -. Програмот треба
да го конвертира бројот на државата во int, а седмоцифрениот
телефонски број во long. Двата бројат треба да бидат испечатени.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char phoneNumber[20];
    char areaCode[5];      // kod na drzava
    char restNumber[10];

    printf("Vnesi telefonski broj vo oblik (333) 333-3333: ");
    fgets(phoneNumber,sizeof(phoneNumber), stdin);

    char *token = strtok(phoneNumber, "() ");
    strcpy(areaCode,token);

    token = strtok(NULL, "- ");
    strcpy(restNumber, token);

    token = strtok(NULL, " ");
    strcat(restNumber, token);

    int areaCodeInt = atoi(areaCode);

    long phoneNumberLong = atol(restNumber);

    printf("Kod na drzavata: %d\n", areaCodeInt);
    printf("Sedmocifren broj: %ld\n", phoneNumberLong);


    return 0;
}
