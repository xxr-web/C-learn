#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//int cmp_char(const void* e1, const void* e2)
//{
//	return *(char*)e1 - *(char*)e2;
//}
//
//void Swap(char* buf1, char* buf2, size_t width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void Bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//void Print(int* p, size_t sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 3, 1, 2, 5, 4 };
//	Bubble_sort(&arr[0], sizeof(arr), sizeof(arr[0]), cmp_int);
//	Print(arr, sizeof(arr));
//	/*int arr[5] = { "bdeca" };
//	Bubble_sort(&arr[0], sizeof(arr), sizeof(arr[0]), cmp_char);
//	Print(arr, sizeof(arr));*/
//	return 0;
//}


//#include <stdio.h>
//int int_cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//void _swap(void* p1, void* p2, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		char tmp = *((char*)p1 + i);
//		*((char*)p1 + i) = *((char*)p2 + i);
//		*((char*)p2 + i) = tmp;
//	}
//}
//void bubble(void* base, int count, int size, int(*cmp)(void*, void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < count - 1; i++)
//	{
//		for (j = 0; j < count - i - 1; j++)
//		{
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				_swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	//char *arr[] = {"aaaa","dddd","cccc","bbbb"};
//	int i = 0;
//	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr1[3] = { 'a', 'b', 'c' };
//	char arr2[] = "abc";
//	int arr3[] = { 1, 2, 3 };
//	int arr4[] = { 0, 1, 2, 3 };
//	short s = 10, r = 20;
//	int i = 2;
//	int n = sizeof(s = i + 4);//sizeof计算大小看类型，并且表达式不会去计算，可以使用调试去看反汇编代码，在编译后的汇编语言里已经变成了n[2]，所以在可执行文件里就不会再计算了。
//	int m = sizeof(r = r + 4);
//	printf("%d\n", n);
//	printf("%d\n", s);
//	printf("%d\n", r);
//	printf("%d\n", m);
//	printf("%d\n", sizeof(+ r));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));//1
//	printf("%d\n", strlen(arr4));//0,遇到0结束
//
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", sizeof(arr3));
//	return 0;
//}
//表达式有两个属性，值属性和类型属性。

//#include<stdio.h>
//#include <string.h>
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));//数组首元素地址,8
//	printf("%d\n", sizeof(*a));//4
//	printf("%d\n", sizeof(a + 1));//8
//	printf("%d\n", sizeof(a[1]));//4
//	printf("%d\n", sizeof(&a));//8
//	printf("%d\n", sizeof(*&a));//16,sizeof(a)
//	printf("%d\n", sizeof(&a + 1));//8
//	printf("%d\n", sizeof(&a[0]));//8
//	printf("%d\n", sizeof(&a[0] + 1));//8
//}
//学会看操作符的原码

//#include <stdio.h>
//
//void DrawCircle()
//{
//	printf("圆形\n");
//}
//
//void DrawRect()
//{
//	printf("矩形\n");
//}
//
//void DrawTriangle()
//{
//	printf("三角形\n");
//}
//
//void drawshape(void(*p)())
//{
//	(*p)();
//}
//
//void menu()
//{
//	printf("**************\n");
//	printf("****0.exit****\n");
//	printf("***1.Circlr***\n");
//	printf("****2.Rect****\n");
//	printf("**3.Triangle**\n");
//	printf("**************\n");
//}
//
//int main()
//{
//	int input = 0;
//	void (*drawFuncs[3])() = { DrawCircle, DrawRect, DrawTriangle };
//	do
//	{
//		menu();
//		printf("请输入:");
//		scanf("%d", &input);
//		if ((input >= 1) && (input <= 3))
//		{
//			drawshape(*drawFuncs[input-1]);
//		}
//		else if (input == 0)
//		{
//			printf("已结束\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//}

//qsort(void* Base, size_t num, size_t sz, int* cmp(const void* e1, const void* e2))

