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

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}

//void Print1(int arr[], int x)
//{
//	for (int i = 0; i < x; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void Print2(int* p, int x)
//{
//	for (int i = 0; i < x; i++)
//	{
//		printf("%d ", p[i]);
//	}
//}
//
//void Print3(int arr[])
//{
//	int x = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < x; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[5] = { 0, 1, 2, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print1(arr, sz);
//	printf("\n");
//	Print2(arr, sz);
//	printf("\n");
//	Print3(arr);
//	printf("\n");
//	return 0;
//}

//void bubble_sort(int* p, int x)
//{
//	int k = 0, m = 0;
//	for (k = 0; k < x - 1; k++)
//	{
//		int flag = 1;
//		for (m = 0; m < x - 1; m++)
//		{
//			if (p[m] > p[m + 1])
//			{
//				int ret = p[m];
//				p[m] = p[m + 1];
//				p[m + 1] = ret;
//				flag = 0;
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//	for (k = 0; k < x; k++)
//	{
//		printf("%d ", p[k]);
//	}
//}
//
//int main()
//{
//	int i = 0, j = 0;
//	int arr[100] = { 0 };
//	printf("请输入数组元素个数:");
//	scanf("%d", &j);
//	for (i = 0; i < j; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	bubble_sort(arr, j);
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	int* p = &i;
//	int** pp = &p;
//	int*** ppa = &pp;
//	***ppa = 30;
//	printf("%d\n", i);
//	printf("%p\n", p);
//	printf("%p\n", pp);
//	printf("%p\n", ppa);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 0 };
//	int arr2[] = { 0 };
//	int arr3[] = { 0 };
//	int* ptr[3] = { arr1, arr2, arr3 };
//	printf("%p\n", &ptr[0]);
//	printf("%p\n", &arr1);
//	return 0;
//}

//int main()
//{
//	int arr1[5] = { 0 , 1, 2, 3, 4 };
//	int arr2[5] = { 1, 2, 3, 4, 5 };
//	int arr3[5] = { 2, 3, 4, 5, 6 };
//	int* p[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

int Drink(int empty)
{
	if (empty > 1)
	{
		int a = empty / 2;
		int b = empty % 2;
		return a + Drink(a + b);
	}
	else
	{
		return 0;
	}
}

int main()
{
	int i = 0;
	int money = 0;
	scanf("%d", &money);
	int ret = Drink(money);
	printf("%d\n", money + ret);
	return 0;
}

