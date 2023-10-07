#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
//my_memmove(void* des, const void* sou, size_t num)
//{
//	if (des < sou)
//	{
//		int i = 0;
//		for (i = 0; i < (int)num; i++)
//		{
//			*((char*)des + i) = *((char*)sou + i);
//		}
//	}
//	else
//	{
//		int i = 0;
//		for (i = (int)num - 1; i >= 0; i--)
//		{
//			*((char*)des + i) = *((char*)sou + i);
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	my_memmove(arr + 2, arr, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char buffer1[] = "DWgaOtP12df0";
//	char buffer2[] = "DWGAOTP12DF0";
//	int n;
//	n = memcmp(buffer1, buffer2, sizeof(buffer1));
//	if (n > 0) printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
//	else if (n < 0) printf("'%s' is less than '%s'.\n", buffer1, buffer2);
//	else printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 3, 2, 3, 5 };
//	int arr2[] = { 1, 2, 3, 4, 5 };
//	int ret = memcmp(arr1, arr2, 10);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

int main()//好题，涉及到存储、截断和整形提升
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%d,b=%d,c=%d", a, b, c);
	return 0;
}