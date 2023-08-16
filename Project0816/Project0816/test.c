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
//	int n = sizeof(s = i + 4);//sizeof�����С�����ͣ����ұ��ʽ����ȥ���㣬����ʹ�õ���ȥ���������룬�ڱ����Ļ���������Ѿ������n[2]�������ڿ�ִ���ļ���Ͳ����ټ����ˡ�
//	int m = sizeof(r = r + 4);
//	printf("%d\n", n);
//	printf("%d\n", s);
//	printf("%d\n", r);
//	printf("%d\n", m);
//	printf("%d\n", sizeof(+ r));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));//1
//	printf("%d\n", strlen(arr4));//0,����0����
//
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", sizeof(arr3));
//	return 0;
//}
//���ʽ���������ԣ�ֵ���Ժ��������ԡ�

//#include<stdio.h>
//#include <string.h>
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));//������Ԫ�ص�ַ,8
//	printf("%d\n", sizeof(*a));//4
//	printf("%d\n", sizeof(a + 1));//8
//	printf("%d\n", sizeof(a[1]));//4
//	printf("%d\n", sizeof(&a));//8
//	printf("%d\n", sizeof(*&a));//16,sizeof(a)
//	printf("%d\n", sizeof(&a + 1));//8
//	printf("%d\n", sizeof(&a[0]));//8
//	printf("%d\n", sizeof(&a[0] + 1));//8
//}
//ѧ�ῴ��������ԭ��

//#include <stdio.h>
//
//void DrawCircle()
//{
//	printf("Բ��\n");
//}
//
//void DrawRect()
//{
//	printf("����\n");
//}
//
//void DrawTriangle()
//{
//	printf("������\n");
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
//		printf("������:");
//		scanf("%d", &input);
//		if ((input >= 1) && (input <= 3))
//		{
//			drawshape(*drawFuncs[input-1]);
//		}
//		else if (input == 0)
//		{
//			printf("�ѽ���\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	} while (input);
//}

//qsort(void* Base, size_t num, size_t sz, int* cmp(const void* e1, const void* e2))

#include <stdio.h>

int cmp_int(const void* e1, const void* e2)//�ص�����
{
	return (*(int*)e1 - *(int*)e2);
}

void Swap(void* e1, void* e2, size_t width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *((char*)e1 + i);
		*((char*)e1 + i) = *((char*)e2 + i);
		*((char*)e2 + i) = tmp;
	}
}

void Bubble_sort(int* Base, size_t sz, size_t width, int(* cmp)(const void* e1, const void* e2))//z��һ������ָ�룬��qsort�����Ĳ�������Ϊ����ʾ������Ҫ����һ���������
{
	int i = 0, j = 0, flag = 0;
	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)Base + j * width, (char*)Base + (j + 1) * width) > 0)
			{
				flag = 1;
				Swap((char*)Base + j * width , (char*)Base + (j + 1) * width, width);
			}
		}
		if (0 == flag)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 3, 1, 2, 5, 4 };
	Bubble_sort(&arr[0], sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

