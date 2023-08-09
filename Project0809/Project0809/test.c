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

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	int* p = &arr[0];
	while (p < arr + sz)
	{
		printf("%d", *p);
		p += 1;
	}
	return 0;
}