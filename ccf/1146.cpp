/**
 * 紫书：第三章数组于字符串-E:Digit Generator
 * 运用查表法
 */


#include <cstdio>
#include <cstring>

#define MAX 100000
int ans[MAX + 1];

void makeTable(int max) {
    memset(ans, 0, sizeof(ans));
    int digitsum, n;
    for (int i = 1; i < max; i++) {
        digitsum = n = i;
        while (n > 0) {
            digitsum += n % 10;
            n /= 10;
        }
        if (digitsum <= max) {
            if (ans[digitsum] == 0) {
                ans[digitsum] = i;
            }
        }
    }
}

int main() {
    int n, i;
    makeTable(MAX);
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &i);
        printf("%d\n", ans[i]);
    }
    return 0;
}
