#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	char a = 128;//放不进去，截断，char类型-128-127
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	char arr[] = { '1', '123', '-1', '\0' };
//	printf("%zd\n", strlen(arr));
//	printf("%d\n", arr[1]);
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)//死循环，恒小于等于255
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = { '-1', '123', '127', '0' };
//	printf("%zd\n", strlen(arr1));
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);//(int)a + 1指向的是00字节，所以ptr2指向的是00 00 00 02 字节，小端排序，所以0X2000000
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//int main()
//{
//	char arr1[] = { '-1', '123', '127', '0' };
//	printf("%zd\n", strlen(arr1));
//	return 0;
//}