/*
11.	??Да се најдат сите пилести поднизи во низата броеви [ai]n.
(Пилеста подни¬за е онаа во која претходниот и следниот елемент
на секој елемент се помали (поголеми) од него.)

*/
#include <stdio.h>

int main()
{
    int n = 10;
    int niza[10] = {9, 5, 0, 1, 2 , 3, 4, 1, 2, 5};


    for (int i = 1; i < n - 1; i++) {
        int start = i - 1;
        int end = i + 1;

        while (start >= 0 && end < n &&
               ((niza[start] < niza[start + 1] && niza[start + 1] > niza[end]) ||
                (niza[start] > niza[start + 1] && niza[start + 1] < niza[end]))) {

            printf("Podniza: ");
            for (int k = start; k <= end; k++) {
                printf("%d ", niza[k]);
            }
            printf("\n");

            start--;
            end++;
        }
    }
    return 0;
}
