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

//#include <stdio.h>
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}

//void PrintArray1(int(*array)[100], int row, int col)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(array + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//void PrintArray(int* array, int row, int col)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < row * col; i++)
//	{
//		printf("%d ", *(array + i));
//		if (0 == ((i + 1) % col))
//		{
//			printf("\n");
//		}
//	}
//}



//int main()
//{
//	int array[3][5] = { { 0, 1, 2, 3, 4 }, { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 } };
//	PrintArray(&array[0][0], 3, 5);
//}


//int main()
//{
//	int m = 0, n = 0, i = 0, j = 0;
//	int array[100][100] = { 0 };
//	printf("请输入二维数组的行和列:");
//	scanf("%d%d", &m, &n);
//	printf("请输入二维数组的元素:");
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &array[i][j]);
//		}
//	}
//	//PrintArray1(array, m, n);
//	PrintArray(&array[0][0], m, n);
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[200] = { 0 };
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	arr[0] = 0;
//	for (i = 1; i < 7; i++)
//	{
//		if (0 == arr[i])
//		{
//			continue;
//		}
//		int j = arr[i];
//		for (j = j * j; j <= 100; j++)
//		{
//			if (arr[j - 1] != 0)
//			{
//				if (arr[j - 1] % arr[i] == 0)
//				{
//					arr[j - 1] = 0;
//				}
//			}
//		}
//	}
//	printf("这是使用筛选法判断出来的素数:");
//	for (i = 0; i < 100; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

//void Print(int* arr, int x, int y)//就用这个指针打印出来。
//{
//	int i = 0, j = 0;
//	/*for (i = 0; i < x * y; i++)
//	{
//		printf("%d ", *(arr + i));
//		if ((i + 1) % x == 0)
//		printf("\n");
//	}*/
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(arr + i * y + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int m = 0, n = 0, i = 0, j = 0;
//	printf("请输入二维数组的行和列:");//变长数组可以解决这个问题
//	scanf("%d%d", &m, &n);
//	int arr[100][100] = { 0 };
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//int arr[5][5] = { {1},{2},{3}, {4}, {5} };
//	Print((int*)arr, m, n);
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	int arr[] = { 1, 2 };
//	size_t sz = sizeof(arr);
//	printf("%zd\n", sizeof(i));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sz);
//	return 0;
//}

//int main()
//{
//	short a = 10;
//	printf("%zd\n", sizeof(a = a + 10));
//	printf("%d\n", a);
//}

//#include <stdio.h>
//int main()
//{
//	char arr1[3] = { 'a', 'b', 'c' };
//	char arr2[] = "abc";
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a + 0));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a + 1));
//	printf("%d\n", sizeof(a[1]));
//	printf("%d\n", sizeof(&a));
//	printf("%d\n", sizeof(*&a));
//	printf("%d\n", sizeof(&a + 1));
//	printf("%d\n", sizeof(&a[0]));
//	printf("%d\n", sizeof(&a[0] + 1));
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3 };
//	int arr2[] = { 0, 1, 2 };
//	printf("%zd\n", strlen(arr1));
//	printf("%zd\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//    char arr[] = { 'a','b','c','d','e','f' };
//    printf("%d\n", sizeof(arr));//6
//    printf("%d\n", sizeof(arr + 0));//4/8
//    printf("%d\n", sizeof(*arr));//1
//    printf("%d\n", sizeof(arr[1]));//1
//    printf("%d\n", sizeof(&arr));//4/8
//    printf("%d\n", sizeof(&arr + 1));//4/8
//    printf("%d\n", sizeof(&arr[0] + 1));//4/8
//    printf("%d\n", strlen(arr));//随机值，因为目前不确定到哪里遇到字节00
//    printf("%d\n", strlen(arr + 0));//随机值,但是比上一个小1
//    //printf("%d\n", strlen(*arr));//非法访问，访问冲突，*arr = a,访问以a的ASCII码值0000000000000097为地址的内存空间，但是其实是没有权限的
//    //printf("%d\n", strlen(arr[1]));//×，下文都以此代表访问冲突
//    printf("%d\n", strlen(&arr));//随机值
//    printf("%d\n", strlen(&arr + 1));//随机值
//    printf("%d\n", strlen(&arr[0] + 1));//随机值
//    return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7，有'\0'
//	printf("%d\n", sizeof(arr + 0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	printf("%d\n", strlen(*arr));//×
//	printf("%d\n", strlen(arr[1]));//×
//	printf("%d\n", strlen(&arr));//6，指针取得也是第一个元素的地址
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4/8
//	printf("%d\n", sizeof(p + 1));//4/8
//	printf("%d\n", sizeof(*p));//1,*p解引用出来的就是a，这是字符指针变量的用法，p直接用才是字符串
//	printf("%d\n", sizeof(p[0]));//p[0]就是a,所以是1
//	printf("%d\n", sizeof(&p));//4/8
//	printf("%d\n", sizeof(&p + 1));//4/8
//	printf("%d\n", sizeof(&p[0] + 1));//4/8
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	printf("%d\n", strlen(*p));//×
//	printf("%d\n", strlen(p[0]));//×
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//随机值
//	return 0;
//}

int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4 
	printf("%d\n", sizeof(a[0]));//第一行数组，16
	printf("%d\n", sizeof(a[0] + 1));//4/8,第一行数组第二个元素的地址
	printf("%d\n", sizeof(*(a[0] + 1))); //4
	printf("%d\n", sizeof(a + 1));//4/8，第二行数组的地址
	printf("%d\n", sizeof(*(a + 1)));//16，第二行数组
	printf("%d\n", sizeof(&a[0] + 1));//4/8,第二行数组的地址
	printf("%d\n", sizeof(*(&a[0] + 1))); //16
	printf("%d\n", sizeof(*a));//第一行数组，16
	printf("%d\n", sizeof(a[3]));//16
	return 0;
}
