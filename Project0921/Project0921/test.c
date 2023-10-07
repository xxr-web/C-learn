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

//int my_strcmp(const char* s1, const char* s2)
//{
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdefghi";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}

//const char* my_strstr(const char* des, const char* sou)
//{
//	const char* s1 = des;
//	const char* s2 = sou;
//	const char* tmp = des;
//	assert(des && sou);
//	if (*s2 == '\0')
//		return s1;
//	while (*tmp != '\0')
//	{
//		s1 = tmp;
//		s2 = sou;
//		while ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0'))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return tmp;
//		tmp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	const char* ret = my_strstr(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}

//char* my_strncpy(char* s1, const char* s2, size_t sz)
//{
//	int i = 0;
//	char* ret = s1;
//	assert(s1 && s2);
//	for (i = 0; i < sz; i++)
//	{
//		*s1 = *s2;
//		s1++;
//		s2++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "ghijkl";
//	char* ret = my_strncpy(arr1, arr2, 3);
//	printf("%s\n", ret);
//	return 0;
//}

//char* my_strncat(char* s1, const char* s2, size_t sz)
//{
//	assert(s1 && s2);
//	char* ret = s1;
//	size_t len = strlen(s1);
//	int x = (int)len, i = 0, j = 0;
//	for (i = x, j = 0; i < x + (int)sz, j < (int)sz; i++, j++)
//	{
//		s1[i] = s2[j];
//	}
//	s1[i] = '\0';
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "abcdef";
//	char* ret = my_strncat(arr1, arr2, 3);
//	printf("%s\n", ret);
//	return 0;
//}

//void* my_memcpy(void* s1, const void* s2, size_t sz)
//{
//	assert(s1 && s2);
//	void* ret = s1;
//	while (sz)
//	{
//		*(char*)s1 = *(char*)s2;
//		s1 = (char*)s1 + 1;
//		s2 = (char*)s2 + 1;
//		sz--;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "a1c2e3";
//	char arr2[] = "g4h5j6";
//	void* ret = my_memcpy(arr1, arr2, 3);
//	puts(ret);
//	return 0;
//}

int main()
{
	int a = -1, b = 4, k;
	k = (++a < 0) && !(b-- <= 0);//短路原则
	printf("%d, %d, %d\n", k, a, b);
	return 0;
}





