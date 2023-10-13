#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

//void* my_memmove(void* des, const void* sou, size_t sz)
//{
//	int i = 0;
//	void* ret = des;
//	assert(des && sou);
//	if (des <= sou)
//	{
//		for (i = 0; i < (int)sz; i++)
//		{
//			*((char*)des + i) = *((char*)sou + i);
//		}
//	}
//	else
//	{
//		for (i = (int)sz - 1; i >= 0; i--)
//		{
//			*((char*)des + i) = *((char*)sou + i);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[100] = "C language is a great language !";
//	my_memmove(arr1 + 21, arr1 + 15, 17);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	int arr1[100] = { 0, 1, 2, 3, 4, 5 };
//	my_memmove(arr1 + 2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//int main()
//{
//	printf("%d + %d = %d\n", 2, 3, 5);
//	return 0;
//}

//int main()
//{
//	//位段可以限定成员所占的空间大小，节省空间
//}

#include <string.h>
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	printf("%zd\n", sizeof(struct S));//3
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	return 0;//大小端
//}

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;
	printf("%zd\n", sizeof(struct S));//3
	return 0;
}

//struct S
//{
//    int _a : 2;
//    int _b : 5;
//    int _c : 10;
//    int _d : 30;
//};
//
//int main()
//{
//    printf("%zd\n", sizeof(struct S));
//    return 0;
//}
