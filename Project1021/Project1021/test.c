#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
//int main()
//{
//	FILE* fp = fopen("test1.txt", "w");
//	if (fp == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	char arr1[15] = "abcdef\n_ _";
//	fputs(arr1, fp);
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* fpread = fopen("test1.txt", "r");
//	if (fpread == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	FILE* fpwrite = fopen("test2.txt", "w");
//	if (fpwrite == NULL)
//	{
//		perror("fopen");
//		fclose(fpread);
//		fpread = NULL;
//		return 1;
//	}
//	char str[100] = { '0' };
//	while ((fgets(str, 3, fpread)) != NULL)
//	{
//		fputs(str, fpwrite);
//	}
//	fclose(fpwrite);
//	fpwrite = NULL;
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 1);
//	return 0;
//}

//int main()
//{
//	FILE* fp = fopen("test2.txt", "r");
//	if (fp == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	char arr1[100] = { '0' };
//	char* p = fgets(arr1, 3, fp); 
//	puts(p);
//	char* p1 = fgets(arr1, 4, fp);
//	puts(p1);
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* fpread = fopen("test1.txt", "r");
//	if (fpread == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	FILE* fpwrite = fopen("test2.txt", "w");
//	if (fpwrite == NULL)
//	{
//		perror("fopen");
//		fclose("fpread");
//		fpread = NULL;
//		return 1;
//	}
//	char arr[100] = { '0' };
//	char* p = fgets(arr, 3, fpread);
//	fputs(p, fpwrite);
//	fclose(fpwrite);
//	fpwrite = NULL;
//	return 0;
//}

//fgets的num参数是包括了'\0'，比如说我写3，那就输入的是ab

// 计算Func3的时间复杂度？
//void Func3(int N, int M)
//{
//	int count = 0;
//	for (int k = 0; k < M; ++k)
//	{
//		++count;
//	}
//	for (int k = 0; k < N; ++k)
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}//不确定M和N的关系，就用O(M + N),N远大于M O(N), M远大于N O(M)

// 计算Func4的时间复杂度？
//void Func4(int N)
//{
//	int count = 0;
//	for (int k = 0; k < 100; ++k)
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}//O(1)，不是1次，是常数次

//int Fun4(int x)
//{
//	int i = 0, count = 0;
//	for (i = 0; i < x; i++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int ret = Fun4(1000);
//	printf("%d\n", ret);
//	return 0;
//}//100和10000000对于CPU来说没有区别，都是常数。

//const char* strchr(const char* str, int character);//最好1次，最坏N次

//时间复杂度取最坏的情况，预期管理法。把期望放到最低，遇到的就会是惊喜和如约而至。

//时间复杂度是通过算法的思想来进行计算，不要看循环，之后挑选时间复杂度更优的来敲代码。

// 计算BubbleSort的时间复杂度？
//void BubbleSort(int* a, int n)
//{
//	assert(a);
//	for (size_t end = n; end > 0; --end)
//	{
//		int exchange = 0;
//		for (size_t i = 1; i < end; ++i)
//		{
//			if (a[i - 1] > a[i])
//			{
//				Swap(&a[i - 1], &a[i]);
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//			break;
//	}
//}//(1 + n - 1) * (n - 1) / 2

int main()
{

}




