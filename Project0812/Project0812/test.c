#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	printf("%d\n", **pp);
//	return 0;
//}

//int main()//指针数组
//{
//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[] = { 2, 3, 4, 5 };
//	int arr3[] = { 3, 4, 5, 6 };
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);//parr[0][j] = arr1[j]，下标访问操作符=解引用的效果了
//		}
//	return 0;
//}

//int main()
//{
//	const char* c = "abcdef";//常量字符串，不能被修改
//	printf("%p\n", c);
//	const char* d = "abcdef";
//	printf("%p\n", d);
//	int a = 10;
//	int* p = &a;
//	int* p1 = &a;
//	printf("%p\n", p);
//	printf("%p\n", p1);
//	return 0;
//	return 0;
//}

//int main()//数组指针
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);
//	int(*p)[10] = &arr;//int(*)[10]类型
//	printf("%p\n", p);
//	int* p1 = arr;
//	printf("%p\n", p1);//int*类型
//	char* ch[8];
//	char* (*p2)[8] = &ch;
//	return 0;
//}

//int main()
//{
//	int arr[] = { 0, 1, 2, 3 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	printf("\n");
//	char arr1[] = { "abc" };
//	char(*p1)[] = &arr1;
//	printf("%s\n", *p1);
//	return 0;
//}

//void test(int(*p)[1], int x, int y)//[1]必须要写,二维数组名是第一行数组的地址，所以就是这个数组指针类型
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int arr[2][1] = { { 0 }, { 1 } };//这是正常情况，传参的时候是int arr[]，方括号里可以没有
//	test(arr, 2, 1);
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 0, 1, 2 };//二位数组，列永远不可以省略
//	int(*p)[][5] = &arr;
//	printf("%p\n", p);
//	printf("%p\n", &arr);
//	return 0;
//}

//void test(int arr[][1], int x, int y)//二维数组传参，一定要把列和实参写成一样的，因为二维数组靠列来进行分配元素
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[2][1] = { { 0 }, { 1 } };
//	test(arr, 2, 1);
//	return 0;
//}

//二维数组在内存中是连续存放的，其实不是几行几列的排列，而是一长条

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("%p\n", Add);
//	printf("%p\n", Add);
//	int(*pf)(int x, int y) = &Add;
//	int ret = (*pf)(3, 5);
//	int ret1 = (pf)(3, 5);
//	printf("%d\n", ret);
//	printf("%d\n", ret1);
//	return 0;
//}

//int main()
//{
//	(*(void (*)())0)();//调用0地址处的函数，参数是无参，返回类型是void
//	void (*signal(int, void(*)(int)))(int);
//}

//int main()
//{
//	int arr[100][100] = { 0 };
//	int(*p)[1000] = &arr;
//	int i = 0, j = 0, k = 0;
//	printf("请输入杨辉三角形的行数:");
//	scanf("%d", &k);
//	for (i = 0; i < k; i++)
//	{
//		for (j = 0; j < i + 1; j++)
//		{
//			if ((0 == j) || (i == j))
//			{
//				p[i][j] = 1;
//			}
//			else
//			{
//				p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
//			}
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int(*p)[3] = &arr;
//	int i = 0, j = 0, k = 0;
//begin:
//	printf("请输入你需要查找的数:");
//	scanf("%d", &k);
//	int flag = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int left = 0;
//		int right = 2;
//		while (left <= right)
//		{
//			int middle = (left + right) / 2;
//			if (k == p[i][middle])
//			{
//				printf("找到了，在第%d行第%d列\n", i + 1, middle + 1);
//				flag = 1;
//				break;
//			}
//			if (k > p[i][middle])
//			{
//				left = middle + 1;
//			}
//			if (k < p[i][middle])
//			{
//				right = middle - 1;
//			}
//		}
//	}
//	if (0 == flag)//很重要
//	{
//		printf("没有找到这个数\n");
//	}
//	goto begin;
//	return 0;
//}

//int main()
//{
//	int arr[3] = { 0, 1, 2 };
//	int* p = &arr[0];
//	int* p2 = &arr[1];
//	int a = p - p2;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (p < arr + sz) //指针的⼤⼩⽐较
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 10, j = 20;;
//	const int* p = &i;
//	int* const p2 = &j;
//	p = &j;
//	*p = 20;
//	p2 = &i;
//	*p2 = 10;
//}

//#include <stdio.h>
//int main()
//{
//	int* p;//局部变量指针未初始化，默认为随机值
//	*p = 20;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    int* p = &arr[0];
//    int i = 0;
//    for (i = 0; i <= 11; i++)
//    {
//        //当指针指向的范围超出数组arr的范围时，p就是野指针
//        *(p++) = i;
//    }
//    return 0;
//}

//int main()
//{
//	int i = 10;
//	int* p = &i;
//	int* p1 = NULL;
//	*p1 = 20;
//	printf("%d\n", *p1);
//	return 0;
//}

//int main()
//{
//	int arr[3] = { 0, 1, 2 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		*(p++) = i;
//	}
//	p = NULL;
//	p = arr;
//	if (p != NULL)
//	{
//		for (i = 0; i < 3; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,67,7,8,9,10 };
//	int* p = &arr[0], i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p++) = i;
//	}
//	//此时p已经越界了，可以把p置为NULL
//	p = NULL;
//	//下次使⽤的时候，判断p不为NULL的时候再使⽤
//	//...
//	p = &arr[0];//重新让p获得地址
//	if (p != NULL) //判断
//	{
//		for
//	}
//	return 0;
//}

//自加自减,数组传参

//int main()//后置++在遇到任何需要操作的东西，都要先赋上x的值，再加加
//{
//	int i = 10, j = 10, k = 0, p = 0;
//	i++;
//	++i;
//	k++;
//	printf("%d\n", i);
//	printf("%d\n", ++j + j++);
//	printf("%d\n", k);
//	printf("%d\n", p++);
//	return 0;
//}

#include <stdio.h>
#include <assert.h>
int main()
{
	int a = 10;
	int* p = &a;
	p = NULL;
	assert(p != NULL);
	printf("1");
	return 0;
}




