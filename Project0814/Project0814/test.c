#define _CRT_SECURE_NO_WARNINGS
//void (*signal(int, void(*)(int)))(int);
//signal(int, void(*)(int))是一个函数声明
//声明一个signal函数，分别有两个参数，一个是int类型，另一个是参数为int类型，返回值为void类型的函数指针类型，返回值是参数为int，返回值为void类型的函数指针

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int(*p1)(int, int) = Add;
//	int(*p2)(int, int) = Sub;
//	int(*parr[2])(int, int) = { p1, p2 };//函数指针数组,里面的元素必须是int(*)(int, int)类型的函数指针
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 0, 1, 2, 3 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	void* p = &i;//指针垃圾桶，只能存各种类型变量的地址。
//	//*p = 20;//不可以
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp_int(const void* e1,const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void Print_arr(int arr[], int x)
//{
//	for (int i = 0; i < x; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 3, 1, 5, 7, 2, 4, 8, 6, 0, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	Print_arr(arr, sz);
//	return 0;//qsort使用的是快排
//}

//#include <stdio.h>
////qosrt函数的使⽤者得实现⼀个⽐较函数
//int int_cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int i = 0;
//
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//
//void swap(int** x, int** y)
//{
//	int* ret = *x;
//	*x = *y;
//	*y = ret;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* p1 = &a;
//	int* p2 = &b;
//	int** pp1 = &p1;
//	int** pp2 = &p2;
//	swap(pp1, pp2);
//	printf("%p %p\n", &a, p2);//其实就是想让这两个指针的值进行交换，所以需要找到这两个指针的地址。
//	printf("%p %p\n", &b, p1);
//	return 0;
//}

//#include "fx.h"
//
//void menu()
//{
//	printf("**********************\n");
//	printf("******0.exit***1.Add**\n");
//	printf("******2.Sub ***3.mul**\n");
//	printf("******4.Div ***5.Max**\n");
//}
//
//int main()
//{
//	int input = 0, x = 0, y = 0;
// int(*arr[5])(int, int) = { Add, Sub, Mul, Div, Max };
//	do
//	{
//		menu();
//		printf("请输入:");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入需要操作的数:");
//			scanf("%d%d", &x, &y);
//			int ret = arr[input - 1](x, y);
//			printf("最后的结果是%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("已退出");
//		}
//		else
//		{
//			printf("请重新输入:\n");
//		}
//	} while (input);
//}


//#include <stdio.h>
//int main()
//{
//	int a, b, c, d;
//	while (scanf("%d%d%d", &a, &b, &c) == 3)
//	{
//		if (a < b)
//		{
//			d = a;
//			a = b; 
//			b = d;
//		}
//		if (a < c)
//		{
//			d = a;
//			a = c; 
//			c = d;
//		}
//		if (b < c)
//		{
//			d = b;
//			b = c; 
//			c = d;
//		}
//		printf("%d %d %d", a, b, c);
//	}
//	return 0;
//}

//#include "fx.h"
//
//int compas_int(void* p1, void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);//从小到大
//	//return (*(int*)p2 - *(int*)p1);//从大到小
//}
//
//int main()
//{
//	int arr[5] = { 5, 1, 3, 4, 2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(&arr[0], sz, sizeof(arr[0]), compas_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int arr[100] = { 0 }, arr1[50] = { 0 }, arr2[50] = { 0 };
	int i = 0, j = 0, k = 0, m = 0, n = 0;
	scanf("%d", &k);
	for (i = 0; i < k; i++)
	{
		scanf("%d", &arr[i]);
	}
	int ret = arr[0];
	for (i = 1; i < k; i++)
	{
		ret = ret ^ arr[i];
	}
	for (j = 0; j < 32; j++)
	{
		if (ret & (1 << j) != 0)
		{
			break;
		}
	}
	for (i = 0; i < k; i++)
	{
		if (arr[i] & (1 << j) != 0)
		{
			arr1[m] = arr[i];
			m++;
		}
		else
		{
			arr2[n] = arr[i];
			n++;
		}
	}
	int ret1 = arr1[0], ret2 = arr2[0];
	for (i = 1, j = 1; i < m + 1 , j < n + 1 ; i++, j++)
	{
		ret1 = ret1 ^ arr1[i];
		ret2 = ret2 ^ arr2[j];
	}
	printf("%d %d", ret1, ret2);
	return 0;
}


