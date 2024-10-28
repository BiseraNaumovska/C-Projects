/*
7.Напиши програма која пресметува сума на внесени броеви од
тастатура се додека не се внесе карактер ‘n’.
*/

#include <stdio.h>

int main()
{
   /* int sum = 0, broj, vnes;
    char input[10];

    while(1){
        printf("Vnesi broj:");
        vnes = scanf("%d", &broj);
        if(vnes){
          sum = sum + broj;
        }else{
            char ch;
            scanf("%c", &ch);
            if(ch == 'n'){
                break;
            }else{
                printf("Nevaliden vnes, brobaj povtorno \n");
            }
        }
    }*/

     // spored primerot sega
    /*
        Пример:
          Vnesi broj: 6
          Ushte? (d/n): d
          Vnesi broj: 7
          Ushte? (d/n): d
          Vnesi broj: 3
          Ushte? (d/n): n
                  Sumata e 16

*/
/*   int broj, sum = 0;
   char ch;

   while(1){
        printf("Vnesi broj: ");
        if(scanf("%d", &broj) == 1){
           sum = sum + broj;
            printf("Ushte (d/n)? ");
            scanf("%c", &ch);
            if(ch == 'n'){
                break;
            }
        }
   }
*/

   int broj;
   char response = 'd';
   int suma = 0;

   while (response != 'n'){
       printf("Vnesi broj: ");
       if (scanf("%d", &broj) == 1) {
           suma = suma + broj;
       } else {
           printf("Nevaliden vnes, obidi se povtorno..\n");
           while (getchar() != '\n'); // Chistenje na vlezniot bafer
       }
       printf("Ushte? (d/n): ");
       scanf(" %c", &response);

   }
    printf("Sumata na broevite e = %d ", suma);


    return 0;
}
