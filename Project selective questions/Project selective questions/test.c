#define _CRT_SECURE_NO_WARNINGS
// 1.打印1-100间的奇数
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if ((i % 2) != 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//2.打印9×9乘法口诀表
//#include <stdio.h>
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < i + 1; j++)
//		{
//			printf("%d * %d = %-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//3.打印100-200之间的素数
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 101; i < 200; i = i + 2)
//	{
//		int j = 0, flag = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if ((i % j) == 0)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (0 == flag)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//4.判断三角形
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	while (scanf("%d%d%d", &a, &b, &c) != EOF)
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a) && (a - b < c) && (a - c < b) && (b - c < a))
//		{
//			if (a == b && b == c)
//			{
//				printf("等边三角形\n");
//			}
//			else if (a == b || a == c || b == c)
//			{
//				printf("等腰三角形\n");
//			}
//			else
//			{
//				printf("普通三角形\n");
//			}
//		}
//		else
//		{
//			printf("非三角形\n");
//		}
//	}
//	return 0;
//}

//5.最大公约数，最小公倍数
//法1
//#include <stdio.h>
//int main()
//{
//	int m = 0, n = 0;
//	while (scanf("%d%d", &m, &n) != EOF)
//	{
//		if (m == 0 || n == 0)//这个也很重要，需要考虑到
//		{
//			if (m == 0)
//				printf("最大公约数是%d,最小公倍数是%d\n", n, m);
//			else
//				printf("最大公约数是%d,最小公倍数是%d\n", m, n);
//		}
//		else
//		{
//			int k = m % n;
//			int p = m * n;
//			while (k)//辗转相除实现时，可以不去考虑m > n,因为加入m = 16, n = 28在第一次交换时，已经换过来了。
//			{
//				m = n;
//				n = k;
//				k = m % n;
//			}
//			p = p / n;
//			printf("最大公约数是%d,最小公倍数是%d\n", n, p);
//		}
//	}
//	return 0;
//}
//法2 递归
//#include <stdio.h>
//int gcd(int x, int y)
//{
//	if (x == 0 || y == 0)//这个也很重要，需要考虑到
//	{
//		if (x == 0)
//			return y;
//		else
//			return x;
//	}
//	else
//		return gcd(y, x % y);
//}
//int main()
//{
//	int m = 0, n = 0;
//		while (scanf("%d%d", &m, &n) != EOF)
//		{
//			int ret = gcd(m, n);
//			printf("%d\n", ret);
//		}
//		return 0;
//}
//7.
//8.计算最大值和最小值的差值(输⼊10个整数，写代码找出其中最⼤值和最⼩值，计算最⼤值和最⼩值的差，并打印出差值结果)
//法1
//#include <stdio.h>
//int main()
//{
//	int i = 0, max = 0, min = 0;
//	int arr[10] = { 0 };
//	while (1)
//	{
//		for (i = 0; i < 10; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		min = arr[0];
//		max = arr[0];
//		for (i = 0; i < 10; i++)
//		{
//			if (arr[i] > max)
//			{
//				max = arr[i];
//			}
//			if (arr[i] < min)
//			{
//				min = arr[i];
//			}
//		}
//		printf("%d\n", max - min);
//	}
//	return 0;
//}

//法2，不使用数组
//#include <stdio.h>
//#include <limits.h>
//int main()
//{
//	int arr = 0;
//	while (1)
//	{
//		scanf("%d", &arr);
//		int max = arr;
//		int min = arr;
//		int i = 0;
//		for (i = 1; i < 10; i++)
//		{
//			scanf("%d", &arr);//每次更新，始终只有一个arr
//			if (arr > max)
//				max = arr;
//			if (arr < min)
//				min = arr;
//		}
//		printf("%d\n", max - min);
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	char ch = 'A';
	for (ch = 'A'; ch <= 'D'; ch++)
	{
		if ((ch != 'A') + (ch == 'C') + (ch == 'D') + (ch != 'D') == 3)
		{
			printf("%c\n", ch);
		}
	}
	return 0;
}