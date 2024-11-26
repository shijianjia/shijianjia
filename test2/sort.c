#include "stdio.h"
#include "sort.h"

int main() {
    int i = 0;
    int list[5] = { 14,33,27,35,10 };
    Bubble_sort(list);
    //输出已排好序的序列
    printf("冒泡排序后:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", list[i]);
    }

    printf("\r\n");
	int arr[10] = { 5,1,3,8,2,6,4,9,10,7 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Insert_sort(arr, len);
	printf("插入排序后:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\r\n");
    return 0;
}