/*
14.За даден природен број n да се испечатат следниве фигури со
користење на рекурзија.
n
n-1 n
n-2 n-1 n
...
1 2 3 ... n-2 n-1 n
...
n-2 n-1 n
n-1 n
n

*/
#include <stdio.h>

void printUpper(int n) {
    for (int i = n; i >= 1; i--) { // Start from n down to 1
        for (int j = i; j <= n; j++) { // Print from i to n
            printf("%d ", j);
        }
        printf("\n");
    }
}

void printLower(int n) {
    for (int i = 2; i <= n; i++) { // Start from 2 up to n
        for (int j = i; j <= n; j++) { // Print from i to n
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main()
{
    int n = 10;
    printUpper(n);
    printLower(n);

    return 0;
}
