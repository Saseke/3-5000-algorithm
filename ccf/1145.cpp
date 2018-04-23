/**
 * 紫书（一)第三章数组和字符串
 * Master-Mind Hints
 */
#include <stdio.h>
#include <cstring>

#define N 10
#define MAXN 1000
int secret[MAXN], guess[MAXN], digit_count_s[N], digit_count_i[N];

int compare(int a, int b) {
    return a > b ? b : a;
}

int main() {
    int n, gameOff = 1;
    while (scanf("%d", &n) != EOF && n != 0) {
        printf("Game %d:\n", gameOff++);
        memset(digit_count_s, 0, sizeof(digit_count_s));
        for (int i = 0; i < n; i++) {
            scanf("%d", &secret[i]);
            digit_count_s[secret[i]]++;
        }

        for (;;) {
            int sum = 0, strong = 0, weak = 0;
            memset(digit_count_i, 0, sizeof(digit_count_i));
            for (int j = 0; j < n; j++) {
                scanf("%d", &guess[j]);
                sum += guess[j];
                digit_count_i[guess[j]]++;
                if (secret[j] == guess[j]) {
                    strong++;
                }
            }
            if (sum == 0) {
                break;
            }
            for (int j = 1; j < N; j++) {
                weak += compare(digit_count_s[j], digit_count_i[j]);
            }
            printf("    (%d,%d)\n", strong, weak - strong);
        }
    }
    return 0;
}