//#include <stdio.h>
//
//int cmp_int(const void* e1, const void* e2)//回调函数
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void Swap(void* e1, void* e2, size_t width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *((char*)e1 + i);
//		*((char*)e1 + i) = *((char*)e2 + i);
//		*((char*)e2 + i) = tmp;
//	}
//}
//
//void Bubble_sort(int* Base, size_t sz, size_t width, int(* cmp)(const void* e1, const void* e2))//z是一个函数指针，在qsort函数的参数里是为了提示我们需要创建一个这个函数
//{
//	int i = 0, j = 0, flag = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)Base + j * width, (char*)Base + (j + 1) * width) > 0)
//			{
//				flag = 1;
//				Swap((char*)Base + j * width , (char*)Base + (j + 1) * width, width);
//			}
//		}
//		if (0 == flag)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 3, 1, 2, 5, 4 };
//	Bubble_sort(&arr[0], sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char ch = 'a';
//	char* p = &ch;
//	printf("%c\n", *p);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	const char* a = "abcdefghijkl";
//	printf("%s\n", a);
//	printf("%p\n", a);
//	printf("%c\n", *(a + 1));
//	printf("%c\n", *a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int* p = 4;
//	printf("%d\n", p);
//	printf("%p\n", p);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 10;
//	int* p = &i;
//	printf("%p\n", p);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 0, 1, 2, 3, 4 };
//	int(*p)[5] = &arr;
//	printf("%p\n", p);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr[1]);
//	printf("%p\n", p[1]);
//	printf("%p\n", p + 1);
//	printf("%p\n", p[0]);
//	return 0;
//}


//#include <stdio.h>
//void Print1(int arr[][5], int x, int y)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void Print2(int(*p)[5], int x, int y)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 0, 1, 2, 3, 4 }, { 1, 2, 3, 4 ,5 }, { 2, 3, 4, 5 ,6 } };
//	Print1(arr, 3, 5);
//	Print2(arr, 3, 5);
//	return 0;
//}


//#include <stdio.h>
//
//void test()
//{
//	printf("1\n");
//}
//
//void test2()
//{
//	printf("2\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	void(*p1)() = &test;
//	void(*p2)() = test2;
//	int(*p3)(int x, int y) = &Add;
//	int(*p4)(int, int) = &Sub;
//	(*p1)();
//	p2();
//	int ret = (*p3)(3, 5);
//	int ret2 = p4(5, 3);
//	printf("%d\n", ret);
//	printf("%d\n", ret2);
//	return 0;
//}

//#include <stdio.h>
//
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
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//void menu()
//{
//	printf("*****************\n");
//	printf("**0.exit**1.Add**\n");
//	printf("**2.Sub***3.Mul**\n");
//	printf("**4.Div***5.MAX**\n");
//	printf("*****************\n");
//}
//
//int main()
//{
//	int input = 0, x = 0, y = 0;
//	int(*p[5])(int, int) = { Add, Sub, Mul, Div, Max };
//	do
//	{
//		menu();
//		printf("请输入:");
//		scanf("%d", &input);
//		if ((input >= 1) && (input <= 5))
//		{
//			printf("请输入两个数:");
//			scanf("%d%d", &x, &y);
//			int ret = (*p[input - 1])(x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("已结束\n");
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//}

//#include <stdio.h>
//typedef int in;
//typedef unsigned int uint;
//typedef int* ptr;
//int main()
//{
//	in a = 10;
//	uint b = 10;
//	ptr p = &a;
//	printf("%d %d %d", a, b, *p);
//	return 0;
//}

#include <stdio.h>

void Print(int x)
{
    printf("%d\n", x);
}

int main()
{
    typedef int(*parr_t)[5];//将int(*p)[5]这个数组指针转换成parr_t,放在*右面
    typedef void(*pfun_t)(int);//将void(*p)(int, int)这个函数指针转换成pfun_t
    int arr[5] = { 0, 1, 2, 3, 4 };
    parr_t p1 = &arr;
    printf("%p %p\n", &arr, p1);
    pfun_t p2 = &Print;
    p2(1);
    printf("%d\n", printf("%d ",1));
    return 0;
    
}

