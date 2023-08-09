#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%zd\n", sizeof(p));
//	printf("%zd\n", sizeof(int*));
//	return 0;
//}

//int main()
//{
//	int a = 10, b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	char b = '0';
//	char* p1 = &b;
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//	printf("%p\n", b);
//	printf("%p\n", b + 1);
//	return 0;
//}

//int main()
//{
//	int a = 0, i = 0;
//	printf("请输入:>");
//	scanf("%d", &a);
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			i++;
//		}
//		a = a / 2;
//	}
//	printf("%d\n", i);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int  i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0, i = 0, count = 0;
//	printf("请输入:>");
//	scanf("%d", &a);
//	for (i = 0; i < 32; i++)
//	{
//		if ((a & (1 << i)) != 0 )
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	
//	int a = 0, i = 0;
//	printf("请输入:>");
//	scanf("%d", &a);
//	while (a)
//	{
//		i++;
//		a = a & (a - 1);
//	}
//	printf("%d\n", i);
//	return 0;
//	
//}

//int main()
//{
//	int a = 10, b = 10;
//	const int* p = &a;
//	*a = 20;
//	p = &b;
//}
//
//int main()
//{
//	int a = 10, b = 10;
//	int* const p = &a;
//	p = &b;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	char arr1[] = { "abc" };
//	int* p = &arr[0];
//	char* p2 = &arr1[0];
//	*(p + 1) = 1;
//	*(p2 + 1) = 'a';
//	return 0;
//}

//int main()
//{
//	char arr[] = { "abcdef" };
//	printf("%s\n", arr);
//	char* p = &arr[0];
//	while (*p != '\0')
//	{
//		printf("%c", *p);
//		p += 1;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3 };
//	int ret = &arr[2] - &arr[0];
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;//地址3-地址0,也就是0,1,2
//}
//
//int main()
//{
//	printf("%d\n", my_strlen("abc"));
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	size_t sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	while (p < arr + sz)
//	{
//		printf("%d", *p);
//		p += 1;
//	}
//	return 0;
//}

//int str(char* p)
//{
//	char* s = p;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - s;
//}
//
//int main()
//{
//	char arr[] = { "abcdef" };
//	int len = str(arr);
//	printf("%d\n", len);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char arr[1001] = { '0' };
//    gets(arr);
//    int len = strlen(arr);
//    int i = 0;
//    for (i = len - 1; i >= 0; i--)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//}

//void Turn(char* p, int x)
//{
//	size_t sz = strlen(p);
//	int i = 0, j = 0;
//	char arr1[1000] = { '0' };
//	for (i = 0; i < x; i++)
//	{
//		arr1[i] = p[i];
//	}
//	for (i = x, j = 0; i < sz, j < sz - x; i++, j++)
//	{
//		p[j] = p[i];
//	}
//	for (i = sz - x, j = 0; i < sz, j < x; i++, j++)
//	{
//		p[i] = arr1[j];
//	}
//	printf("%s", p);
//}
//
//int main()
//{
//	char arr[1000] = { '0' };
//	printf("请输入字符串:");
//	gets(arr);
//	int k = 0, i = 0;
//	printf("请输入需要左旋的字符数:");
//	scanf("%d", &k);
//	Turn(arr, k);
//}

//int InsertDate(int* p, int size, int data)
//{
//	*(p + size) = data;
//	int m = 0, n = size - 1;
//	while (n > 0)
//	{
//		for (m = 0; m < size; m++)
//		{
//			if (p[m] > p[m + 1])
//			{
//				int ret = p[m];
//				p[m] = p[m + 1];
//				p[m + 1] = ret;
//			}
//		}
//		n--;
//	}
//	return size + 1;
//}
//
//int main()
//{
//	int arr[100] = { 0 };
//	int i = 0, sz = 0;
//	begin:
//	printf("请输入数组元素的个数:");
//	while ((scanf("%d", &sz)) != EOF)
//	{
//		printf("请输入一个升序数组:");
//		for (i = 0; i < sz; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		int j = 0;
//		printf("请输入要插入的数字:");
//		scanf("%d", &j);
//		int ret = InsertDate(arr, sz, j);
//		printf("新数组元素的个数是:%d\n", ret);
//		printf("新的数组:");
//		for (i = 0; i < sz + 1; i++)
//		{
//			printf("%d ", *(arr + i));
//		}
//		printf("\n");
//		goto begin;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	printf("%d\n", a);
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	char a = 1, b = 2;
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof(+a));
//	printf("%zd\n", sizeof(-a));
//	printf("%zd\n", sizeof(a == -1));
//	printf("%zd\n", sizeof(++a));
//	printf("%zd\n", sizeof(--a));
//	printf("%zd\n", sizeof(a + b));
//	printf("%zd\n", sizeof(a < b));
//	return 0;
//}

