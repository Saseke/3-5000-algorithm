#include<stdio.h>

// n个阶乘的和
int main() {
    int i, j, n, s = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int factorial = 0;
        for (j = 1; j < i + 1; j++) {
            factorial *= j;
        }
        s += factorial;
    }
    printf("%d\n", s);
}