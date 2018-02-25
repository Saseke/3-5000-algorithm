//逆序输出,读入一些整数，逆序输出到一行
#include <stdio.h>

int main() {
    int i, x, n = 0, a[100];
    while (scanf("%d", &x) == 1) {
        a[n++] = x;
    }
    for (i = n - 1; i >= 1; i--) {
        printf("%d ", a[i]);
    }
    printf("%d\n", a[0]);
    return 0;
}