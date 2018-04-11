/*题目描述

    刚举行的万米长跑活动中，有N个人跑完了全程，所用的时间都不相同。颁奖时为了增加趣味性，随机抽了一个数K，要奖励第K名一双跑鞋。
现在组委会给你N个人的姓名、成绩（用时，单位是秒），请你编程快速输出第K名的姓名。

输入

   第一行：2个整数N和K，范围[ 1≤ K ≤ N ≤ 100 ]。
下面N行：每行第1个是字符串表示姓名；第2个是个整数，表示这个人跑完的使用时间。

输出

   一行，第K名的姓名。

样例输入

    5 3
wangxi    2306
xiaoming  3013
zhangfan   3189
chengli    4012
jiangbou   2601
样例输出

 xiaoming*/
#include <iostream>
#include <algorithm>

const int N = 100;
using namespace std;
struct _node {
    string name;
    int val{};
} a[N];

bool compare(_node a, _node b) {
    return a.val > b.val;
}

int main() {
    int k , n;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].val;
    }

    sort(a, a + n, compare);
    cout << a[k - 1].name << endl;
    return 0;
}
