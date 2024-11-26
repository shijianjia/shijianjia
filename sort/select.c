#include "sort.h"

//实现冒泡升序排序算法的函数，list[N] 为待排序数组
void Bubble_sort(int list[])
{
    int i, j;
    int temp = 0;
    // N 个元素，遍历 N-1 次
    for (i = 0; i < 5; i++) {
        // 从第 1 个元素开始遍历，遍历至 N-1-i
        for (j = 0; j < 5 - i; j++) {
            //比较 list[j] 和 list[j+1] 的大小
            if (list[j] > list[j + 1]) {
                //交换 2 个元素的位置
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}
