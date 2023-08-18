#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//实现字符串左旋，右旋，本质上都可以转换成实现将字符串逆序。
//void Left1(char str[], int x, size_t y)//这是法一
//{
//	int i = 0, j = 0;
//	for (i = 0; i < x; i++)
//	{
//		char ret = str[0];
//		for (j = 0; j < y - 1; j++)
//		{
//			str[j] = str[j + 1];
//		}
//		str[j] = ret;
//	}
//}

//void Left2()//库函数的做法

//void Reverse(char str[], int x, int y)
//{
//	int left = x, right = y;
//	while (left <= right)
//	{
//		char ret = str[left];
//		str[left] = str[right];
//		str[right] = ret;
//		left++;
//		right--;
//	}
//}
//
//void Left3(char str[], int x, size_t y)
//{
//	int z = (int)y;
//	Reverse(str, 0, x - 1);
//	Reverse(str, x, z - 1);
//	Reverse(str, 0, z - 1);
//}
//int main()
//{
//	int i = 0;
//	char str[100] = { '0' };
//	//char* str[100] = { '0' };这样是不行的，这样的常量字符串不能更改值。
//	printf("请输入字符串:");
//	gets(str);
//	printf("请输入自旋次数:");
//	scanf("%d", &i);
//	size_t sz = strlen(str);
//	int time = i % sz;
//	//Left(str, time, sz);
//	Left3(str, time, sz);
//	puts(str);
//	return 0;
//}
//sizeof(arr)，arr代表整个数组，也只是在主函数里定义数组的时候才成立，如果作为形参在函数里的时候，sizeof(arr)里的arr只相当于首元素地址

//void Reverse(char str[], int x, int y)
//{
//    int left = x, right = y;
//    while (left <= right)
//    {
//        char ret = str[left];
//        str[left] = str[right];
//        str[right] = ret;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char arr[10001] = { '0' };
//    while (gets(arr))
//    {
//        size_t sz = strlen(arr);
//        Reverse(arr, 0, (int)sz - 1);
//        puts(arr);
//    }
//    return 0;
//}

//杨氏矩阵

//void Yang(int arr[][100], int x, int y, double k)
//{
//	int i = 0, j = y - 1;
//	while (i < x && j >= 0)
//	{
//		if (k > arr[i][j])
//		{
//			i++;
//		}
//		else if (k < arr[i][j])
//		{
//			j--;
//		}
//		else
//		{
//			printf("找到了，第%d行，第%d列\n", i + 1, j + 1);
//			break;
//		}
//	}
//	if (i == x || j < 0)
//	{
//		printf("没有找到这个数");
//	}
//}
//int main()
//{
//	//int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	//Yang(arr, 3, 3, 3.5);
//	int arr[100][100] = { 0 };
//	int i = 0, j = 0, k = 0, m = 0, a = 0;
//	printf("请输入杨氏矩阵的行和列:");
//	scanf("%d%d", &i, &j);
//	printf("请输入二维数组的元素:");
//	for (k = 0; k < i; k++)
//	{
//		for (m = 0; m < j; m++)
//		{
//			scanf("%d", &arr[k][m]);
//		}
//	}
//	printf("请输入要查找的数字:");
//	scanf("%d", &a);
//	Yang(arr, i, j, a);
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4 
//	printf("%d\n", sizeof(a[0]));//第一行数组，16
//	printf("%d\n", sizeof(a[0] + 1));//4/8,第一行数组第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1))); //4
//	printf("%d\n", sizeof(a + 1));//4/8，第二行数组的地址
//	printf("%d\n", sizeof(*(a + 1)));//16，第二行数组
//	printf("%d\n", sizeof(&a[0] + 1));//4/8,第二行数组的地址
//	printf("%d\n", sizeof(*(&a[0] + 1))); //16
//	printf("%d\n", sizeof(*a));//第一行数组，16
//	printf("%d\n", sizeof(a[3]));//16
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//1,6,(aa + 1)代表的是aa[1]整个数组的地址，但是数值上和aa[1]的首元素的地址是一样的
//	return 0;
//}

int main()
{
	int i = 10;
	int arr[3] = { 0, 1, 2 };
	int arr1[2][2] = { 4, 3, 2, 1 };
	int* p = &i;
	int* ptr = (int*)i;
	int* ptr1 = (int*)(*(arr + 1));
	int* ptr2 = (int*)(*(arr1 + 1));
	printf("%p\n", p);
	printf("%p\n", ptr);//单纯的将数字1变为地址0000000000000001
	printf("%p\n", &arr[1]);
	printf("%p\n", ptr1);//单纯的将数字1变为地址0000000000000001
	printf("%p\n", arr1 + 1);
	printf("%p\n", &arr1[1][0]);
	printf("%p\n", ptr2);
	printf("%d\n", *(arr1 + 1));//这就错了，因为代表的是整个第二行的数组的地址，所以解引用出来的东西是一串数字，无法用整形打印出来，放不下。
	printf("%d\n", *(arr1[0] + 1));//3
	return 0;
}


