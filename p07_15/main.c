/*7. Напиши рекурзивна верзија на програма која за внесено n
 * повикува функција dzvezdi со параметар n која во зависност
 * од n испечатува ѕвезди на следниот начин:
 *
    Vnesi broj na dzvezdi (n): 5
    Se dobiva:
    * * * * *
    * * * *
    * * *
    * *
    *
*/
#include <stdio.h>

void dzvezdi(int n);

int main()
{
    //int n;
    //printf("Vnesi broj na dzvezdi\n");
   // scanf("%d", &n);
    dzvezdi(5);
    return 0;
}

void dzvezdi(int n){
    if(n==0){
        return;
    }
    for(int i=0;i<n;i++){
        printf("* ");
    }
    printf("\n");
    dzvezdi(n-1);
}
