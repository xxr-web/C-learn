#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char* arr[3] = { "Jlu", "University", "Love" };
	printf("%s\n", arr[0]);
	printf("%s\n", *(arr + 1));//解引用才是字符指针
	printf("%p\n", arr);
	printf("%p\n", (arr + 1));
	printf("%s\n", arr + 1);//这个字符指针的地址
	char arr1[4] = { "abc" };
	printf("%p\n", arr1);
	printf("%p\n", arr1 + 1);
	char* p = "abc";
	printf("%s\n", p);
	return 0;
}