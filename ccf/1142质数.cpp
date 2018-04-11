/*题目描述


        定义质数为因数只有1和其本身的数，对于n组询问，试判断每个数是否为质数。
输入

        读入第一行一个正整数n，表示有n组询问。
接下来n行，每行一个正整数m，表示询问m是否为质数，是则输出“yes”，否则输出“no”。

输出

        n行，每行一个字符串，代表答案。

样例输入

3
1
17
51
样例输出

        no

yes

        no

数据范围限制

        n≤10^3，1<m≤10^10。*/
#include <stdio.h>

int isPri(int n) {
    int i;
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    }
    for (i = 2; i * i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, m;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &m);
        if (isPri(m)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
    return 0;
}
