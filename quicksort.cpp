#include <stdio.h>

void quick_sort(int s[], int left, int right);

int main() {
    int s[] = {1, 5, 3, 6, 2, 0};
    quick_sort(s, 0, 5);
    for (int i = 0; i <=5; i++) {
        printf("%2d", s[i]);
    }
}

void quick_sort(int s[], int left, int right) {
    if (left < right) {
        int key = s[left];
        int low = left;
        int high = right;
        while (low < high) {
            while (low < high && s[high] > key) {  //从右向左找第一个比key小的数字
                high--;
            }
            s[low] = s[high];
            while (low < high && s[low] < key) {  //从左向右查找第一个比key大的数字
                low++;
            }
            s[high] = s[low];
        }
        s[low] = key;
        quick_sort(s, left, low - 1);
        quick_sort(s, low + 1, right);
    }
}

