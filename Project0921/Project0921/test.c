#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <assert.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "ghijk";
//	printf("%s\n", strncpy(arr1, arr2, 3));
//	return 0;
//}

//在C语言的库函数中设计一些错误码，当函数调用的过程中发生各种错误，要记录下来，例如0,1,2
//返回值是这个错误码所代表的错误信息的首元素地址
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		char* ret = strerror(i);
//		printf("%d : %s\n", i, ret);
//	}
//	return 0;
//}

//当库函数调用失败时，会把错误码记录到errno这个变量中
//errno是全局变量

//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[] = { 1, 2, 3, 4, 5 };
//	memcpy(arr1, arr2, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//void* my_memcpy(void* dest, const void* source, size_t num)
//{
//	void* ret = dest;
//	assert(dest && source);
//	while (num)
//	{
//		*(char*)dest = *(char*)source;
//		dest = (char*)dest + 1;
//		source = (char*)source + 1;
//		num--;
//	}
//}
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[] = { 1, 2, 3, 4, 5 };
//	my_memcpy(arr1, arr2, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

void* my_memcpy(void* dest, const void* source, size_t num)
{
	void* ret = dest;
	assert(dest && source);
	while (num)
	{
		*(char*)dest = *(char*)source;
		dest = (char*)dest + 1;
		source = (char*)source + 1;
		num--;
	}
}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7 };
	my_memcpy(arr1, arr2, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}


