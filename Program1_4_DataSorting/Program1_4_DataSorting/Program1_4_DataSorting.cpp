// Program1_4_DataSorting.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define LENGTH 100

int main()
{
	void insert_sort(int *arr, int n);
	int i;
	int a[LENGTH];
	for (i = 0; i < LENGTH; i++)
		*(a + i) = 100 - i;
	insert_sort(a, LENGTH);
	for (i = 0; i < LENGTH; i++)
		printf("%d\n", *(a + i));
	return 0;

}

void insert_sort(int *arr, int n)
{
	void swap(int *, int *);
	int i, j;
	for (i = 0; i < n; i++) 
	{
		// 数组为[100 99 98 ... 2 1]
		//		 [1 2 98 ... 99 100]
		//   已排序← →未排序部分 
		int *min = arr + i; // min为未排序部分的第一个数
		for(j=i; j < n-1;j++) // 检索未排序部分中的最小数
		{
			if (*(arr + j + 1) < *min)
				min = (arr + j + 1);
		}
		swap(min, arr + i);
	}
}

void swap(int *a, int *b) {
	int temp = *b;
	*b = *a;
	*a = temp;
}