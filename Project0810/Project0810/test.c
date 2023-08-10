#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//关闭assert断言，放在头文件前面#define NDEBUG
#include <assert.h>
#include <string.h>
//int main()
//{
//	int i = 10;
//	int* p = &i;
//	int* p2 = NULL;
//	*p2 = 100;
//	printf("%d\n", *p2);
//	return 0;
//}

//int* test()
//{
//	int n = 100;
//	return &n;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}//返回栈空间地址的问题。

//int main()
//{
//	int* p = NULL;
//	assert(p != NULL);//使用if语句的话不报错
//	printf("%d", 10);
//	return 0;
//}

//void Reverse(int* p, int* p2)
//{
//	int ret = *p;
//	*p = *p2;
//	*p2 = ret;
//}
//
//int main()
//{
//	int a = 10, b = 20;
//	Reverse(&a, &b);
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}

//函数内部想要修改外部变量的时候，就需要用传址。

//int main()
//{
//	int i = 10;
//	int* p = &i;
//	char j = '0';
//	char* p2 = &j;
//	printf("%zd\n", sizeof(int*));//4或者8
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(p));//地址的大小，要么是32位，要么是64位
//	printf("%zd\n", sizeof(p2));
//	return 0;
//}

//int my_strlen(const char* p)//健壮性，鲁棒性
//{
//	assert(p != NULL);
//	int count = 0;
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = { "abcdef" };
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	size_t sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", p + i);
//	}
//	p = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		//printf("%d ", *(p + i));
//		printf("%d ", i[p]);//arr[i] = *(arr + i) = p[i] = *(p + i) = * (i + arr) = i[arr]
//	}
//	return 0;
//}

//void Print(int arr[])
//{
//	size_t sz = sizeof(arr) / sizeof(arr[0]);//X64平台，arr是指针，所以8 / 4 = 2。
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	Print(arr);
//}

//void Print(int* p, int x)
//{
//	for (int i = 0; i < x; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	size_t sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}

//void Line(int* p, int x)
//{
//	int i = 0, j = 0, flag = 1;
//	for (i = 0; i < x - 1; i++)
//	{
//		for (j = 0; j < x - 1 - i; j++)
//		{
//			if (*(p + j) > *(p + j + 1))
//			{
//				int ret = *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = ret;
//				flag = 0;
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//}
//
//void Print(int* p, int x)
//{
//	for (int i = 0; i < x; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//int arr[100] = { 0 };
//int j = 0;
//printf("请输入数组元素个数:");
//scanf("%d", &j);
//printf("请输入一个数组:");
//for (int i = 0; i < j; i++)
//{
//	scanf("%d", &arr[i]);
//}
//	Line(arr, j);
//	printf("冒泡排序后的数组:");
//	Print(arr, j);
//	return 0;
//}

//void Reverse(int* p, int x)
//{
//	int i = 0, j = 0, k = 0, one = 0;
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	for (i = 0; i < x; i++)
//	{
//		if (*(p + i) % 2 != 0)
//		{
//			arr1[j] = *(p + i);
//			j++;
//			one++;
//		}
//	}
//	k = one ;
//	for (i = 0; i < x; i++)
//	{
//		if (*(p + i) % 2 == 0)
//		{
//			arr1[k] = *(p + i);
//			k++;
//			one++;
//		}
//	}
//	for (i = 0; i < x; i++)
//	{
//		*(p + i) = arr1[i];
//	}
//}
//
//void Print(int* p, int x)
//{
//	for (int i = 0; i < x; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[100] = { 0 };
//	int j = 0;
//	printf("请输入数组元素个数:");
//	scanf("%d", &j);
//	printf("请输入一个数组:");
//	for (int i = 0; i < j; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	Reverse(arr, j);
//	Print(arr, j);
//}
//

#include <stdio.h>
#include <string.h>

void Reverse(char* p, int start, int end)
{
	int i = 0, j = 0;
	for (i = start, j = end; i <= j; i++, j--)
	{
		char ret = *(p + i);
		*(p + i) = *(p + j);
		*(p + j) = ret;
	}
}

int Reverse1(char* p, char* p1, int x)
{
	int i = 0, j = 0;
	for (i = 0, j = x - i; i < x; i++)
	{
		Reverse(p1, 0, i - 1);
		Reverse(p1, i, x - 1);
		Reverse(p1, 0, x - 1);
		if ((strcmp(p, p1)) == 0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int i = 0;
	char arr[100] = { '0' };
	char arr1[100] = { '0' };
	/*printf("请输入数组元素个数:");
	scanf("%d", &i);*/
	while (1)
	{
		gets(arr);
		gets(arr1);
		size_t sz = strlen(arr);
		int ret = Reverse1(arr, arr1, sz);
		printf("%d\n", ret);
	}
}

int main()


