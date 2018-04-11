/*题目描述

  对于一个长度为n的序列{an}来说，其众数被定义为出现次数最多的数。
现在给定一个长度为n的序列，yc想要你求出它的众数是多少。
当然众数可能有多个，你只需要输出最小的一个就可以了。

输入

   第一行输入n，第二行输入n个数。

输出

        输出众数。

样例输入

6
3 5 7 5 3 1
样例输出


3
数据范围限制

        n<10^6, 0<ai<1000*/
#include <cstdio>
#include <cstring>

#define N 1000
int capacity[N + 1];

int main() {
    memset(capacity, 0, sizeof(capacity));
    int n, val, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &val);
        capacity[val]++;
    }

    int max = capacity[0], aus;
    for (i = 1; i < N + 1; i++) {
        if (max < capacity[i]) {
            max = capacity[i];
            aus = i;
        }
    }
    printf("%d\n", aus);
    return 0;
}
