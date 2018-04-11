// 开灯问题，现有n个灯泡，起初所有的灯都是灭的。有k个同学来按灯泡开关，如果灯是亮的，那么按过开关之后，灯会灭掉。如果灯是灭的，按过开关之后灯会亮。
//第1个同学，把所有的灯泡开关都按一次(按开关灯的编号： 1,2,3,......100)。
//第2个同学，隔一个灯按一次(按开关灯的编号： 2,4,6,......,100)。
//第3个同学，隔两个灯按一次(按开关灯的编号： 3,6,9,......,99)。
#include <stdio.h>
#include <cstring>

int main() {
    int a[100];
    int i, j, n, k, first = 1;
    memset(a, 0, sizeof(a));   // memset方法的作用： 把数组a清零
    scanf("%d%d", &n, &k);
    // 循环 同学
    for (i = 1; i <= k; i++) {
        // 循环灯数
        for (j = 1; j <= n; j++) {
            if (j % i == 0) a[j] = !a[j];
        }
    }
    for (i = 1; i <= n; i++) {
        if (a[i]) {
            if (first) first = 0;  // first用来避免多输出空格
            else printf(" ");
            printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}
