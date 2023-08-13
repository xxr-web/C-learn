#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//int bin_search(int* p, int left, int right, int key)
//{
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;//int middle = left + (right - left) / 2;//(left +right) >> 1，相当于除以2。左移一位相当于乘2。
//		if (key > p[middle])
//		{
//			left = middle + 1;
//		}
//		else if (key < middle)
//		{
//			right = middle - 1;
//		}
//		else
//		{
//			return middle;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int i = 0;
//	printf("请输入想要查找的数字:");
//	scanf("%d", &i);
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };//二分查找法必须是有序数列
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int ret = bin_search(arr, left, right, i);
//	if (-1 == ret)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("%d", ret);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 10;
//	printf("%p\n", &i);
//	printf("%p\n", &j);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int j = i, k = 0, sum = 0, count = 0;
//		while (j)
//		{
//			count++;
//			j = j / 10;
//		}
//		j = i;
//		/*for (k = 0; k < count; k++)*/
//		for ( k = 0; k < count; k++)
//		{
//			sum = sum + pow(j % 10, count);
//			j = j / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//循环求斐波那契数列
//递归喝汽水
//如何找到两个不同的数

//void Print(int x)
//{
//	if (x < 0)
//	{
//		x = -x;
//	}
//	if (x > 9)
//	{
//		Print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	Print(i);
//	return 0;
//}

//int main()//if并列和if elseid区别
//{
//	int x = 10;
//	if (x > 1)
//	{
//		printf("1");
//	}
//	else if (x > 8)
//	{
//		printf("2");
//	}
//}

//int Everynumsum(int x)
//{
//	if (x > 9)
//	{
//		return x % 10 + Everynumsum(x / 10);
//	}
//	return x;
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = Everynumsum(i);
//	printf("%d\n", ret);
//	return 0;
//}

//int Fib(int x)
//{
//	int a = 1, b = 1, c = 1;
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = Fib(i);
//	printf("%d\n", ret);
//}

//void Printbit(int num)
//{
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	Printbit(i);
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0, 1, 2, 3, 4 };
//	int ret = &arr[4] - &arr[0];
//	printf("%d\n", ret);
//	return 0;
//}
