#include <stdio.h>

void Insert_sort(int arr[], int size)
{
	int i = 0;
	int j = 0;
	int temp = 0;//存放未排好序区间的第一个数
	for (i = 1; i < size; i++)
	{
		temp = arr[i];
		j = i - 1;//存放已排好序区间的最后一个数下标
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}
}

