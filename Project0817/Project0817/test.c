#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//	char arr[] = { 'a', 'b', 'c' };
//	printf("%zd\n", strlen(*arr));//非法访问
//	return 0;
//}

//int main()
//{
//	char* p = "abc";//p类似数组
//	printf("%c\n", *p);
//	printf("%zd\n", sizeof(*p));//1
//	printf("%zd\n", strlen(p));
//	printf("%zd\n", strlen(*p));//非法访问，访问冲突。
//	printf("%zd\n", sizeof(p[0]));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	assert(a != 10);
//	int* p = &a;
//	int** pp = &p;
//	printf("%p\n", pp);
//	printf("%p\n", &p + 1);
//	return 0;
//}

//int main()
//{
//	char* p = "abc";
//	printf("%zd\n", strlen(&p));//6
//	printf("%zd\n", strlen(&p + 1));//30,遇到00字节为止
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 0 };
//	int arr1[3] = { 0 };
//	printf("%zd\n", sizeof(arr + 1));//二维数组名代表的就是第一行一维数组的地址
//	printf("%zd\n", sizeof(*arr1));
//	printf("%zd\n", sizeof(*(arr + 1)));//sizeof(arr[1])
//	printf("%zd\n", sizeof(arr[4]));//20，sizeof看类型，不需要真的访问arr[4]
//	printf("%zd\n", sizeof(arr1[5]));//4
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//在X86环境下
//假设结构体的⼤⼩是20个字节
//程序输出的结构是啥？
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;
//int main()
//{
//	printf("%p\n", p + 0x1);//指针加1，加20，
//	printf("%p\n", (unsigned long)p + 0x1);//这个不是指针了，就是一个unsigned long类型的变量
//	printf("%p\n", (unsigned int*)p + 0x1);//指针加1，加4
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//里面是圆括号，是逗号表达式
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//假设环境是x86环境，程序输出的结果是啥？
//#include <stdio.h>
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//-4,指针和指针相减就是元素个数
//	return 0;
//}

//int main()
//{
//	char* p = { "abc" };
//	char ch = 'a';
//	printf("%s\n", p);
//	printf("%c\n", *p);
//	printf("%s\n", ch);//这样是不可以的
//	printf("%c\n", ch);
//	return 0;
//}

#include <stdio.h>
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}
