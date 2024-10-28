/*
10.	Да се најдат сите растечки поднизи во низата броеви [ai]n.
(Растечка подниза е онаа во која секој елемент е поголем од
претходниот.)

*/

#include <stdio.h>

int main()
{
    int n = 10;
    int niza[10] = {9, 5, 0, 1, 2 , 3, 4, 1, 2, 5};


    for (int i = 0; i < n; i++) {

        printf("%d", niza[i]);

        for (int j = i + 1; j < n; j++) {
            if (niza[j] > niza[j - 1]) {
                printf(" %d", niza[j]);
            } else {
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
