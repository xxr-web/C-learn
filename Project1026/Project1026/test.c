#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
#include <string.h>

//int main()
//{
//	FILE* fp = fopen("Zjs.txt", "w");
//	if (fp == NULL)
//	{
//		fclose(fp);
//		return 1;
//	}
//}

//int main()
//{
//	int i = 0, j = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 9; i++)
//	{
//		int flag = 0;
//		for (j = 0; j < 10 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int ret = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = ret;
//				flag = 1;
//			}
//		}
//		if (0 == flag)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4 };
//	size_t sz = sizeof(arr);
//	size_t len = strlen(arr);
//	printf("%zd\n", sz);
//	printf("%zd\n", len);
//	return 0;
//}

//int main()
//{
//	int obj = 0, j = 0, flag = 0, n = 0;
//	int arr[100] = { 0 };
//	scanf("%d%d", &obj, &n);
//	for (j = 0; j < n; j++)
//	{
//		scanf("%d", &arr[j]);
//	}
//	int left = 0;
//	int right = n - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		flag = 0;
//		mid = (left + right) / 2;
//		if (obj < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (obj > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (1 == flag)
//	{
//		printf("找到了，下标是%d\n", mid);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//}

//void Fun1()
//{
//	int a = 10;
//	printf("%p\n", &a);
//}
//
//void Fun2()
//{
//	int b = 20;
//	printf("%p\n", &b);
//}
//int main()
//{
//	Fun1();
//	Fun2();
//	return 0;
//}

int Fib(int x)
{
	if (1 == x)
		return 1;
	else if (2 == x)
		return 1;
	else
		return (Fib(x - 1) + Fib(x - 2));
}
int main()
{
	int ret = Fib(10);
	printf("%d\n", ret);
	return 0;
}