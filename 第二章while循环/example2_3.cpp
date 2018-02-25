// 输入一些整数，求他们的最小值，最大值，平均值(保留3位有效数字),输入保证这些数字都是不超过100的数字
#include <stdio.h>

int main() {
    // 变量在未赋值之前，它的值是不确定的，它不一定等于0
    int x, n = 0, min, max, s = 0;
    while (scanf("%d", &x) == 1) {
        if (n == 0) {
            min = max = x;
        } else {
            if (x < min) min = x;
            if (x > max) max = x;
        }
        s += x;
        n++;
    }
    printf("%d %d %.3f\n", min, max, static_cast<double>(s / n));
    return 0;
}