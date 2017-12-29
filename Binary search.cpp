#include <stdio.h>

int binSearch(int srcArray[], int key)

int binSearch(int srcArray[], int start, int end, int key);

int main() {
    int array[] = {3, 5, 11, 14, 33, 50, 333};
    printf("%d", binSearch(array, 0, 5, 3));
    return 0;
}

/**
 * 递归算法
 * @param srcArray 要进行查找的数组
 * @param start  数组元素开始的指针
 * @param end  数组结束的指针
 * @param key  要查找的关键子
 * @return   查询得到的数组下标
 */
int binSearch(int srcArray[], int start, int end, int key) {
    int mid = (end - start) / 2 + start;
    if (srcArray[mid] == key) {
        return mid;
    }
    if (start >= end) {
        return -1;
    } else if (key > srcArray[mid]) {
//        key大于了mid的值
        return binSearch(srcArray, mid + 1, end, key);
    } else if (key < srcArray[mid]) {
        return binSearch(srcArray, start, mid - 1, key);
    }
    return -1;
}

/**
 * 非递归算法
 * @param srcArray  要进行查找的数组
 * @param key  要查询的元素
 * @return   查找得到元素的位置
 */
int binSearch(int srcArray[], int key) {
    int mid;  //中间
    int start = 0;
    int length;   //数组的长度
    length = sizeof(srcArray) / sizeof(srcArray[0]);
    int end = length - 1;
    while (start <= end) {
        mid = (end - start) / 2 + start;
        if (key < srcArray[mid]) {
            end = mid - 1;
        } else if (key > srcArray[mid]) {
            start = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}










