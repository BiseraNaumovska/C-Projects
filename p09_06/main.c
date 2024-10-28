/*
 *
6.	Да се најдат природните броеви помали од n, чиј збир
на кубовите на цифри-те е еднаков на самиот број.

*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n = 1000;

    // ne moze da barame kubovi na ednocifreni, zatoa pochnuvame od dvocifreni
    for(int i=10;i<n;i++){
        int broj = i;
        int suma = 0;
        while(broj != 0){
            suma = suma + pow(broj%10, 3);
            broj = broj/10;
        }
        if(suma == i){
            printf("%d zadovoluva uslov \n", i);
        }
    }

    return 0;
}
