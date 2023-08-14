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

#include <stdio.h>

void swap(int** x, int** y)
{
	int* ret = *x;
	*x = *y;
	*y = ret;
}

int main()
{
	int a = 10;
	int b = 20;
	int* p1 = &a;
	int* p2 = &b;
	int** pp1 = &p1;
	int** pp2 = &p2;
	swap(pp1, pp2);
	printf("%p %p\n", &a, p2);//其实就是想让这两个指针的值进行交换，所以需要找到这两个指针的地址。
	printf("%p %p\n", &b, p1);
	return 0;
}