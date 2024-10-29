/*   Chitanje od datoteka so sluchaen pristap */
#include <stdio.h>

/* definicija na strukturata clientData */
struct clientData {
    int acctNum;          /* broj na smetka */
    char lastName[ 15 ];  /* prezime */
    char firstName[ 10 ]; /* ime */
    double balance;       /* bilans */
}; /* kraj na strukturata clientData */



int main()
{
    FILE *cfPtr;
    struct clientData client = {0,"","",0};

    if((cfPtr = fopen("credit.txt" , "rb")) == NULL){
        //Отвори датотека за бинарно читање
        printf("ERROR \n");
    }else{
        printf("%-8s%-16s%-11s%10s\n", "Smetka", "Prezime", "Ime", "Bilans");
        //chitaj od datotekata do endof
        while(!feof(cfPtr)){
            fread(&client, sizeof(struct clientData) , 1,cfPtr);
            //pechati zapis
            if(client.acctNum != 0){
                printf("%-8d%-16s%-11s%10.2f\n", client.acctNum, client.lastName,client.firstName, client.balance);
            }
        }
        fclose(cfPtr);
    }

    return 0;
}
