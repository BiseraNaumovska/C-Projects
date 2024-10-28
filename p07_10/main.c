/*2.      Напиши програма која на функцијата vreme и доделува
 * три целобројни аргументи, час, минута и секунда и како резултат
 * го враќа бројот на секунди до 12 часот. Имено, ако е 11 часот 59
 * минути и 58 секунди, тогаш има уште 2 секунди до 12 часот.*/
#include <stdio.h>

void vreme(int c, int m, int s);

int main()
{
    int chas, minuta, sekunda;
    printf("Vnesi chas minuta i sekundi vo format cc-mm-ss \n");
    scanf("%d%*c%d%*c%d", &chas, &minuta, &sekunda);

    if(chas>=12){
        printf("Vnesenoto vreme e po 12 chasot \n");
    }else{
       vreme(chas, minuta, sekunda);
    }



    return 0;
}

void vreme(int c, int m, int s){
    // Presmetka kolku sekundi ima vo tekovniot chas
    int vkupnoSekundiDoSegasniotCas = c * 3600 + m * 60 + s;

    // Kolku sekundi ima do 12 chasot
    int vkupnoSekundiDo12Casot = 12 * 3600;
    printf("Ima ushte %d sekundi do 12 chasot\n", vkupnoSekundiDo12Casot - vkupnoSekundiDoSegasniotCas );
}
