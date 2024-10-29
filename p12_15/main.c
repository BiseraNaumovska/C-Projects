/*
Создади програм за обработка на кредити кој може да зачува 100
записи со иста големина. Секој запис треба да се состои од број
на сметка, кој ќе се користи и како клуч за пребарување, презиме,
име и биланс. Програмот треба да може да ажурира сметка, да внесе
нов запис, да избрише запис и да ги излиста сите записи во
форматирана текст датотека за печатење. Да се користи датотека
со случаен пристап.
*/
#include <stdio.h>

struct clientData {
    int acctNum;
    char lastName[15];
    char firstName[15];
    double balance;
};

int main()
{
    int i;
    struct clientData blankClient = { 0, "" , "" , 0.0 };

    FILE *cfPtr;

    if((cfPtr = fopen("credit.txt" , "wb")) == NULL){
        printf("Error \n");
    }else{
        //datotekata se otvara za wb = Создади датотека за бинарно читање. Ако веќе постои, пребриши ја тековната содржина.
        for(i=0;i<100;i++){
            fwrite(&blankClient, sizeof(struct clientData), 1, cfPtr);
        }
        fclose(cfPtr);
    }

    return 0;
}
