/*3.      Да се напише програма која ќе пресметува Питагорини
 * броеви до 100. Тоа се броеви кои го исполнуваат следниот
 * услов a2+b2=c2.*/
#include <stdio.h>
#include <math.h>

int main()
{
    for(int a=1 ; a<=100 ; a++){
        for(int b=a ; b<=100 ; b++){
            for(int c=b ; c<=100 ; c++){
                //if(a*a + b*b == c*c);
                if(pow(a,2)+pow(b,2)==pow(c,2)){
                    printf("%d^2 + %d^2 = %d^2\n", a,b,c);
                }
            }
        }
    }

    return 0;
}
